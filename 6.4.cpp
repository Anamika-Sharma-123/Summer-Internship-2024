#include<iostream>
#include<string>
using namespace std;
class Teacher
{
	private:
		double salary; //data hiding
	public:
		string name;
		string dept;
		string subject;
		void changeDept(string newDept)
		{
			dept =newDept;
		}
		void getInfo()
		{
			cout<<"Teacher name "<<name<<endl;
			cout<<"Teacher subject"<<subject<<endl;
		}
};
int main()
{
	Teacher t1;
	t1.name="sarang";
	t1.subject="Math";
	t1.changeDept=("CSE");
	t1.getInfo();
}
Teacher(){
	cout<<"constructor is calling"<<endl;
}

