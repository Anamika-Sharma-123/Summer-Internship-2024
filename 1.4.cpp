#include<iostream>
using namespace std;
//Creating a function for addition of two number
int addTwo(int x, int y){
    return(x+y);
}
int main() {
    int a, b, sum;
    // Asking for input
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    // Calling the user-defined function
    sum = addTwo(a, b);
    // Displaying the output
    cout << "Sum of " << a << " and " << b << " is: " << sum << endl;
    return 0;
}
