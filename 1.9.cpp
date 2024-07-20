//A student will not be allowed to sit in exam if his/her attendence is less than 75%.Take following input from user:
//Number of classes held
//Number of classes attended.
//And print:percentage of class attended
//Is student is allowed to sit in exam or not.
#include<iostream>
using namespace std;
int main(){
    int classes_held, classes_attended;
    cout<<"Enter the no of classes held:";
    cin>>classes_held;
    cout<<"Enter the no of classes attended:";
    cin>>classes_attended;

    double percentage=((double)classes_attended/classes_held)*100;
    cout<<"Percentage:"<<percentage<<"%"<<endl;

    if(percentage >=75){
        cout<<"The student can sit in the exam";
    }else{
        cout<<"The student is not allowed to sit in the exam";
    }
    return 0;
}
