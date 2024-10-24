#include <iostream>
#include "CustomerValidator.hpp"

int main() {
    std::string customerNumber;

    std::cout << "Enter the customer number: ";
    std::cin >> customerNumber;

    if (isValidCustomerNumber(customerNumber)) {
        std::cout << "The customer number is valid.\n";
    } else {
        std::cout << "The customer number is invalid.\n";
    }

    return 0;
}
