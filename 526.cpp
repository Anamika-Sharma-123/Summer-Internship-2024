#include <iostream>

int main() {
    int choice;
    char again;

    do {
        // Display menu
        std::cout << "Menu:\n";
        std::cout << "1. Car park\n";
        std::cout << "2. Bike park\n";
        std::cout << "3. Park rikshaw\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        // Perform action based on user choice
        switch (choice) {
            case 1:
                std::cout << "Car park\n";
                break;
            case 2:
                std::cout << "Bike park\n";
                break;
            case 3:
                std::cout << "Park rikshaw\n";
                break;
            case 4:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice, please try again.\n";
        }

        // Ask if user wants to perform another action
        if (choice != 4) {
            std::cout << "Do you want to perform another action? (y/n): ";
            std::cin >> again;
        } else {
            again = 'n';
        }

    } while (again == 'y' || again == 'Y');

    std::cout << "Goodbye!\n";

    return 0;
}

