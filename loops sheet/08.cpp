#include <iostream>
using namespace std;

int main() {
    int sum = 0, n;
    cout << "Input upper limit: ";
    cin >> n;
    for (int i = 1; i<= n; i+=2){
        sum += i;
    }
    cout << "Sum = " << sum;
    
    return 0;
}
