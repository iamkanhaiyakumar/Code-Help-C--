 #include<iostream>
 using namespace std;
 
 bool search (int arr[][3], int rowSize, int colSize, int target){
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

    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int target = 9;

    bool found = search(arr, 3, 3, target);
    
    cout<<"Element found: "<<found<<endl;
    
 
    return 0;
 }