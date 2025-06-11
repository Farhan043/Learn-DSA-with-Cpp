
// This code demonstrates the use of bitwise operators in C++. It performs bitwise AND, OR, XOR, and NOT operations on two integers, a and b, and prints the results.
#include <iostream>
using namespace std;
int main() {
    int a = 5, b = 3;

    // Bitwise AND
    cout << "a & b = " << (a & b) << endl;

    // Bitwise OR
    cout << "a | b = " << (a | b) << endl;

    // Bitwise XOR
    cout << "a ^ b = " << (a ^ b) << endl;

    // Bitwise NOT
    cout << "~a = " << (~a) << endl;
    return 0;
}

