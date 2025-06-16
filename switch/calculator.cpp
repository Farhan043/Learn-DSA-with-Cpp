

// can you make calculator that can do addition, subtraction, multiplication, division, exponentiation, and modulus?
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    char op;
    double num1, num2;

    cout << "Enter an operator (+, -, *, /, ^, %): ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch(op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            if(num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2;
            else
                cout << "Error! Division by zero is not allowed.";
            break;
        case '^':
            cout << num1 << " ^ " << num2 << " = " << pow(num1, num2);
            break;
        case '%':
            if(num2 != 0)
                cout << num1 << " % " << num2 << " = " << static_cast<int>(num1) % static_cast<int>(num2);
            else
                cout << "Error! Modulus by zero is not allowed.";    
            break;
        default:
            cout << "Error! Invalid operator.";
    }

    return 0;
}


    
