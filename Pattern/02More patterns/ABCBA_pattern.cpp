#include<iostream>
using namespace std;

void ABCBA(int n){
    for (int i = 0; i<n; i++){
        char ch = 'A'; //ASCII 64 initialize
        for(int j = 0; j< i+ 1; j++){
             cout<<ch;
             ch++;  
        }

        while (ch >='A'){
            cout<<ch;
            ch--;
        }

       cout<<endl;
    }

}

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    ABCBA(n);
    return 0;
}