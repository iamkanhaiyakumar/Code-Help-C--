#include<iostream>
#include<vector>
using namespace std;

int main(){
    // Declare a vector of integers
    vector<int> marks;

    marks.push_back(10); 
    marks.push_back(20); 
    marks.push_back(30); 
    marks.push_back(40);
    marks.push_back(50);
    

    cout<<marks[0]<<endl; // Access the first element
    cout<<marks[1]<<endl; // Access the second element

    marks[0] = 100; // Modify the first element
    cout<<marks[0]<<endl; // Access the first element again


    cout<<"size of vector: "<<marks.size()<<endl;
    //remove the vector elements
    marks.pop_back(); 
    cout<<"size of vector: "<<marks.size()<<endl;
    
    cout<< marks.front()<<endl; // Access the first element
    cout<< marks.back()<<endl; // Access the last element


    if(marks.empty()==true){
        cout<<"vector is empty"<<endl;
    }else{
        cout<<"vector is not empty"<<endl;
    }

    // cout<<marks[0]<<endl; 
    cout<<marks.at(0)<<endl; 

    
    cout<<marks.capacity()<<endl; // Capacity of the vector
    cout<<marks.size()<<endl; // Maximum size of the vector
    cout<<marks.data()<<endl; // Address of the first element
    cout<<marks.max_size()<<endl; // Maximum size of the vector


    

    marks.clear(); // Clear the vector
    cout<<"size of vector: "<<marks.size()<<endl;


    return 0;
}