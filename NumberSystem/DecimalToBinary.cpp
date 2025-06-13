
// //This program converts a decimal number to binary using a simple algorithm.
// #include <iostream>
// using namespace std;

// int main() {
//     int num;
//     cout << "Enter a decimal number: ";
//     cin >> num;

//     int binary = 0;
//     int place = 1;

//     // while (num != 0) {
//     while (num > 0) {
//         int rem = num % 2;              
//         binary = binary + rem * place;  
//         place = place * 10;            
//         num = num / 2;                  
//     }

//     cout << "Binary = " << binary << endl;
//     return 0;
// }



//2nd Approach: This program converts a decimal number to binary using bitwise operations.
#include <iostream>
#include <math.h>
using namespace std;    

int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;

    int ans = 0;
    int i = 0;


    while(num != 0) {
        int bit = num & 1;
        ans = (bit * pow(10, i)) + ans;
        // ans = (ans * 10)+ bit; 
        num = num >> 1;
        i++;
    }
    cout << "Binary = " << ans << endl;
    return 0;
}


// // 3rd Approach: This program converts a decimal number to binary using bitset for 8-bit representation.
// #include <iostream>
// #include <bitset>
// using namespace std;

// int main() {
//     int num;
//     cout << "Enter a decimal number: ";
//     cin >> num;

//     // Convert to 8-bit binary using two's complement
//     bitset<8> binary(num);

//     cout << "Binary (8-bit) = " << binary << endl;

//     return 0;
// }



// // 4th Approach: This program converts a decimal number to 4-bit binary using two's complement representation.
// #include <iostream>
// #include <bitset>
// using namespace std;

// int main() {
//     int num;
//     cout << "Enter a decimal number (-8 to 7): ";
//     cin >> num;

//     if (num < -8 || num > 7) {
//         cout << "❌ Error: Number out of 4-bit range!" << endl;
//         return 0;
//     }

//     bitset<4> binary(num); // Converts to 4-bit two's complement
//     cout << "4-bit binary = " << binary << endl;

//     return 0;
// }
