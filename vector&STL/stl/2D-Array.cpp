#include<iostream>
#include<vector>
using namespace std;

int main(){
    // Declare a 2D array (matrix) of integers

    vector<vector<int>> arr(5, vector<int>(4, 0));
    int rows = arr.size(); // Number of rows
    int cols = arr[0].size(); // Number of columns

    cout << "Number of rows: " << rows << endl;
    cout << "Number of columns: " << cols << endl;

    cout << "Size of 2D array: " << sizeof(arr) << endl; // Size of the 2D array

    cout << "Size of each row: " << sizeof(arr[0]) << endl; // Size of each row
    cout << "Size of each column: " << sizeof(arr[0][0]) << endl; // Size of each column
    

    vector<vector<int> > brr(4);

    brr[0]= vector<int>(4);
    brr[1]= vector<int>(2);
    brr[2]= vector<int>(5);
    brr[3]= vector<int>(3);

    int totalRowCount = brr.size(); // Number of rows
    int totalColumnCount = brr[0].size(); // Number of columns

    cout << "Number of rows: " << totalRowCount << endl;
    cout << "Number of columns: " << totalColumnCount << endl;
    
    return 0;
}
