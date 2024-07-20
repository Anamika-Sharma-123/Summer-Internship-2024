#include<iostream>
#include<deque>
using namespace std;
int main(){
	//deque means you can perform push and pop operation from both end.
	deque<int>d;
	//insertion
	d.push_back(10);
	d.push_back(11);
	for(int i:d)
	{
		cout<<i<<" ";
	}
	//delete
	d.pop_back();
	for(int i:d)
	{
		cout<<i<<" ";
	}
	cout<<"front"<<d.front()<<endl;
	cout<<"back "<<d.back()<<endl;
	cout<<"empty or not"<<d.empty()<<endl;
	cout<<"before erase"<<d.size()<<endl;
	d.erase(d.begun(),d.begin()+1);
	cout<<"after erase "<<d.size()<<endl;
}
