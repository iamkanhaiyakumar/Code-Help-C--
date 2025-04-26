#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

// Function to find the minimum value in a 2D array
// int minValue(int arr[][4], int rowSize, int colSize){
 int maxValue(int arr[][4], int rowSize, int colSize){

    // int minVal = INT_MAX;

    int maxVal = INT_MIN;


    //Time Complexity= 0(n*m)
    //Space Complexity= 0(1)

    for(int i =0; i<rowSize; i++){
        for(int j=0; j<colSize; j++){
            // minVal = min(minVal, arr[i][j]);
            maxVal = max(maxVal, arr[i][j]);
        }
    }
    // return minVal;
    return maxVal;
}

int main(){
    
        int arr[3][4] = {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 110, -2}
        };

        int rowSize = 3;
        int colSize = 4;
    
        // int minVal = minValue(arr, rowSize, colSize);
        // cout<<"Minimum value in the array: "<<minVal<<endl;
        
        int maxVal = maxValue(arr, rowSize, colSize);
        cout<<"Maximum value in the array: "<<maxVal<<endl;
        return 0;
}