//Problem statement in STACK
/*
1.size of the stack
2. insert element into the stack
3. delete element from the stack
4. top element of the stack
5. exit

 Enter your choice=1
 size of the stack= 0
 1.size of the stack
2. insert element into the stack
3. delete element from the stack
4. top element of the stack
5.exit*/
#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack<int> s;
    int choice;

    do {
        cout << "1. Size of the stack" << endl;
        cout << "2. Insert element into the stack" << endl;
        cout << "3. Delete element from the stack" << endl;
        cout << "4. Top element of the stack" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Size of the stack: " << s.size() << endl;
                break;
            case 2:
                int element;
                cout << "Enter the element to insert: ";
                cin >> element;
                s.push(element);
                break;
            case 3:
                if (!s.empty()) {
                    cout << "Deleted element: " << s.top() << endl;
                    s.pop();
                } else {
                    cout << "Stack is empty." << endl;
                }
                break;
            case 4:
                if (!s.empty()) {
                    cout << "Top element: " << s.top() << endl;
                } else {
                    cout << "Stack is empty." << endl;
                }
                break;
            case 5:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
