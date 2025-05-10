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
    

    return 0;
}