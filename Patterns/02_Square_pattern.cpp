#include<iostream>
using namespace std;

int main(){
    //total row =4
    //total column =4
    // every row = 4 star
    //every column = 4 star
    

    //row = outer
    //column = inner

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }

    return 0;
}