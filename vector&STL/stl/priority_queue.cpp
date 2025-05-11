#include<iostream>
#include<queue>
using namespace std;

int main(){
    
    // Create a priority queue

    priority_queue<int> pq;

    // Insertion
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);
    pq.push(50);
    pq.push(100);


    // Access the top element
    cout << "Top element: " << pq.top() << endl;

    //size of the priority queue
    cout << "Size: " << pq.size() << endl;

    // Remove the top element
    pq.pop();

    cout << "Top element after pop: " << pq.top() << endl;

    //size of the priority queue
    cout << "Size: " << pq.size() << endl;

    


    return 0;
}