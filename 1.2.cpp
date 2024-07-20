#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers (a, b, and c): ";
    cin >> a >> b >> c;

    if (a >= b) {
        // Compare 'a' with 'c'
        if (a >= c) {
            cout << "The Largest Among Three Numbers is: " << a << endl;
        } else {
            cout << "The Largest Among Three Numbers is: " << c << endl;
        }
    } else {
        // If 'b' is greater than 'a', compare 'b' with 'c'
        if (b >= c) {
            cout << "The Largest Among Three Numbers is: " << b << endl;
        } else {
            cout << "The Largest Among Three Numbers is: " << c << endl;
        }
    }

    return 0;
}
