#include<iostream>
using namespace std;
int main(){
    for(int i=2; i<=5; i++) //Prints a stair format star pattee=rn which goes from 1 to 5 star
    {
        {
            for(int j=1; j<=5; j++){
                if(i<=j) //use if (i<=j) for two-right triangle which goes from 5 to 1 star
                cout<<"*";
                else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }
        return 0;
    }
}
