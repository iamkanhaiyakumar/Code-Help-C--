#include<iostream>
#include<queue> 
using namespace std;

int main(){
    
    // Create a deque
    deque<int> d;
    
    //insertion
    d.push_back(10);
    d.push_back(20);
    d.push_back(30);

    // Access the front and back elements
    d.push_front(1);

    d.push_back(40);

    //iteration
    cout << "Elements in deque: ";
    deque<int>::iterator it= d.begin();
    while(it!=d.end()){
        cout<<*it<<" ";
        it++;
    }

    cout << endl;

    // Access the front and back elements
    cout << "Front element: " << d.front() << endl;
    cout << "Back element: " << d.back() << endl;

    cout << "Size of deque: " << d.size() << endl; // Size of the deque
    //deletion
    d.pop_front(); // Remove the front element
    d.pop_back(); // Remove the back element

    cout << "Front element after pop: " << d.front() << endl;

    cout << "Back element after pop: " << d.back() << endl;

    cout << "Size of deque after pop: " << d.size() << endl; // Size of the deque

    // Check if the deque is empty
    if(d.empty()){
        cout << "Deque is empty" << endl;
    } else {
        cout << "Deque is not empty" << endl;
    }

    return 0;
}