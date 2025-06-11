//Right-Angled Triangle (Stars) 
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  // Example: n = 5

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}


// Inverted Right-Angled Triangle Pattern
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}


//Floyd’s Triangle (1 to n)
#include <iostream>
using namespace std;

int main() {
    int n, num = 1;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num++ << " ";
        }
        cout << endl;
    }

    return 0;
}

//Number Pyramid
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Spaces
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }

        // Numbers
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}


// Palindrome Number Pyramid
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Spaces
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }

        // Descending numbers
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }

        // Ascending numbers
        for (int j = 2; j <= i; j++) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}
