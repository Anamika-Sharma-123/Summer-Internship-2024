#include<iostream>
using namespace std;

// Function to add two numbers
void add(int a, int b) {
    cout << "Sum = " << a + b << endl;
}
// Function to subtract two numbers
void sub(int a, int b) {
    cout << "Subtract = " << a - b << endl;
}
// Function to multiply two numbers
void multiply(int a, int b) {
    cout << "Multiplication = " << a * b << endl;
}
// Function to divide two numbers
void divison(double a, double b){
    cout<<"Divison ="<< a/b <<endl;
}

int main() {
    int first, second;
    cout << "Please enter two number: ";
    cin >> first >> second;

    add(first, second);
    sub(first, second);
    multiply(first, second);
    divison(first, second);

    return 0;
}
