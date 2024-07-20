#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

void insert(int arr[], int &size, int element, int position) {
    if (size >= MAX_SIZE || position > size || position < 0) {
        cout << "Insertion not possible." << endl;
        return;
    }
    for (int i = size; i > position; --i) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    size++;
    cout << "Element inserted." << endl;
}

void update(int arr[], int size, int position, int element) {
    if (position >= size || position < 0) {
        cout << "Update not possible." << endl;
        return;
    }
    arr[position] = element;
    cout << "Element updated." << endl;
}

void deleteElement(int arr[], int &size, int position) {
    if (position >= size || position < 0) {
        cout << "Deletion not possible." << endl;
        return;
    }
    for (int i = position; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }
    size--;
    cout << "Element deleted." << endl;
}

void read(int arr[], int size) {
    if (size == 0) {
        cout << "Array is empty." << endl;
        return;
    }
    cout << "Array elements: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void select(int arr[], int size, int position) {
    if (position >= size || position < 0) {
        cout << "Select not possible." << endl;
        return;
    }
    cout << "Element at position " << position << ": " << arr[position] << endl;
}

int main() {
    int arr[MAX_SIZE];
    int size = 0;
    int choice, element, position;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Insert\n";
        cout << "2. Update\n";
        cout << "3. Delete\n";
        cout << "4. Read\n";
        cout << "5. Select\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter element to insert: ";
                cin >> element;
                cout << "Enter position: ";
                cin >> position;
                insert(arr, size, element, position);
                break;
            case 2:
                cout << "Enter position to update: ";
                cin >> position;
                cout << "Enter new element: ";
                cin >> element;
                update(arr, size, position, element);
                break;
            case 3:
                cout << "Enter position to delete: ";
                cin >> position;
                deleteElement(arr, size, position);
                break;
            case 4:
                read(arr, size);
                break;
            case 5:
                cout << "Enter position to select: ";
                cin >> position;
                select(arr, size, position);
                break;
            case 6:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
    return 0;
}
