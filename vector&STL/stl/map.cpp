#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;

int main(){

    // Create a map
    unordered_map<string, string> table;

    // Insertion
    table["name"] = "John";

    table.insert(make_pair("age", "20"));

    pair<string, string> p;

    p.first = "address";
    p.second = "New York";

    table.insert(p);
    table.insert({"phone", "1234567890"});

    cout << "Size: " << table.size() << endl;

    // Accessing elements
    cout << "Name: " << table["name"] << endl;
    cout << "Age: " << table["age"] << endl;

    //clear
    table.clear();
    cout << "Size after clear: " << table.size() << endl;

    // Check if the map is empty
    if (table.empty()) {
        cout << "Map is empty" << endl;
    } else {
        cout << "Map is not empty" << endl;
    }

    
    



    

    return 0;
}