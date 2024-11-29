#include<iostream>
using namespace std;

void hallowPyramid(int n){
    //for outer loop
    for(int row = 0; row<n; row++)
    {
        //inner loop

        //for spaces
        for(int col = 0; col< n- row -1; col++)
            cout<<" ";
        
        //for stars
        for(int col = 0; col< row + 1; col++)
            if(col == 0 || col == row || row == n-1)
                cout<<"* ";
            else
                cout<<"  ";
           
            cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    hallowPyramid(n);

    return 0;
}