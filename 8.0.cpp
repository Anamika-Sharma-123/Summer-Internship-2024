#include<iostream>
#include<list>
using namespace std;
int main(){
    //create a list
    list<int> numbers {1,2,1,3,4,1};
    //dispaly the origianl list
    cout<<"Initial List:";
    for(int number : numbers){
        cout<<number<<",";
    }
    //remove all the elements with value 1
    numbers.remove(1);
    
    //display the modified list
    cout<<endl<<"Final list:";
    for(int number : numbers){
        cout<<number<<",";
    }
    return 0;
}
    
