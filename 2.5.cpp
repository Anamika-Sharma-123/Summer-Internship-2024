#include<iostream>
using namespace std;
int main(){
    int array[5] = {10,6,7,8,9};
int user_input;
int counter = 0;
cout<<"Enter the number you want to search for in the array:";
cin>>user_input;
for(auto x: array){
    if(x==user_input){
        cout<<"Number\n"<<user_input<<"\nis found at the location:"<<counter;
        exit(0);
        }
    counter++;
    }
cout<<"Not  found!";
return 0;
}
