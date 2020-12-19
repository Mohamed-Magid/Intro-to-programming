#include <iostream>

using namespace std;

int main () {
    int numbers, temp, i=1,sum=0;
    cout << "How many numbers to sum?: ";
    cin >> numbers;
    while (i<=numbers){
        cin >> temp;
        sum+=temp;
        i++;
    }
    cout << sum;
    
    return 0;
}
