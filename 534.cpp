#include <iostream>
#include <stack>

using namespace std;

void displayMenu() {
    cout << "Menu:" << endl;
    cout << "1. Size of the stack" << endl;
    cout << "2. Insert element into the stack" << endl;
    cout << "3. Delete element from the stack" << endl;
    cout << "4. Top element of the stack" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice: ";
}

int main() {
    stack<int> s;
    int choice, element;

    while (true) {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Size of the stack: " << s.size() << endl;
                break;
            case 2:
                cout << "Enter the element to insert: ";
                cin >> element;
                s.push(element);
                cout << "Element inserted." << endl;
                break;
            case 3:
                if (s.empty()) {
                    cout << "Stack is empty. Cannot delete element." << endl;
                } else {
                    s.pop();
                    cout << "Top element deleted." << endl;
                }
                break;
            case 4:
                if (s.empty()) {
                    cout << "Stack is empty. No top element." << endl;
                } else {
                    cout << "Top element of the stack: " << s.top() << endl;
                }
                break;
            case 5:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

        cout << endl;
    }

    return 0;
}

