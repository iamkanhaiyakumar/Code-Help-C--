#include<iostream>
using namespace std;

int findSingle(int arr[], int size){
    int ans = 0;
    // int n = nums.size();

    for (int i =0; i<size; i++){
        ans = ans ^ arr[i];
    }
    return ans; 
}

int main(){
    int arr[]= {1,1,5,2,3,4,4,3,2};

    // int size= sizeof(arr)/sizeof(arr[0]);

    int size= 9;
       
    int ans = findSingle(arr, size);
    cout<<"Unique num = "<<ans;

    return 0;
}