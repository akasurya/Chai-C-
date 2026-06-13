#include <iostream>

int main() {
    // current_stock is encoded in binary. 
    // Example: 5 (binary 101) means Green (1) and Oolong (4) are available.
    int current_stock = 4 ; 
    
    int choice;

    std::cout << "--- Tea Inventory Check ---" << std::endl;
    std::cout << "1: Green Tea" << std::endl;
    std::cout << "2: Black Tea" << std::endl;
    std::cout << "4: Oolong Tea" << std::endl;
    
    std::cout << "\nEnter the tea code to check availability: ";
    std::cin >> choice;

    // The bitwise AND (&) compares the bits of current_stock and choice.
    // If the bit at that position is 1 in both, the result is non-zero.
    if (current_stock & choice) {
        std::cout << "Result: Yes, that tea is in stock!" << std::endl;
    } else {
        std::cout << "Result: Sorry, we are out of that tea." << std::endl;
    }

    return 0;
}