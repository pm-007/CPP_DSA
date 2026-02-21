#include <iostream>
#include <utility> // Required for std::pair
#include <string>
#include <vector>

void printPair(const std::pair<int, std::string>& p) {
    std::cout << "(" << p.first << ", " << p.second << ")\n";
}

int main() {
    // --- 1. Declaration and Initialization ---
    std::cout << "--- Initialization ---" << std::endl;

    // Method A: Default constructor then assign values
    std::pair<int, std::string> p1;
    p1.first = 1;
    p1.second = "Apple";
    std::cout << "p1: ";
    printPair(p1);

    // Method B: Using std::make_pair()
    std::pair<int, std::string> p2 = std::make_pair(2, "Banana");
    std::cout << "p2: ";
    printPair(p2);

    // Method C: Using brace initialization (C++11 and later)
    std::pair<int, std::string> p3 = {3, "Cherry"};
    std::cout << "p3: ";
    printPair(p3);
    std::cout << "--------------------------\n" << std::endl;

    // --- 2. Accessing and Modifying Elements ---
    std::cout << "--- Modification ---" << std::endl;
    std::cout << "Original p3.second: " << p3.second << "\n";
    p3.second = "Cantaloupe"; // Modify the second element
    std::cout << "Modified p3.second: " << p3.second << "\n";
    std::cout << "--------------------------\n" << std::endl;

    // --- 3. Swapping Pairs ---
    std::cout << "--- Swapping ---" << std::endl;
    std::cout << "Before swap:\n";
    std::cout << "p1: "; printPair(p1);
    std::cout << "p2: "; printPair(p2);
    p1.swap(p2);
    std::cout << "After swap:\n";
    std::cout << "p1: "; printPair(p1);
    std::cout << "p2: "; printPair(p2);
    std::cout << "--------------------------\n" << std::endl;

    // --- 4. Nested Pairs ---
    std::cout << "--- Nested Pairs ---" << std::endl;
    // A pair can hold another pair
    std::pair<int, std::pair<std::string, std::string>> student;
    student.first = 101;                // Student ID
    student.second.first = "John";      // First Name
    student.second.second = "Doe";      // Last Name

    std::cout << "Student ID: " << student.first << "\n";
    std::cout << "Student Name: " << student.second.first << " " << student.second.second << "\n";
    std::cout << "--------------------------\n" << std::endl;

    // --- 5. Using Pairs with other STL containers ---
    std::cout << "--- Vector of Pairs ---" << std::endl;
    std::vector<std::pair<std::string, int>> inventory;
    inventory.push_back({"pens", 50});
    inventory.push_back(std::make_pair("pencils", 75));
    // The type of p1 is std::pair<int, std::string>, but the vector expects std::pair<std::string, int>.
    // To fix this, we create a new pair with the correct type from p1's elements.
    inventory.push_back(std::make_pair(p1.second, p1.first));

    std::cout << "Inventory Contents:" << std::endl;
    for(const auto& item : inventory) {
        std::cout << "  Item: " << item.first << ", Quantity: " << item.second << std::endl;
    }

    return 0;
}
