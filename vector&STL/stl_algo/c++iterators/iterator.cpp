#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include<forward_list>
#include<list>
using namespace std;

int main(){
    // // Declare an array of integers

    // vector<int> arr;
    // arr.push_back(1);
    // arr.push_back(2);
    // arr.push_back(3);

    // //traverse the array using an iterator
    // vector<int>::iterator it;
    // for(it = arr.begin(); it != arr.end(); ++it){
    //     cout << *it << " ";
    // }
    // cout << endl;

    //type of iterator

    //forward iterator
    // // vector<int>::iterator it3;

    // forward_list<int> list;
    // list.push_front(1);
    // list.push_front(2);
    // list.push_front(3);

    // //traverse the list using an iterator
    // forward_list<int>::iterator it3;
    // for(it3 = list.begin(); it3 != list.end(); ++it3){
    //     cout << *it3 << " ";
    // }
    // cout<<endl;



    // Bidirectional iterator
    list<int> myList;
    myList.push_back(1);    
    myList.push_back(2);
    myList.push_back(3);

    // Traverse the list using an iterator
    list<int>::iterator it4 =myList.begin();

    while (it4 != myList.end()) {
        (*it4)= (*it4) * 2; // double each element
        cout << *it4 << " ";
        ++it4;
    }
    cout << endl;

    //lets try moving backward
    // Bidirectional iterator
    list<int>::reverse_iterator it6 = myList.rbegin();
    while (it6 != myList.rend()) {
        cout << *it6 << " ";
        ++it6;
    }
    cout << endl;
    

    //random access iterator
    vector<int> arr = {1, 2, 3, 4, 5};

    vector<int>::iterator it2 = arr.begin();

    // Traverse the array using an iterator
    while (it2 != arr.end()) {
        cout << *it2 << " ";
        ++it2;
    }

    cout << endl;
    

    // Use the iterator to access elements
    // cout << "First element: " << *arr.begin() << endl;
    // cout << "Last element: " << *(arr.end() - 1) << endl;
    // cout << "Second element: " << *(arr.begin() + 1) << endl;
    // cout << "Third element: " << *(arr.begin() + 2) << endl;
    

    // Use the iterator to modify the array
    // for(it = arr.begin(); it != arr.end(); ++it){
    //     *it *= 2; // double each element
    // }
    // // Print the modified array
    // for(it = arr.begin(); it != arr.end(); ++it){
    //     cout << *it << " ";
    // }

    return 0;
}