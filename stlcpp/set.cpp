#include <iostream>
#include <set>
#include <iterator>

void printSet(const std::set<int>& s) {
    for (int x : s) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}

int main() {
    // 1. Creation and Insertion
    // std::set stores unique elements in a sorted order.
    std::set<int> mySet;

    // Insert elements into the set
    mySet.insert(30);
    mySet.insert(10);
    mySet.insert(50);
    mySet.insert(20);
    mySet.insert(40);
    
    // Attempting to insert a duplicate element
    mySet.insert(30);

    std::cout << "Initial set elements (sorted and unique): ";
    printSet(mySet);
    std::cout << "----------------------------------------" << std::endl;

    // 2. Size of the set
    std::cout << "Size of the set: " << mySet.size() << std::endl;
    std::cout << "----------------------------------------" << std::endl;

    // 3. Finding an element
    // The find() method returns an iterator to the element if found,
    // otherwise it returns an iterator to the end of the set.
    int elementToFind = 20;
    auto it = mySet.find(elementToFind);

    if (it != mySet.end()) {
        std::cout << "Element " << elementToFind << " found in the set." << std::endl;
    } else {
        std::cout << "Element " << elementToFind << " not found in the set." << std::endl;
    }

    elementToFind = 99;
    it = mySet.find(elementToFind);
    if (it != mySet.end()) {
        std::cout << "Element " << elementToFind << " found in the set." << std::endl;
    } else {
        std::cout << "Element " << elementToFind << " not found in the set." << std::endl;
    }
    std::cout << "----------------------------------------" << std::endl;

    // 4. Checking for an element's existence (alternative)
    // The count() method returns 1 if the element is in the set, otherwise 0.
    int elementToCount = 50;
    if (mySet.count(elementToCount)) {
        std::cout << "Element " << elementToCount << " is in the set." << std::endl;
    } else {
        std::cout << "Element " << elementToCount << " is not in the set." << std::endl;
    }
    std::cout << "----------------------------------------" << std::endl;

    // 5. Erasing an element
    int elementToErase = 10;
    mySet.erase(elementToErase);
    std::cout << "Set after erasing " << elementToErase << ": ";
    printSet(mySet);
    std::cout << "----------------------------------------" << std::endl;
    
    // 6. Clearing the set
    std::cout << "Clearing the set..." << std::endl;
    mySet.clear();
    std::cout << "Size of the set after clearing: " << mySet.size() << std::endl;

    if (mySet.empty()) {
        std::cout << "The set is now empty." << std::endl;
    }

    return 0;
}
