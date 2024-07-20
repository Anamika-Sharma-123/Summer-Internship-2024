#include <iostream>
#include <array>
#include<algorithm>
using namespace std;

int main() {
    //STL array with 2 instances of 7 and correct size
    array<int, 5> a = {3, 4, 7, 2, 7}; 
    int size = a.size();
    cout << "Array size: " << size << endl;

    //Printing all the elements of the array
    for (int i = 0; i < size; ++i) {
        cout << "Element at index " << i << ": " << a[i] << endl;
    }
    //using predefined function
    cout<<"Element at index 3: "<<a.at(3)<<endl;
    bool trueFalse = a.empty();
    cout<<"Is the array empty (1 for true, 0 for false): "<<trueFalse<<endl;
    cout << "First element: " << a.front() << endl;
    cout << "Last element: " << a.back() << endl;

    //Count occurrence of 7
    int count_7 = count(a.begin(), a.end(), 7);
    cout<<"The number 7 occurs "<<count_7<<"Times in the array "<<endl;

    return 0;
}

