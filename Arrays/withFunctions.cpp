
// // This code demonstrates how to pass an array to a function in C++ and print its elements.
// #include <iostream>
// using namespace std;

// void printArray(int arr[], int size) {
//     for(int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
// }

// int main() {
//     int numbers[5] = {1, 2, 3, 4, 5};
//     printArray(numbers, 5);
//   cout << endl;


//      int num[10] = {1, 2, 3, 4, 5};
//     printArray(num, 10);
// }



// // This code demonstrates how to modify the first element of an array passed to a function in C++.
// #include <iostream>
// using namespace std;

// void changeFirst(int arr[], int size) {
//     arr[4] = 999;  // Change the first element
//     for(int i = 0; i < size; i++) {
//         cout << arr[i] << " ";  // Print the array elements
//     }
// }

// int main() {
//     int nums[15] = {1, 2, 3};
//     changeFirst(nums, 15);
// }





// This code demonstrates how to calculate the sum of elements in an array using a function in C++.
#include <iostream>
using namespace std;

int getSum(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int values[4] = {5, 10, 15, 20};
    int total = getSum(values, 2);
    cout << "Sum is: " << total;
}
