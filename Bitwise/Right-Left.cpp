// This code demonstrates the use of right and left shift operators in C++.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Right shift
    cout << "Right shift of " << n << " by 1: " << (n >> 1) << endl;

    // Left shift
    cout << "Left shift of " << n << " by 1: " << (n << 1) << endl;

    // Right shift by 2
    cout << "Right shift of " << n << " by 2: " << (n >> 2) << endl;

    // Left shift by 2
    cout << "Left shift of " << n << " by 2: " << (n << 2) << endl;

    return 0;
}