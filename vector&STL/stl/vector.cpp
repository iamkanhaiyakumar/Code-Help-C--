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

    cout<<"size of vector: "<<marks.size()<<endl;
    //remove the vector elements
    marks.pop_back(); 
    cout<<"size of vector: "<<marks.size()<<endl;
    
    cout<< marks.front()<<endl; // Access the first element
    cout<< marks.back()<<endl; // Access the last element

    return 0;
}