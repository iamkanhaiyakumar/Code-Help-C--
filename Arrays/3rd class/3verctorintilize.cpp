#include<iostream>
#include<vector>
using namespace std;

bool search (vector<vector<int>> arr, int target){
    int rowSize = arr.size();
    int colSize = arr[0].size();
    
        for(int i =0; i<rowSize; i++){
            for (int j =0; j<colSize; j++){
                if(arr[i][j] == target){
                    return true;
                }
            }
        }
        return false;
    }

int main(){
    // vector<vector<int>> arr(4, vector<int>(5, 1)); // 3 rows and 2 columns initialized to 0

    //size founding

    // int rowSize = arr.size();
    // int colSize = arr[0].size();

    int rowSize, colSize;
    cout<<"Enter the number of rows : ";
    cin>>rowSize;
    cout<<"Enter the number of columns : ";
    cin>>colSize;

    // declareing 2D array

    vector<vector<int>> arr(rowSize, vector<int>(colSize)); // 3 rows and 2 columns initialized to 0
    
    cout<<"Enter the elements of the array: "<<endl;
    //taking input from user
    for(int i=0; i<rowSize; i++){
        for(int j=0; j<colSize; j++){
            cin>>arr[i][j];
        }
    }
    
    int target;
    cout<<"Enter the target element to search: ";

    target = 5;

     bool ans = search(arr, target);
    cout<<"Element found: "<<ans<<endl;

    return 0;
}