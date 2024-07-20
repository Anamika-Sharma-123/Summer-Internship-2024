#include<iostream>
#include<deque>
using namespace std;
int main(){
    //deque means u can perform push and pop operation from both end.
    deque<int>d;
    //insertion
    d.push_back(10);
    d.push_front(11);
    for(int i:d){
        cout<<i<<" ";
    }
    //delete
    d.pop_back();
    for(int i:d){
        cout<<i<<" ";
    }
    //delete from front
    d.pop_front();
    for(int i:d){
        cout<<i<<" ";
    }

    cout<<"front "<<d.front()<<endl;
    cout<<"back "<<d.back()<<endl;
    cout<<"Empty of not "<<d.empty()<<endl;
    cout<<"Before erase "<<d.size()<<endl;
    d.erase(d.begin(), d.begin()+1);
    cout<<"After erase "<<d.size()<<endl;
}
