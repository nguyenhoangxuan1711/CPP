#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    set<string> mySet;

    // insert some elements
    mySet.insert("apple");
    mySet.insert("orange");
    mySet.insert("banana");
    mySet.insert("kiwi");
    mySet.insert("peach");

    // print the elements in the set
    cout << "Elements in set:" << endl;
    for (const string& elem : mySet) {
        cout << elem << endl;
    }

    // check if an element is in the set
    string searchElem = "orange";
    if (mySet.count(searchElem) > 0) {
        cout << searchElem << " is in the set" << endl;
    }

    // erase an element from the set
    string eraseElem = "kiwi";
    mySet.erase(eraseElem);

    // try to insert an element that already exist
    auto result = mySet.insert("orange");
    if (result.second) {
        std::cout << "Element " << *(result.first) << " inserted successfully!" << std::endl;
    }
    else {
        std::cout << "Element " << *(result.first) << " already exists in the set!" << std::endl;
    }

    // print the elements in the set again
    cout << "Elements in set after erasing " << eraseElem << ":" << endl;
    for (const string& elem : mySet) {
        cout << elem << endl;
    }

    return 0;
}
