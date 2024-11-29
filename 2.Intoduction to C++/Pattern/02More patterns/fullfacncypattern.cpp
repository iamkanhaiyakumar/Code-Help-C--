#include<iostream>
using namespace std;

void fullfancy12(int n){
    //fancy12 pattern
    //outer loop

    for (int i =0; i < n; i++){
        //inner loop
        for(int j = 0; j<2 * i+1; j++){
            // cout<<"+";
            if (j% 2 ==0)
            cout << i+1;
            else
            cout<<"*";
        }
        cout<<endl;
    }

   //inverted fancy12 pattern
    //outer loop
    n--;
    // for (int i =n-1; i >= 0; i--)
    for (int i =0; i < n; i++)
    {
        //inner loop
        // for(int j = 0; j<2 * i+1; j++){
        for(int j = 0; j<2 *(n-i)-1; j++){
            // cout<<"+";
            if (j% 2 ==0)
            // cout << i+1;
            cout << n-i;
            else
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    fullfancy12(n);


    return 0;
}