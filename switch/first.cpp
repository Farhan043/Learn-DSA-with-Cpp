
// This code demonstrates a switch statement that prints the name of the day of the week based on user input.
#include <iostream>
using namespace std;
int main()
{
    int day;
    cout << "Enter a number (1-7) for the day of the week: ";
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "Monday" << endl;
    case 2:
        cout << "Tuesday" << endl;
    case 3:
        cout << "Wednesday" << endl;
    case 4:
        cout << "Thursday" << endl;
    case 5:
        cout << "Friday" << endl;
    case 6:
        cout << "Saturday" << endl;
    case 7:
        cout << "Sunday" << endl;
        break;
    default:
        cout << "Invalid day!" << endl;
    }
};
