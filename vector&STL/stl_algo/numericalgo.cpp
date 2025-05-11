#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

int main(){
    vector<int> arr(5);
    arr[0] =10;
    arr[1] =20;
    arr[2] =30;
    arr[3] =40;
    arr[4] =50;

    // Using STL algorithms

    // accumulate

    int sum = accumulate(arr.begin(), arr.end(), 0);
    cout << "Sum: " << sum << endl;


    

    return 0;
}