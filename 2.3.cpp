#include<iostream>
using namespace std;
int main(){
    int array[5]= {10,20,30,40,50};
    //To find sum of elements in an array
    int sum=0;
    for (auto x: array) //automatically 
        sum += x;
        cout<<"sum is "<<sum;
    return 0;
}
