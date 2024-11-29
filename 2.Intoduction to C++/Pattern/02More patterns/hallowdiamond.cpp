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
            if(col == 0 || col == row )
                cout<<"* ";
            else
                cout<<"  ";
           
            cout<<endl;
    }
}

void invertedhallowPyramid(int n){
    //for outer loop
    for(int row = 0; row<n; row++)
    {
        //inner loop

        //1.for spaces
        for(int col = 0; col< row ; col++)
            cout<<" ";
        
        //2.for stars
        for(int col = 0; col< n- row; col++)
            if(col == 0  || row ==n-1 || col == n-row- 1)
                cout<<"* ";
            else
                cout<<"  ";
            cout<<endl;
    }
}

void hallowDiamond(int n){
    hallowPyramid(n);
    invertedhallowPyramid(n);
}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    hallowDiamond(n);    

    return 0;
}