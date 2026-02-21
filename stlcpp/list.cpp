#include <iostream>
#include <list>
#include <iterator>

using namespace std;

// Function to print the elements of a list
void printList(const list<int>& l) {
    for (int x : l) {
        cout << x << " -> ";
    }
    cout << "NULL" << endl;
}

int main() {
    // Creating a list
    list<int> l;

    // Pushing elements to the back
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);

    cout << "List after push_back: ";
    printList(l);

    // Pushing elements to the front
    l.push_front(5);
    cout << "List after push_front: ";
    printList(l);

    // Popping element from the back
    l.pop_back();
    cout << "List after pop_back: ";
    printList(l);

    // Popping element from the front
    l.pop_front();
    cout << "List after pop_front: ";
    printList(l);

    // Getting the front and back elements
    cout << "Front element: " << l.front() << endl;
    cout << "Back element: " << l.back() << endl;

    // Inserting an element
    auto it = l.begin();
    it++; // Pointing to the second element
    l.insert(it, 15);
    cout << "List after inserting 15: ";
    printList(l);

    // Erasing an element
    it = l.begin();
    it++; // Pointing to the second element (15)
    l.erase(it);
    cout << "List after erasing element: ";
    printList(l);

    // Size of the list
    cout << "Size of the list: " << l.size() << endl;

    // Checking if the list is empty
    cout << "Is the list empty? " << (l.empty() ? "Yes" : "No") << endl;

    // Sorting the list
    l.push_back(5);
    l.push_front(25);
    cout << "List before sorting: ";
    printList(l);
    l.sort();
    cout << "List after sorting: ";
    printList(l);

    // Reversing the list
    l.reverse();
    cout << "List after reversing: ";
    printList(l);

    // Clearing the list
    l.clear();
    cout << "Size of the list after clearing: " << l.size() << endl;
    cout << "Is the list empty after clearing? " << (l.empty() ? "Yes" : "No") << endl;


    return 0;
}
