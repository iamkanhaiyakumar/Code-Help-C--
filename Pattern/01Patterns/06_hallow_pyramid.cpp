// #include<iostream>
// using namespace std;

// int main(){
//     int row, col;
//     //outer loop for row
//     for(row= 0; row < 5; row++)
//     {
//         //inner loop for col
//         for(col=0; col<row+1; col++)
//         {
//                 cout<<"* ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }

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
        for(int col=0; col<row+1; col++)
        {
                cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}