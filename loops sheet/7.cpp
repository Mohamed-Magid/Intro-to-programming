#include <iostream>
using namespace std;

int main() {
    int n, reversed = 0, remainder;

    cout << "Enter a number to reverse: ";
    cin >> n;
    while(n != 0) {
        remainder = n%10;
        reversed = reversed*10 + remainder;
        n /= 10;
    }

    cout << "Reversed= " << reversed;

    return 0;
}
