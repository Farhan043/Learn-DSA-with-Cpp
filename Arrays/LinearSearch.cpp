
// This code implements a linear search algorithm in C++. It searches for a target value in a sorted array of integers.
#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == key) {
            return true;  // Found
        }
    }
    return false;  // Not Found
}

int main() {
    int arr[] = {5, 3, 9, 1, 6};
    int size = 5;
    int key = 2;

    if(linearSearch(arr, size, key)) {
        cout << "Element found!" << key << endl;
    } else {
        cout << "Element not found!" << endl;
    }

    return 0;
}





// That's code for linear search in C++. It checks if a key exists in an array and returns its index if found, or -1 if not found.

#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == key) {
            return i;  // Found, return index
        }
    }
    return -1;  // Not Found
}

int main() {
    int arr[] = {7, 2, 8, 4, 1};
    int size = 5;
    int key = 4;

    int index = linearSearch(arr, size, key);

    if(index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found!" << endl;
    }

    return 0;
}
