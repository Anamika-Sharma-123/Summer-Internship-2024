//2D Array
#include<iostream>
using namespace std;
int main(){
    //Declaration and initialization of array
    int arr[3][4]= {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    //Accessing elements
    for(int i=0; i<3; ++i){
        for(int j=0; j<3; ++j){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}