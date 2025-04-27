#include<iostream>
using namespace std;

// Function to transpose a 2D array
void transPose(int arr[][3], int rowSize, int colSize){
  
    // Initialize the transposed array with zeros
    int ans[100][100]= {0};

    // Loop through the original array to fill the transposed array
//     for(int i=0; i<rowSize; i++){
//         for(int j=0; j<colSize; j++){
//             ans[i][j] = ans[j][i]; // Transpose the element
//         }
//     }   
// }
    for(int i=0; i<rowSize; i++){
        for(int j=i; j<colSize; j++){
            swap(arr[i][j], arr[j][i]);  // Transpose the element
        }
    }   
}



int main(){
    int arr[3][3] = {
        {1, 2, 3}, 
        {4, 5, 6}, 
        {7, 8, 9}
          }; // Original array

    int rowSize = 3; // Number of rows
    int colSize = 3; // Number of columns

    cout << "Original array:" << endl;
    for(int i=0; i<rowSize; i++){
        for(int j=0; j<colSize; j++){
            cout << arr[i][j] << " "; // Print the original array
        }
        cout << endl;
    }

    cout << "Transposed array:" << endl;
    for(int i=0; i<rowSize; i++){
        for(int j=0; j<colSize; j++){
            cout << arr[j][i] << " "; // Print the transposed array
        }
        cout << endl;
    }
    transPose(arr, rowSize, colSize); // Call the function to transpose the array

    return 0;
}   