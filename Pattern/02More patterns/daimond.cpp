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

void invertedPyramid(int n){
    //for outer loop
    for(int row = 0; row<n; row++)
    {
        //inner loop

        //1.for spaces
        for(int col = 0; col< row ; col++)
            cout<<" ";
        
        //2.for stars
        for(int col = 0; col< n- row; col++)
            cout<<"* ";
            cout<<endl;
    }
}

void daimond(int n){
    fullPyramid(n);
    invertedPyramid(n);
}




int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    daimond(n);
    
    

    return 0;
}