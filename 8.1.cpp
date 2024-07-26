#include <iostream>
#include <list>
#include <algorithm> // For sort() and unique()
using namespace std;

void printList(const list<int>& numbers) {
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
}

void addElement(list<int>& numbers, int position, int element) {
    if (numbers.empty()) {
        numbers.push_front(element);
    } else {
        list<int>::iterator itr = numbers.begin();
        advance(itr, position);
        numbers.insert(itr, element);
    }
}

int main() {
    list<int> numbers = {1, 2, 3, 4, 5};
    list<int> another_list = {6, 7, 8};

    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Add Element\n";
        cout << "2. Reverse List\n";
        cout << "3. Sort List\n";
        cout << "4. Remove Duplicates (Unique)\n";
        cout << "5. Check if Empty\n";
        cout << "6. Get Size\n";
        cout << "7. Clear List\n";
        cout << "8. Merge with Another List\n";
        cout << "9. Print List\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int position, element;
                cout << "Enter position to add: ";
                cin >> position;
                cout << "Enter element to add: ";
                cin >> element;
                addElement(numbers, position, element);
                break;
            }
            case 2:
                numbers.reverse();
                cout << "List reversed.\n";
                break;
            case 3:
                numbers.sort();
                cout << "List sorted.\n";
                break;
            case 4:
                numbers.sort();
                numbers.unique();
                cout << "Duplicates removed.\n";
                break;
            case 5:
                if (numbers.empty()) {
                    cout << "The list is empty.\n";
                } else {
                    cout << "The list is not empty.\n";
                }
                break;
            case 6:
                cout << "The size of the list is: " << numbers.size() << endl;
                break;
            case 7:
                numbers.clear();
                cout << "List cleared.\n";
                break;
            case 8:
                numbers.merge(another_list);
                cout << "Lists merged.\n";
                break;
            case 9:
                cout << "List elements: ";
                printList(numbers);
                break;
            case 0:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 0);

    return 0;
}
