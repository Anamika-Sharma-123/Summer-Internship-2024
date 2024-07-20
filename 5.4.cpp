#include<iostream>
using namespace std;

int main(){
    int apple_count(5); //functional variable
    int orange_count(10);
    int fruit_count (apple_count + orange_count);
    //int had initialization(doesnt exist3 + doesnt exist4);

    //Information lost. less safe than braced initializers
    int narrowing_conversation_functional(2.9);

    cout<<"Apple count:"<<apple_count<<endl;
    cout<<"Orange count:"<<orange_count<<endl;
    cout<<"Fruit count:"<< fruit_count<<endl;
    cout<<"Narrowing conversion:"<<narrowing_conversation_functional<<endl; //will loose info
    return 0;
}
