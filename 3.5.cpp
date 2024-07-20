//Replace substring
#include<iostream>
#include<string>
using namespace std;

/*int main(){
    string str = "Hello, World";
        string from = "World";
        string to = "C++";

    size_t start_pos = str.find(from);
    if(start_pos != string::npos){
        str.replace(start_pos, from.length(), to);
    }
    cout<<"String after replacement: "<<str<<endl;
    return 0;
}*/
int main(){
string str= "Welcome to the MIET";
str.replace(3,4,"abcd");
cout<<str<<endl;
return 0;
}
