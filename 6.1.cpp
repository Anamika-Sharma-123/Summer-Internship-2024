#include<iostream>
using namespace std;
int main()
{
	const char * message {"hello world"};
	cout<<"message : "<<message<<endl;//Hello World!
	//*message = "B";// compile error
	cout<<"*message : "<<*message<<endl;//H
	//Allow users to modify the string 
	char message1[] {"Hello World"};
	message1[0]='B';
	cout<<"message1 : "<<message1<<endl;//Bello world!
	return 0;
}
