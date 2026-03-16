#include <iostream>
#include <string>

int main() {
    // Get user name
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    
    // Display greeting
    std::cout << "Hello world from " << name << std::endl;
    
    return 0; // Program finished successfully
}
