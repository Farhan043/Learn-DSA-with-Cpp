

// This code demonstrates the use of increment and decrement operators in C++.
#include <iostream>
using namespace std;
int main() {
    int a = 5, b = 10;

    // Increment
    cout << "Initial value of a: " << a << endl;
    cout << "Incrementing a: " << ++a << endl; // Pre-increment
    cout << "Value of a after pre-increment: " << a << endl;
    cout << "Incrementing a again: " << a++ << endl; // Post-increment
    cout << "Value of a after post-increment: " << a << endl;

    // Decrement
    cout << "Initial value of b: " << b << endl;
    cout << "Decrementing b: " << --b << endl; // Pre-decrement
    cout << "Value of b after pre-decrement: " << b << endl;
    cout << "Decrementing b again: " << b-- << endl; // Post-decrement
    cout << "Value of b after post-decrement: " << b << endl;
    // Final values
    cout << "Final value of a: " << a << endl;
    cout << "Final value of b: " << b << endl;

    return 0;
}




// This code demonstrates the use of increment and decrement operators in a conditional statement.
  #include <iostream>
  using namespace std;

int main() {
    int a = 1, b = 2;

    // if(a-- > 0 && ++b > 2) {
    if (++a > 1 || b-- > 2) {
        cout << "Condition is true" << endl;
    } else {
        cout << "Condition is false" << endl;
    }
    cout << "a: " << a << ", b: " << b << endl;
    return 0;
}



// This code demonstrates the use of pre-increment operator in a mathematical expression.
#include <iostream>
using namespace std;

int main() {
   int number = 10;
   cout << (25 * (++number)) << endl;
   return 0;
}