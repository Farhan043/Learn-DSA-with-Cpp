

//Print Fibonacci Numbers
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << " Entered number: "<< " ";
    cin>>n;
    int a=0,b=1;
    cout << a << " " << b << " ";
    for(int i=2;i<n;i++){
        int c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    return 0;
}
