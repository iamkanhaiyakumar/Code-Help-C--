#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    // arr[0] =1;
    // arr[1] =2;
    // arr[2] =3;
    // arr[3] =4;
    // arr[4] =5;

    // Using STL algorithms

    // accumulate

    int sum = accumulate(arr.begin(), arr.end(), 0);
    cout << "Sum: " << sum << endl;

    //inner_product
    vector<int> arr1(5);
    arr1[0] = 1;
    arr1[1] = 2;
    arr1[2] = 3;
    arr1[3] = 4;
    arr1[4] = 5;        

    int product = inner_product(arr.begin(), arr.end(), arr1.begin(), 0);
    cout << "Inner Product: " << product << endl;


    //partial_sum
    vector<int> arr2(5);
    arr2[0] = 0;
    arr2[1] = 0;
    arr2[2] = 0;
    arr2[3] = 0;
    arr2[4] = 0;

    partial_sum(arr.begin(), arr.end(), arr2.begin());
    cout << "Partial Sum: ";
    for(int i=0; i<arr2.size(); i++){
        cout << arr2[i] << " ";
    }
    cout << endl;

    //iota
    // vector<int> arr3(5);
    
    // iota(arr3.begin(), arr3.end(), 10);
    // cout << "Iota: ";
    // for(int i=0; i<arr3.size(); i++){
    //     cout << arr3[i] << " ";
    // }
    // cout << endl;






    

    return 0;
}