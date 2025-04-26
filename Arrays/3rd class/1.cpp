#include<iostream>
using namespace std;




int main(){
    // declareing 2D array
    // int arr[3][2];

    //initializing 2D array
    //int arr[3][2] = 
    // {
    //     {1, 2},
    //     {3, 4},
    //     {5, 6}
    // };

    // int arr[3][3] = 
    //     {1, 2, 3, 
    //      4, 5, 6,
    //      7, 8, 9}; // this is also a valid way to initialize a 2D array

    // this will initialize all elements to 0
    // int arr[3][2] = {}; 

    //accessing 2D array
    // cout<<arr[1][0]<<endl;

    //traversing entire 2D array
    // int rowSize = 3;
    // int colSize = 3;

    //same as the pattern of 1D array
    
    //row-wise 

    // for(int rowIndex =0; rowIndex<rowSize; rowIndex++) {
    //     for(int colIndex =0; colIndex<colSize; colIndex++) {
    //         cout<<arr[rowIndex][colIndex]<<" ";
    //     }
    //     cout<<endl;
    // }


    // column-wise traversing
    // for(int colIndex =0; colIndex<colSize; colIndex++) {
    //     for(int rowIndex =0; rowIndex<rowSize; rowIndex++) {
    //         cout<<arr[rowIndex][colIndex]<<" ";
    //     }
    //     cout<<endl;
    // }

    // //diagonal traversing
    // for(int i= 0; i<rowSize; i++){
    //     cout<<arr[i][i]<<" "<<endl;
    // }
    // cout<<endl;
    // //anti-diagonal traversing
    // for(int i= 0; i<rowSize; i++){
    //     cout<<arr[i][rowSize-i-1]<<" "<<endl;
    // }

    //taking input for 2D array
    int arr[3][3]; // Declare a 2D array of size 3x3
    int rowSize = 3;
    int colSize = 4;

    //taking input

    for (int i = 0; i < rowSize; i++) {
        for (int j = 0; j < colSize; j++) {
            cout << "Enter element at position [" << i << ", " << j << "]: ";
            cin >> arr[i][j];
        }
    }

    cout << "The 2D array is: " << endl;

  //row-wise 

    // for(int rowIndex =0; rowIndex<rowSize; rowIndex++) {
    //     for(int colIndex =0; colIndex<colSize; colIndex++) {
    //         cout<<arr[rowIndex][colIndex]<<" ";
    //     }
    //     cout<<endl;
    // }

    // column-wise traversing
    for(int colIndex =0; colIndex<colSize; colIndex++) {
        for(int rowIndex =0; rowIndex<rowSize; rowIndex++) {
            cout<<arr[rowIndex][colIndex]<<" ";
        }
        cout<<endl;
    }




    return 0;
}