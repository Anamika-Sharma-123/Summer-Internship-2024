#include <iostream>
#include <map>
#include <functional>
#include <stdexcept>

// Define a type for calculator operations
using Operation = std::function<double(double, double)>;

// Main calculator class
class Calculator {
public:
    Calculator() {
        // Initialize the operations map
        operations['+'] = [](double a, double b) { return a + b; };
        operations['-'] = [](double a, double b) { return a - b; };
        operations['*'] = [](double a, double b) { return a * b; };
        operations['/'] = [](double a, double b) {
            if (b == 0) throw std::invalid_argument("Division by zero");
            return a / b;
        };
    }

    double calculate(char op, double a, double b) {
        if (operations.find(op) == operations.end()) {
            throw std::invalid_argument("Invalid operation");
        }
        return operations[op](a, b);
    }

private:
    std::map<char, Operation> operations;
};

int main() {
    Calculator calculator;
    char op;
    double a, b;

    std::cout << "Enter operation (e.g., +, -, *, /): ";
    std::cin >> op;
    std::cout << "Enter two operands: ";
    std::cin >> a >> b;

    try {
        double result = calculator.calculate(op, a, b);
        std::cout << "Result: " << result << std::endl;
    } catch (const std::invalid_argument &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
