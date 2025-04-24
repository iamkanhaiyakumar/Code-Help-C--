#include<iostream>
#include<limits.h>
using namespace std;

// //**Check the target number in the array**//

bool checkTarget (int arr[], int size, int target){
    // traverse the entire array
    for(int i =0; i<size; i++)
    if(arr[i] == target){
        return true;
    }
    return false;
    }


// **Find the MAX number *****//

    int findMax(int arr[], int size){
        int maxAns =INT_MIN;
        for(int i =0; i<size; i++){
            maxAns = max(maxAns, arr[i]);
            if(arr[i]>maxAns){
                maxAns = arr[i];
            }
        }
        return maxAns;
    }

//**Find the MIN number *****//
//  int findMin(int arr[], int size){
//         int minAns =INT_MAX;
//         for (int i = 0; i < size; i++){
//         //  minAns = min(minAns, size); 
//         if(arr[i]<minAns){
//             minAns = arr[i];
//         }
//     }
//         return minAns;
// }

//find the 0's and 1's in the array****////

// void printZeroAndOnes(int arr[] , int n){
//     int zeroCount =0;
//     int oneCount = 0;
//     //traverse
//     for(int i = 0; i<n; i++){
//         int currElement = arr[i];
//         if(currElement==0){
//             zeroCount++;
//         }
//         if(currElement ==1){
//             oneCount ++;
//         }
//         // else{
//         //     oneCount++;
//         // }
//     }
//     cout<<"Ans = "<<zeroCount<<endl;
//     cout<<"Ans = "<<oneCount<<endl;
// }


// Reverse the array ////

void reverseArray(int arr[], int n){
    int start = 0;
    int end = n-1;
    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}




int main(){
    int arr[] = {10,20,30,40,50};
    int size = 5;

    // int arr[100];
    // int size;
    // cout<<"Enter the size of the array: "<<endl;
    // cin>>size;

    // for(int i =0; i<size; i++){
    //     cout<<"Enter the element " << i << endl;
    //     cin>>arr[i];
    // }

//**Reverse the array ////
    // reverseArray(arr, size);

//**Find the 0's and 1's in the array****////
// printZeroAndOnes(arr,size);





    //**Find the MIN number *****//
    // int ans= findMin(arr, size);
    // cout<<"The min number is "<<ans<<endl;
    // cout<<"The min number is "<<findMin(arr, size)<<endl;
   
    
//**Find the MAX number *****//

    int ans1 = findMax(arr, size);
    cout<<"ans = "<< ans1 <<endl;
    cout <<"The max number is "<<findMax(arr, size)<<endl;
    

 //**Check the target number in the array**//

    int target = 30;
    
    bool ans = checkTarget(arr, size, target);

    cout<<checkTarget(arr, size, target)<<endl;
    cout<<"ans = "<<ans<<endl;



    return 0;
}