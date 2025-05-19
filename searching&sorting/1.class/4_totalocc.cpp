#include<iostream>
using namespace std;

void last_occ(int arr[], int n, int target, int &firstIndex){
    int s = 0;
    int e = n - 1;
    
    while(s <= e){
        int mid = s + (e - s) / 2;
        if (arr[mid]==target){
            //ans found -> may or may not be the first occurance
             //store and compute 
            firstIndex = mid;
            //go right 
            s = mid + 1;
        }
        if(target > arr[mid]){
            //go right
            s = mid +  1;
        }
        if(target < arr[mid]){
            //go left
            e = mid - 1;
        }
        // mid = s + (e - s) / 2;
    }
    
}

void first_occ(int arr[], int n, int target, int &lastIndex){
    int s = 0;
    int e = n - 1;
    
    while(s <= e){
        int mid = s + (e - s) / 2;
        if (arr[mid]==target){
            //ans found -> may or may not be the first occurance
            //store and compute 
            lastIndex = mid;
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

     int arr[] = {1, 1,2, 2,2,2,3, 5};

    int n = 6;

    int target = 2;

    int firstIndex = -1;
    int lastIndex = -1;

    first_occ(arr, n, target, firstIndex);
    last_occ(arr, n, target, lastIndex);

    int ans = 0;
    
    ans = lastIndex - firstIndex + 1;
    

    cout << "Total Occurance: "<< ans << endl;

    cout << "First Occurrence Index: "<< firstIndex << endl;
    cout << "Last Occurrence Index: "<< lastIndex << endl;
    
    

    return 0;
}