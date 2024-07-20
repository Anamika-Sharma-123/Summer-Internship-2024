#include<iostream>
using namespace std;
int main(){
    int a=10;
    int b=20;
    cout<<"Before"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;

    int temp=a;
    a=b;
    b=temp;
    cout<<"After"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;

    return 0;
}
