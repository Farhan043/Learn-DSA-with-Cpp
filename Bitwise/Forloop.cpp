
// This code demonstrates a simple for loop in C++ that prints numbers from 1 to 5.
#include <iostream>
using namespace std;
int main() {
  
  for (int i = 1; i <= 5; i++) {
    cout << i << endl;
  }
  
  return 0;
}


// This code demonstrates a for loop that calculates the sum of numbers from 1 to n.
#include <iostream>
using namespace std;
int main() {

  int n;
  cout << "Enter a number: ";
  cin >> n;

  int sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += i;
  }

  cout << "The sum of numbers from 1 to " << n << " is " << sum << endl;

  return 0;
}
