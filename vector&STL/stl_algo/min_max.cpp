#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    //simplest way to find min and max in a vector
    // int  a= 10;
    // int  b= 20;

    // cout<< max(a,b) << endl;
    // cout<< min(a,b) << endl;

    //min and max in a vector
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);

    //min in a vector
    int min = *min_element(arr.begin(), arr.end());
    cout << min << endl; 

    //max_element in a vector
    auto it = max_element(arr.begin(), arr.end());
    cout << "Max: "<<*it << endl;


    return 0;
}