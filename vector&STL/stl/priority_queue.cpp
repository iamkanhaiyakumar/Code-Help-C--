#include<iostream>
#include<queue>
using namespace std;

int main(){
    
    // Create a priority queue

    priority_queue<int> pq;

    //max-heap -> maximum value -> highest priority

    // In a max-heap, the largest element is at the top.


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

    // Check if the priority queue is empty
    if (pq.empty()==true) {
        cout << "Priority queue is empty" << endl;
    } else {
        cout << "Priority queue is not empty" << endl;
    }

    cout<< endl;

    //min-heap -> minimum value -> highest priority
    // In a min-heap, the smallest element is at the top.

    //creation
    priority_queue<int, vector<int>, greater<int>> qp;

    // Insertion
    qp.push(10);
    qp.push(20);
    qp.push(30);
    qp.push(40);
    qp.push(50);
    qp.push(100);

    // Access the top element
    cout << "Top element min: " << qp.top() << endl;

    //size of the priority queue
    cout << "Size: " << qp.size() << endl;
    
    // Remove the top element
    qp.pop();

    cout << "Top element after pop: " << qp.top() << endl;

    //size of the priority queue
    cout << "Size: " << qp.size() << endl;
    
    // Check if the priority queue is emptyz
    if (qp.empty()==true) {
        cout << "Priority queue is empty" << endl;
    } else {
        cout << "Priority queue is not empty" << endl;
    }

    // Print all elements in the priority queue
    cout << "Elements in the priority queue: ";
    while (!qp.empty()) {
        cout << qp.top() << " ";
        qp.pop();
    }

    cout << endl;
    
    


    return 0;
}