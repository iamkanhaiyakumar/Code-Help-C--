#include<iostream>
#include<limits.h>
using namespace std;

// int rowSum(int arr[][4], int rowSize, int colSize){
    
//     int sum = 0;
//     for( int i=0; i<rowSize; i++){
//         for(int j= 0; j<colSize; j++){
//             sum =sum+ arr[i][j];
//         }
//         cout<<sum<<endl;
//     }
// }

// int colSum(int arr[][3], int n, int m){
//     int sum =0;
//     for(int j=0; j<m; j++){
//         for( int i=0; i<n; i++){
//             sum = sum + arr[j][i];
//         }
//         cout<<sum<<endl;
//     }
// }

//diagonal sum
    int diagonalSum(int arr[][3], int n, int m){
//     int sum =0;
//     for(int i=0; i<n; i++){
//         sum=sum+ arr[i][i];
//     }
//     cout<<sum<<endl;


    //anti-diagonal sum
    int sum =0;
    for(int i=0; i<n; i++){
        sum = sum + arr[i][n-i-1];
    }
    cout<<sum<<endl;

    
//     int sum = 0;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             if(i==j){
//                 sum = sum + arr[i][j];
//             }
//         }
//     }
//     return sum;
 }


int main(){
    int arr [3][3] = {
        {10, 10, 40 },
        {20, 2, 20},
        {30,30,30}
         };       

    int n = 3;
    int m = 3;

    //  rowSum(arr, rowSize, colSize);
        
        // colSum(arr, n, m);

        diagonalSum(arr, n, m);
        

    
    

    return 0;
}