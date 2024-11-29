#include<iostream>
using namespace std;

void mixPyramid(int n){
        //Part 1
   for( int i = 0; i<n; i++){  
     //for star
        for(int j = 0; j<n-i; j++)
            cout<< "*";
        
        //for space
        for(int j= 0; j<2*i+1; j++)
            cout<< " ";
        
        //for star
        for(int j = 0; j<n-i; j++)
            cout<< "*";  
        cout<<endl;
    }
    //Part 2
   for( int i = 0; i<n; i++){  
     //for star
        for(int j = 0; j<i+1; j++)
            cout<< "*";
        
        //for space
        for(int j= 0; j<2*(n-i)-1; j++)
            cout<< " ";
        
        //for star
        for(int j = 0; j<i+1; j++)
            cout<< "*";  
        cout<<endl;
    }
}


int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    mixPyramid(n);

    return 0;
}