#include<iostream>
#include<stack>
using namespace std;

int main(){

    // Create a stack
    stack<int> s;

    //insertion
    s.push(10);     
    s.push(20); 
    s.push(30);

    // Access the top element
    cout << "Top element: " << s.top() << endl;

    cout<< "Size of stack: " << s.size() << endl; // Size of the stack

    // Check if the stack is empty
    if(s.empty()){
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }

    // Remove the top element
    s.pop();

    cout << "Top element after pop: " << s.top() << endl;
    

    // Create another stack
    stack<int> first;
    stack<int> second;

    // Insert elements into the first stack
    first.push(10);
    first.push(20);
    first.push(30);
    // Insert elements into the second stack
    second.push(40);
    second.push(50);
    second.push(60);

    // Swap the contents of the two stacks

    first.swap(second);
    cout << "Top element of first stack after swap: " << first.top() << endl; // Access the top element of the first stack
    cout << "Top element of second stack after swap: " << second.top() << endl; // Access the top element of the second stack   

    // Clear the stack
    while(!s.empty()){
        s.pop(); // Remove the top element
    }

    cout << "Stack cleared." << endl;

    
    return 0;
}