#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printDouble(int a){
    cout << 2*a << " ";
}
bool checkEven(int a){
    return a%2 == 0;
}

int main(){
    
    vector<int> arr(5);
    arr[0] =10;
    arr[1] =20;
    arr[2] =30;
    arr[3] =40;
    arr[4] =50;

    // Using STL algorithms
    for_each(arr.begin(), arr.end(), printDouble);
    cout << endl;

    //find
    int target = 50;
    auto it = find(arr.begin(), arr.end(), target);
    cout <<*it << endl;

    //find_if

    find_if(arr.begin(), arr.end(), checkEven);
    cout << *it << endl;



    return 0;
}