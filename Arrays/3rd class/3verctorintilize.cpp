#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> arr(4, vector<int>(5, 1)); // 3 rows and 2 columns initialized to 0

    //size found

    int rowSize = arr.size();
    int colSize = arr[0].size();

    for(int i=0; i<rowSize; i++){
        for(int j=0; j<colSize; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}