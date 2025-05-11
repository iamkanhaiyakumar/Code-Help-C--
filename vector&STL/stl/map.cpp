#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;

int main(){

    // Create a map
    // unordered_map<string, string> table;

    map<string, string> table;

    // Insertion
    table["name"] = "John";

    table.insert(make_pair("age", "20"));

    pair<string, string> p;
    
    p.first = "name";
    p.second = "Johen";
    table.insert(p);

    // p.first = "address";
    // p.second = "New York";


    table.insert(p);
    table.insert({"phone", "1234567890"});

//iterating through the map
    cout << "Iterating through the map:" << endl;
        
    map<string, string>::iterator it = table.begin();
    // unordered_map<string, string>::iterator it = table.begin();
    while(it != table.end()){
        pair<string, string> p = *it;
        cout << p.first << ": " << p.second << endl;
        it++;
    }
    cout << endl;


    cout << "Size: " << table.size() << endl;

    // Accessing elements
    cout << "Name: " << table["name"] << endl;
    cout << "Age: " << table["age"] << endl;

    cout<<endl;

// Check if a key exists
    if (table.find("name") != table.end()) {
        cout << "Key 'name' exists" << endl;
    } else {
        cout << "Key 'name' does not exist" << endl;
    }

    cout << endl; 


    //count
    cout << "Count of 'name': " << table.count("name") << endl;
    cout << "Count of 'address': " << table.count("address") << endl;

    cout << endl;


    //clear
    table.clear();
    cout << "Size after clear: " << table.size() << endl;

    // Check if the map is empty
    if (table.empty()) {
        cout << "Map is empty" << endl;
    } else {
        cout << "Map is not empty" << endl;
    }

    cout << endl;

    //creation
    map<int, int> m;

    // Insertion
    m.insert(make_pair(1, 10));
    m.insert(make_pair(4, 20));
    m.insert(make_pair(3, 40));
    m.insert(make_pair(2, 30));

    //iterating through the map
    cout << "Iterating through the map:" << endl;
    map<int, int>::iterator it1 = m.begin();
    while(it1 != m.end()){
        pair<int, int> p = *it1;
        cout << p.first << ": " << p.second << endl;
        it1++;
    }

        

    return 0;
}