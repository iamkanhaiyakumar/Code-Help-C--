#include<iostream>
#include<vector>
using namespace std;

int main(){
    // Declare a vector of integers
    // vector<int> marks;

    // marks.push_back(10); 
    // marks.push_back(20); 
    // marks.push_back(30); 
    // marks.push_back(40);
    // marks.push_back(50);
    

    // cout<<marks[0]<<endl; // Access the first element
    // cout<<marks[1]<<endl; // Access the second element

    // marks[0] = 100; // Modify the first element
    // cout<<marks[0]<<endl; // Access the first element again


    // cout<<"size of vector: "<<marks.size()<<endl;
    // //remove the vector elements
    // marks.pop_back(); 
    // cout<<"size of vector: "<<marks.size()<<endl;
    
    // cout<< marks.front()<<endl; // Access the first element
    // cout<< marks.back()<<endl; // Access the last element


    // if(marks.empty()==true){
    //     cout<<"vector is empty"<<endl;
    // }else{
    //     cout<<"vector is not empty"<<endl;
    // }

    // // cout<<marks[0]<<endl; 
    // cout<<marks.at(0)<<endl; 

    
    // cout<<marks.capacity()<<endl; // Capacity of the vector
    // cout<<marks.size()<<endl; // Maximum size of the vector
    // cout<<marks.data()<<endl; // Address of the first element
    // cout<<marks.max_size()<<endl; // Maximum size of the vector


    // marks.erase(marks.begin()); // Remove the first element
    // cout<<"size of vector: "<<marks.size()<<endl;

    // marks.clear(); // Clear the vector
    // cout<<"size of vector: "<<marks.size()<<endl;

    vector<int> first; // Declare a vector of integers
    vector<int> second; // Declare another vector of integers

    first.push_back(10);
    first.push_back(20);
    first.push_back(30);
    first.push_back(40);
    first.push_back(50);

    second.push_back(100);
    second.push_back(200);
    second.push_back(300);
    second.push_back(400);
    second.push_back(500);

    first.swap(second); // Swap the contents of first and second vectors

    // cout<<"first vector after swap: "<<endl;
    // for(int i=0; i<first.size(); i++){
    //     cout<<first[i]<<" ";
    // }

    for(int i:first){
        cout<<i<<" ";
    } 
    cout<<endl;

    for(int i:second){
        cout<<i<<" ";
    }

    cout<<endl;
    // cout<<"second vector after swap: "<<endl;
    // for(int i=0; i<second.size(); i++){
    //     cout<<second[i]<<" ";
    // }
    // cout<<endl;

    //traverse the vector using iterator

    //create an iterator
    vector<int>::iterator it = first.begin(); // Initialize the iterator to the beginning of the vector

    while( it != first.end()) { // Loop until the end of the vector
        cout << *it << " "; // Dereference the iterator to get the value
        it++; // Move to the next element
    }

    



    return 0;
}