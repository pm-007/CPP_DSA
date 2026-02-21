#include <iostream>
#include <vector>
#include <algorithm> // For std::sort

using namespace std;

// A template function to print elements of any vector
template <typename T>
void printVector(const vector<T>& vec) {
    cout << "[ ";
    for (const auto& elem : vec) {
        cout << elem << " ";
    }
    cout << "]" << endl;
}

int main() {
    // --- 1. INITIALIZATION ---
    cout << "--- 1. Initialization ---" << endl;

    // Default constructor
    vector<int> vec1;

    // Initializer list
    vector<int> vec2 = {10, 20, 30, 40, 50};
    cout << "vec2 (initializer list): ";
    printVector(vec2);

    // Fill constructor (5 elements with value 7)
    vector<int> vec3(5, 7);
    cout << "vec3 (fill constructor): ";
    printVector(vec3);

    // Copy constructor
    vector<int> vec4(vec2);
    cout << "vec4 (copy of vec2): ";
    printVector(vec4);
    cout << endl;

    // --- 2. CAPACITY & SIZE ---
    cout << "--- 2. Capacity & Size ---" << endl;
    cout << "vec2 size: " << vec2.size() << endl;
    cout << "vec2 capacity: " << vec2.capacity() << endl; // How much memory is allocated
    cout << "Is vec1 empty? " << (vec1.empty() ? "Yes" : "No") << endl;

    vec1.reserve(10); // Allocate memory for at least 10 elements
    cout << "vec1 capacity after reserve(10): " << vec1.capacity() << endl;
    cout << endl;

    // --- 3. ELEMENT ACCESS ---
    cout << "--- 3. Element Access ---" << endl;
    cout << "vec2[1]: " << vec2[1] << endl;         // Access using [] (no bounds check)
    cout << "vec2.at(2): " << vec2.at(2) << endl;   // Access using .at() (with bounds check)
    cout << "vec2 front(): " << vec2.front() << endl; // First element
    cout << "vec2 back(): " << vec2.back() << endl;   // Last element
    cout << endl;

    // --- 4. MODIFIERS (Adding elements) ---
    cout << "--- 4. Modifiers (Adding elements) ---" << endl;
    vec1.push_back(1);
    vec1.push_back(2);
    vec1.push_back(3);
    cout << "vec1 after push_back: ";
    printVector(vec1);

    // Insert single element at the beginning
    vec1.insert(vec1.begin(), 0);
    cout << "vec1 after inserting 0 at begin(): ";
    printVector(vec1);

    // Insert multiple elements
    vec1.insert(vec1.begin() + 2, 2, 99); // Insert two 99s at index 2
    cout << "vec1 after inserting two 99s: ";
    printVector(vec1);
    cout << endl;

    // --- 5. MODIFIERS (Removing elements) ---
    cout << "--- 5. Modifiers (Removing elements) ---" << endl;
    vec1.pop_back(); // Remove last element
    cout << "vec1 after pop_back(): ";
    printVector(vec1);

    // Erase a single element
    vec1.erase(vec1.begin() + 1); // Erase element at index 1
    cout << "vec1 after erasing element at index 1: ";
    printVector(vec1);

    // Erase a range of elements
    vec2.erase(vec2.begin() + 1, vec2.begin() + 4); // Erase from index 1 up to (but not including) 4
    cout << "vec2 after erasing a range: ";
    printVector(vec2);

    vec1.clear();
    cout << "vec1 after clear(): ";
    printVector(vec1);
    cout << "Is vec1 empty now? " << (vec1.empty() ? "Yes" : "No") << endl;
    cout << endl;
    
    // --- 6. ITERATORS & ALGORITHMS ---
    cout << "--- 6. Iterators & Algorithms ---" << endl;
    vector<int> vec5 = {5, 2, 8, 1, 9, 4};
    cout << "Original vec5: ";
    printVector(vec5);

    // Using an iterator to traverse
    cout << "Iterating through vec5: ";
    for (auto it = vec5.begin(); it != vec5.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Using std::sort from <algorithm>
    sort(vec5.begin(), vec5.end());
    cout << "vec5 after sort(): ";
    printVector(vec5);
    cout << endl;

    // --- 7. SWAP ---
    cout << "--- 7. Swap ---" << endl;
    vector<int> swap1 = {1, 1, 1};
    vector<int> swap2 = {2, 2, 2};
    cout << "Before swap:" << endl;
    cout << "swap1: "; printVector(swap1);
    cout << "swap2: "; printVector(swap2);
    
    swap1.swap(swap2);
    
    cout << "After swap:" << endl;
    cout << "swap1: "; printVector(swap1);
    cout << "swap2: "; printVector(swap2);

    return 0;
}
