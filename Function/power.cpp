#include<iostream>
using namespace std;

int power(int num1, int num2) {
    int ans = 1;
    for(int i = 1; i <= num2; i++) {
        ans = ans * num1;
    }
    return ans;
}
int main()
{

    //   int c , d;
    // cin>> c >> d;

    // int answer = power(c,d);
    // cout << " answer is " << answer << endl;

    // return 0;

    // Test the power function with multiple inputs
    for(int i=0; i<3; i++) {
        int a, b;
        cin >> a >> b;
        cout << power(a, b) << endl;
    }
    return 0;

}