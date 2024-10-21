#include<iostream>
using namespace std;

void fullPyramid(int n){
    //for outer loop
    for(int row = 0; row<n; row++)
    {
        //inner loop

        //for spaces
        for(int col = 0; col< n- row -1; col++)
            cout<<" ";
        
        //for stars
        for(int col = 0; col< row + 1; col++)
            cout<<"* ";
            cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    fullPyramid(n);

    return 0;
}