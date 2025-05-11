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
    arr[0] =13;
    arr[1] =20;
    arr[2] =50;
    arr[3] =44;
    arr[4] =10;


    // Using STL algorithms
    for_each(arr.begin(), arr.end(), printDouble);
    cout << endl;

    //find
    // int target = 40;
    // auto it = find(arr.begin(), arr.end(), target);
    // cout <<*it << endl;

    //find_if
    auto it = find_if(arr.begin(), arr.end(), checkEven);
    cout << *it << endl;

    //count
    int target1 = 20;
    int ans = count(arr.begin(), arr.end(), target1);
    cout << ans << endl;    

    //count_if
    int ans1 = count_if(arr.begin(), arr.end(), checkEven);
    cout << ans1 << endl;

    //sort
    sort(arr.begin(), arr.end());
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    // for(int arr: arr){
    //     cout << arr << " ";
    // }
    // cout << endl;

    //reverse
    reverse(arr.begin(), arr.end());
    // for(int i=0; i<arr.size(); i++){
    //     cout << arr[i] << " ";
    // }
    cout << endl;
     for(int arr: arr){
        cout << arr << " ";
    }

    cout << endl;

    //rotate
    rotate(arr.begin(), arr.begin()+2, arr.end());
    // for(int i=0; i<arr.size(); i++){
    //     cout << arr[i] << " ";
    // }
    cout << endl;
     for(int arr: arr){
        cout << arr << " ";
    }
    
    cout << endl;

    //left roate
    rotate(arr.begin(), arr.begin()+1, arr.end());
    // for(int i=0; i<arr.size(); i++){
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
     for(int arr: arr){
        cout << arr << " ";
    }

    cout << endl;

    //unique
    vector<int> arr1 = {1, 2, 2, 3, 4, 4, 5};
    auto it1 = unique(arr1.begin(), arr1.end());
    arr1.erase(it1, arr1.end());
    // for(int i=0; i<arr1.size(); i++){
    //     cout << arr1[i] << " ";
    // }
    // cout << endl;

     for(int arr: arr1){
        cout << arr << " ";
    }
    cout << endl;


    //partition
    partition(arr.begin(), arr.end(), checkEven);
    // for(int i=0; i<arr.size(); i++){
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    for(int arr: arr){
        cout << arr << " ";
    }







    return 0;
}