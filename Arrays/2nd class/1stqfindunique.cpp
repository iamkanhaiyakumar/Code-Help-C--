#include<iostream>
using namespace std;

int findSingle(int arr[], int n){
    int ans = 0;
    // int n = nums.size();

    for (int i =0; i<n; i++){
        ans = ans ^ arr[i];
    }
    return ans;
    
}

int main(){
    int arr[]= {1,2,3,4,4,3,2};
    // int size= sizeof(arr)/sizeof(arr[0]);
    int size= 7;
    

    
    int ans = findSingle(arr, size);
    cout<<"Unique = "<<ans;

    return 0;
}