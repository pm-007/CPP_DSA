#include <iostream>
#include <vector>
#include <iterator> // For std::advance, std::distance

using namespace std;

int main() {
    // Iterators are objects that act like pointers, allowing you to "iterate"
    // through the elements of a container (like a vector) one by one.

    vector<int> v = {10, 20, 30, 40, 50};

    // --- 1. Basic Forward Iteration ---
    cout << "--- 1. Basic Forward Iteration ---" << endl;
    cout << "Traversing with a forward iterator: ";
    // vector<int>::iterator is the type of the iterator for a vector of ints.
    // 'auto' is often used for simplicity.
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
        // v.begin() returns an iterator pointing to the FIRST element.
        // v.end() returns an iterator pointing to the position AFTER the LAST element.
        // ++it moves the iterator to the next element.
        // *it dereferences the iterator to get the value it points to.
        cout << *it << " ";
    }
    cout << endl << endl;

    // --- 2. Reverse Iteration ---
    cout << "--- 2. Reverse Iteration ---" << endl;
    cout << "Traversing with a reverse iterator: ";
    // Use rbegin() and rend() for reverse iteration.
    for (auto it = v.rbegin(); it != v.rend(); ++it) {
        // v.rbegin() returns a reverse iterator pointing to the LAST element.
        // v.rend() returns a reverse iterator pointing to the position BEFORE the FIRST element.
        cout << *it << " ";
    }
    cout << endl << endl;

    // --- 3. Constant Iterators (Read-Only) ---
    cout << "--- 3. Constant Iterators ---" << endl;
    cout << "Traversing with a constant iterator: ";
    // cbegin() and cend() return constant iterators. You cannot modify the
    // vector's elements through them. This is safer for read-only loops.
    for (auto it = v.cbegin(); it != v.cend(); ++it) {
        // *it = 100; // This would cause a COMPILE ERROR because 'it' is a constant iterator.
        cout << *it << " ";
    }
    cout << endl << endl;

    // --- 4. Iterator Arithmetic (for Random-Access Iterators) ---
    // Vector provides "Random-Access Iterators", which are powerful.
    // They allow you to jump to any position.
    cout << "--- 4. Iterator Arithmetic ---" << endl;
    auto it = v.begin(); // it points to 10
    cout << "First element: " << *it << endl;

    // Move the iterator forward by 2 positions
    it = it + 2; // it now points to 30
    cout << "Element at begin() + 2: " << *it << endl;

    // The std::advance function also works and is more generic
    // (it works with non-random-access iterators too, though less efficiently).
    auto it2 = v.begin();
    advance(it2, 3); // it2 now points to 40
    cout << "Element after advance(begin(), 3): " << *it2 << endl;

    // The std::distance function calculates the number of elements between two iterators.
    cout << "Distance between begin() and it2: " << distance(v.begin(), it2) << endl;
    cout << endl;

    // --- 5. Modifying Elements via Iterator ---
    cout << "--- 5. Modifying Elements via Iterator ---" << endl;
    auto it_modify = v.begin() + 1; // Points to 20
    cout << "Original value at index 1: " << *it_modify << endl;
    
    *it_modify = 25; // Change the value from 20 to 25
    cout << "Modified value at index 1: " << *it_modify << endl;
    
    cout << "Vector after modification: ";
    for(auto val : v) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
