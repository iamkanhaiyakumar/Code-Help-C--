#include<iostream>
#include<list> // Include the list header file
#include<iterator> // Include the iterator header file
#include<algorithm> // Include the algorithm header file
using namespace std;

int main(){
    // Create a list of integers
    list<int> mylist; 

    //insert elements at the end of the list
    mylist.push_back(10);
    mylist.push_back(20);
    mylist.push_back(30);

    //insert elements at the beginning of the list
    mylist.push_front(5);
    mylist.push_front(1);

    //insert elements at a specific position in the list
    mylist.insert(mylist.begin(), 0); // Insert 0 at the beginning
    mylist.insert(mylist.end(), 40); // Insert 40 at the end



     // Display the elements of the list
    cout << "Elements in the list: ";
    list<int>::iterator it = mylist.begin(); // Initialize the iterator to the beginning of the vector

    while( it != mylist.end()) { // Loop until the end of the vector
        cout << *it << " "; // Dereference the iterator to get the value
        it++; // Move to the next element
    }
    cout << endl;
    cout<<"size of list: "<<mylist.size()<<endl; // Size of the list

    cout<<"front element of list: "<<mylist.front()<<endl; // Access the first element
    cout<<"back element of list: "<<mylist.back()<<endl; // Access the last element
    
    cout<<"list is empty: "<<mylist.empty()<<endl; // Check if the list is empty

    cout<<"list max size: "<<mylist.max_size()<<endl; // Maximum size of the list

    cout<<"list size: "<<mylist.size()<<endl; // Size of the list

    cout<<"list capacity: "<<mylist.max_size()<<endl; // Capacity of the list


   
    cout << endl;


    return 0;
}