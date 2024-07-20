#include<iostream>
using namespace std;
int main()
{
	auto divide = [](int a, int b) -> double
	{
		if(b==0)
		{
			return 0; //Handle division by zero 
		}
		return static_cast<double>(a)/b;
	};
	cout<<"Divison result:"<<divide(10,2)<<endl;
	cout<<"Divisor by zero result:"<<divide(10,0)<<endl;
	return 0;
}
