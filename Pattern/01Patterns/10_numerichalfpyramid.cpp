#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n = ";
    cin>>n;

    //outer loop for row
    for(int row= 0; row < n; row++)
    {
        //inner loop for col

        //inverted  numeric half pyramid
        // for(int col = 0; col < n - row; col++){
        
        // for(int col = 0; col <= row; col++){
        for(int col = 0; col < row+1; col++){
            cout<<col + 1<<" ";
        }
        cout<<endl;
    }

    return 0;
}