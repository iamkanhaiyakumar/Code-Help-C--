#include<iostream>
using namespace std;

void checkTripletAllpairs(int arr[], int n){
    int count = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
             for(int k=0; k<n; k++){
                 cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                 count++;
               }
        }
    }
    cout<<"Total pairs: "<<count<<endl;
}
//TC=O(n^3)
//SC=O(1)

bool checkThreeSum(int arr[], int n, int target){
    // int count = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                if(arr[i] + arr[j] + arr[k] == target){
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                    // count++;
                }
            }
        }
    }
    // cout<<"Total pairs: "<<count<<endl;
}


int main(){
    
    int arr[] = {10,20,30,40};
    int n = 4;
    int target=70;

    checkThreeSum(arr, n ,target);
    

    // checkTripletAllpairs(arr, n);
    
    

    return 0;
}