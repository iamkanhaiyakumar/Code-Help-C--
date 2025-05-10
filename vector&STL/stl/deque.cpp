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

    // Access the front and back elements
    cout << "Front element: " << d.front() << endl;
    cout << "Back element: " << d.back() << endl;


    return 0;
}