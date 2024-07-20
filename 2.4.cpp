#include<iostream>
using namespace std;
int main(){
    int array[5]={10,20,30,40,50};
    //To find the minimum or maximum element in an array
    int max = -32678;
    for(auto temp :array){
        if(temp > max) //use if(temp<min) then win = temp with min = INT64_MAx inir=tial for minimum
        {
            max= temp;
        }
    }
    return 0;
}
