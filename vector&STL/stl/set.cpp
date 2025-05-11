 #include<iostream>
 #include<set>
 using namespace std;
 
 int main(){

    // Create a set 
    set<int> s;
    
    // Insertion
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);

    //traversing the set
    cout << "Iterating through the set:" << endl;
    set<int>::iterator it = s.begin();
    while(it != s.end()){
        cout << *it << " ";
        it++;
    }

    cout << endl;

    //size of the set
    cout << "Size: " << s.size() << endl;

    // Accessing elements
    cout << "First element: " << *s.begin() << endl;
    cout << "Last element: " << *(--s.end()) << endl;

    // Check if a value exists
    if (s.find(20) != s.end()) {
        cout << "Value 20 exists" << endl;
    } else {
        cout << "Value 20 does not exist" << endl;
    }
    cout << endl;

    // Erasing elements
    s.erase(20);
    cout << "After erasing 20:" << endl;

    it = s.begin();
    while(it != s.end()){
        cout << *it << " ";
        it++;
    }
    cout << endl;

    // Check if the set is empty
    if (s.empty()) {
        cout << "Set is empty" << endl;
    } else {
        cout << "Set is not empty" << endl;
    }
    cout << endl;

    // Create a multiset
    multiset<int> ms;

    // Insertion
    ms.insert(10);
    ms.insert(20);
    ms.insert(20); // Duplicate
    ms.insert(30);
    ms.insert(40);
    ms.insert(40); // Duplicate
    ms.insert(50);
    ms.insert(50); // Duplicate

    //traversing the multiset
    cout << "Iterating through the multiset:" << endl;
    multiset<int>::iterator it1 = ms.begin();
    while(it1 != ms.end()){
        cout << *it1 << " ";
        it1++;
    }
    cout << endl;
    //size of the multiset
    cout << "Size: " << ms.size() << endl;

    // Accessing elements
    cout << "First element: " << *ms.begin() << endl;
    cout << "Last element: " << *(--ms.end()) << endl;
    cout << "Count of 20: " << ms.count(20) << endl;

    // Check if a value exists
    if (ms.find(20) != ms.end()) {
        cout << "Value 20 exists" << endl;
    } else {
        cout << "Value 20 does not exist" << endl;
    }
    cout << endl;

    // Erasing elements
    ms.erase(20);
    cout << "After erasing 20:" << endl;
    it1 = ms.begin();
    while(it1 != ms.end()){
        cout << *it1 << " ";
        it1++;
    }
    cout << endl;

    // Check if the multiset is empty
    if (ms.empty()) {
        cout << "Multiset is empty" << endl;
    } else {
        cout << "Multiset is not empty" << endl;
    }
    cout << endl;

    // Create a set of pairs
    set<pair<int, string>> sp;

    // Insertion
    sp.insert(make_pair(1, "one"));
    sp.insert(make_pair(2, "two"));
    sp.insert(make_pair(3, "three"));

    //traversing the set of pairs
    cout << "Iterating through the set of pairs:" << endl;
    set<pair<int, string>>::iterator it2 = sp.begin();
    while(it2 != sp.end()){
        cout << it2->first << ": " << it2->second << endl;
        it2++;
    }
    cout << endl;
    //size of the set of pairs
    cout << "Size: " << sp.size() << endl;

    // Accessing elements
    cout << "First element: " << sp.begin()->first << ": " << sp.begin()->second << endl;
    cout << "Last element: " << (--sp.end())->first << ": " << (--sp.end())->second << endl;
    cout << "Count of (2, \"two\"): " << sp.count(make_pair(2, "two")) << endl;

    // Check if a value exists
    if (sp.find(make_pair(2, "two")) != sp.end()) {
        cout << "Value (2, \"two\") exists" << endl;
    } else {
        cout << "Value (2, \"two\") does not exist" << endl;
    }
    cout << endl;

    // Erasing elements
    sp.erase(make_pair(2, "two"));
    cout << "After erasing (2, \"two\"):" << endl;
    it2 = sp.begin();
    while(it2 != sp.end()){
        cout << it2->first << ": " << it2->second << endl;
        it2++;
    }
    cout << endl;

    // Check if the set of pairs is empty
    if (sp.empty()) {
        cout << "Set of pairs is empty" << endl;
    } else {
        cout << "Set of pairs is not empty" << endl;
    }
    cout << endl;

    


    
 
    return 0;
 }