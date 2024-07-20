#include <iostream>
#include <string>

int main() {
    std::string str = "Hello World";

    // Length of the string
    std::cout << "Length of the string: " << str.length() << std::endl;

    // Accessing a character at a specific position (index)
    char charAtIndex = str.at(6); // 'W'
    std::cout << "Character at index 6: " << charAtIndex << std::endl;

    // Appending a string
    str.append(" from C++");
    std::cout << "Appended string: " << str << std::endl;

    // Case-insensitive string comparison
    std::string compareStr = "HELLO WORLD";
    if (str.compare(compareStr) == 0) {
        std::cout << "Strings are identical (case-insensitive)" << std::endl;
    } else {
        std::cout << "Strings are different" << std::endl;
    }

    // Finding a substring
    std::string searchTerm = "World";
    size_t foundPos = str.find(searchTerm);
    if (foundPos != std::string::npos) {
        std::cout << "Substring found at position " << foundPos << std::endl;
    } else {
        std::cout << "Substring not found" << std::endl;
    }

    return 0;
}
