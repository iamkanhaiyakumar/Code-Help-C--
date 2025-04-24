#include<iostream>
#include<algorithm>
using namespace std;

// bool checkTwoSum(int arr[], int n, int target){
//     for(int i=0; i<n; i++){
//         for(int j =0; j<n; j++){
//             if(arr[i]+arr[j]==target){
//                 return true;
//             }
//         }
//     }
//     return false;
// }

// pair<int, int >checkTwoSum(int arr[], int n, int target){
//     pair<int,int> ans = make_pair(-1,-1);
// for(int i =0; i<n; i++){
//     for(int j=0; j<n; j++){
//         if(arr[i] + arr[j] == target){
//             //found a pair that sum to target
//             ans.first = arr [i];
//             ans.second = arr [j];
//             return ans;
//         }
//     }
// }
// return ans;
// }


// void checkTwoAllpairs(int arr[], int n, int target){
//         for(int i=0; i<n; i++){
//             for(int j =0; j<n; j++){
//                 if(arr[i]+arr[j]==target){
//                     cout << arr[i] << " " << arr[j] << endl;
//                 }
//             }
//         }
//         return;
//     }

void checkTripletAllpairs1(int arr[], int n, int target){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<n; k++){
                if(arr[i] + arr[j] + arr[k] == target){
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                }
            }
        }
    }
}

void checkTripletAllpairs(int arr[], int n){
    int count = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
             for(int k=0; k<n; k++){
                 cout << arr[i] << ", " << arr[j] << ", " << arr[k] << endl;
                 count++;
               }
        }
    }
    cout<<"Total pairs: "<<count<<endl;
}
//TC=O(n^3)
//SC=O(1)

int main(){
    
    int arr[] = {1,3, 8, 5, };
    int n = 4;

    checkTripletAllpairs(arr, n);
    
    int target = 16;
    checkTripletAllpairs1(arr, n, target);

    // checkTwoAllpairs (arr, n, 6);
    



//    pair<int, int> ans = checkTwoSum(arr , n, 6);
//    if(ans.first ==-1 && ans.second ==-1){
//     cout<<"Pair not found "<<endl;
//    } 
//    else{
//     cout<<"Pair found: "<<ans.first<<", "<<ans.second<<endl;
//    }



    // bool ans = checkTwoSum(arr , n, 16);
    
    // if (ans==true){
    //     cout<<"Yes";
    // }else{
    //     cout<<"No";
    // }



    return 0;
}