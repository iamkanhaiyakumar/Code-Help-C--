#include<iostream>
#include<queue>
using namespace std;

int main(){
     
    // Create a queue

    queue<int> q;

    //insertion 
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout<<q.size()<<endl; // Size of the queue

    q.pop(); // Remove the front element

    cout<<q.size()<<endl; // Size of the queue

    cout<<"front "<<q.front()<<endl; // Access the front element

    cout<<"back "<<q.back()<<endl; // Access the back element

    if(q.empty()==true){
        cout<<"queue is empty"<<endl;
    
    }
    else{
        cout<<"queue is not empty"<<endl;
    }

    queue<int> first; // Declare another queue of integers
    queue<int> second; // Declare another queue of integers

    first.push(10);
    first.push(20);
    first.push(30);

    second.push(40);
    second.push(50);    
    second.push(60);

    first.swap(second); // Swap the contents of the two queues

      
    cout<<first.front()<< " " <<first.back()<<endl; // Access the front and back elements of the first queue
    











    return 0;
}