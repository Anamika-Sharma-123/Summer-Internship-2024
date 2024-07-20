#include<iostream>
using namespace std;
int add(int a, int b){
    int sum= a+b;
    cout<<"Sum of two numbers:"<<sum<<"\n";
}
int add(int a, int b, int c){
    int sum_of_three=a+b+c;
    cout<<"Sum of three numbers:"<<sum_of_three<<"\n";
}
int main(){
    add(3,5);
    add(9,7,6);
    return 0;
}
//Function overloading: multiple functions can have same name.
//Polymorphism: means 'many forms'. It allow objects to be treated as instances of their parent class rather than their actual class.
//Run-time polymorphism:This happens when an object’s method is invoked/called during runtime rather than during compile time.
// Runtime polymorphism is achieved through function overriding. The function to be called/invoked is established during runtime.
//Compile-time polymorphism:The method is called/invoked during compile time.
//Implemented via function overloading and operator overloading.
