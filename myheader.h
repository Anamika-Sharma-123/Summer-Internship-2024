#ifndef MYHEADER_H
#define MYHEADER_H

#include <iostream>
using namespace std;

class Functions {
    string name;
    int age;

public:
    Functions(string n, int a) {
        name = n;
        age = a;
    }

    void updateDetails(string n, int a) {
        name = n;
        age = a;
    }

    void displayDetails() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

#endif // MYHEADER_H
