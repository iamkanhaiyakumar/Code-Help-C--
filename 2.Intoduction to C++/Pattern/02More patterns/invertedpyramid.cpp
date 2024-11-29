#include<iostream>
using namespace std;



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


int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    invertedPyramid(n);

    return 0;
}