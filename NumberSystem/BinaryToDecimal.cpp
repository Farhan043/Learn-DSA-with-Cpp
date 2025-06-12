
// This program converts a binary number to decimal.
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a binary number: ";
    cin >> num;
    int decimal = 0;
    int base = 1; // Initialize base to 1 (2^0)

    while (num > 0) {
        int lastDigit = num % 10; // Get the last digit
        decimal += lastDigit * base; // Add to decimal value
        base *= 2; // Increase base by a factor of 2
        num /= 10; // Remove the last digit
    }

    cout << "Decimal = " << decimal << endl;
    return 0;
}


// This program converts a binary number to decimal using a different approach.
#include <iostream>
#include <math.h> // For pow function
using namespace std;

int main() {
    int num;
    cout << "Enter a binary number: ";
    cin >> num;
    int i = 0;
    int ans = 1; 

    while(num != 0) {
        int lastDigit = num % 10; // Get the last digit
       if(lastDigit == 1) {
         ans = ans + pow(2, i); // Add 2^i to ans if last digit is 1
    }
        num = num / 10; // Remove the last digit
        i++; // Increment the power index
    }
    cout << "Decimal = " << ans << endl; // Output the decimal value
    return 0;
}

   