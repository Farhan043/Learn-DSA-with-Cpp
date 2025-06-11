

//Right-Angled Triangle
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    // int count = 1;
    while (i <= n)
    {
        int j = 1;
        int value = i;
        while (j <= i)
        {
            cout << value << " ";
            value++;
            //  cout << i << " ";
            //  cout << j << " ";
            //  cout << count << " ";
            //  count++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}



//Square Pattern
  #include <iostream>
  using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 1;
 int count = 1;
    while(i <= n) {
        int j = 1;  
        while(j <= n) {
            cout << n-j+1 << " "; 
             cout << count << " "; 
             count++; 
             cout <<  " *";
             cout << j << " "; 
            j++;
        }
        cout << endl; 
        i++;
    }
    return 0 ;

}