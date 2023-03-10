#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<string, int> myMap;

    // Inserting values into the map
    myMap["Alice"] = 25;
    myMap["Bob"] = 30;
    myMap["Charlie"] = 35;

    // Retrieving values from the map
    cout << "----- Retrieving values from the map:" << endl;
    cout << "Alice is " << myMap["Alice"] << " years old." << endl;
    cout << "Bob is " << myMap["Bob"] << " years old." << endl;
    cout << "Charlie is " << myMap["Charlie"] << " years old." << endl;

    // Iterate over all the key-value pairs in the map
    cout << "----- Iterate through the map:" << endl;
    for (auto it = myMap.begin(); it != myMap.end(); ++it) {
        cout << it->first << " is " << it->second << " years old." << endl;
    }

    // Updating values in the map
    cout << "----- Update value in the map:" << endl;
    myMap["Alice"] = 26;
    cout << "Alice is now " << myMap["Alice"] << " years old." << endl;

    // Checking if a key exists in the map
    cout << "----- checking if a key exists in the map:" << endl;
    if (myMap.count("David") == 0) {
        cout << "David is not in the map." << endl;
    }
    else {
        cout << "David is in the map." << endl;
    }

    if (myMap.count("Alice") == 0) {
        cout << "Alice is not in the map." << endl;
    }
    else {
        cout << "Alice is in the map." << endl;
    }


    return 0;
}
