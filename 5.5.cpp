//user input- take user input value in Rs and convert it to pound
#include<iostream>
using namespace std;
int main(){
    float rupees;
    cout<<"Enter rupees:";
    cin>>rupees;
    cout<<"Conversion from rupees to pound:"<<rupees/106.90<<endl;
    float pound;
    cout<<"Enter pound:";
    cin>>pound;
    cout<<"Conversion from pound to rupees:"<<pound*106.90<<endl;
    return 0;
}
