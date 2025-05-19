#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void first_occ(int arr[], int n, int target, int &ansIndex){
    int s = 0;
    int e = n - 1;
    
    while(s <= e){
        int mid = s + (e - s) / 2;
        if (arr[mid]==target){
            //ans found -> may or may not be the first occurance
            //store and compute 
            ansIndex = mid;
            //go left
            e = mid - 1;
        }
        if(target > arr[mid]){
            //go right
            s = mid + 1;
        }
        if(target < arr[mid]){
            //go left
            e = mid - 1;
        }
        // mid = s + (e - s) / 2;
    }
    
}


int main(){
    int arr[] = {1, 1,2,  2,3, 5};

    int n = 6;

    int target = 2;

    int ansIndex = -1;

    first_occ(arr, n, target, ansIndex);

    cout << "Binary Search: "<< ansIndex << endl;
    

    return 0;
}


