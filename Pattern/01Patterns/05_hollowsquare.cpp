// #include<iostream>
// using namespace std;
// //no of row = 5
// //no of col = 5


// int main(){
//     //outer loop for row
//     for(int row = 0; row < 5; row++){
//         //inner loop for col
//         for(int col = 0; col < 5; col++){
//             //check if it is first row or last row or first col or last col
//             if(row == 0 || row == 4 || col == 0 || col == 4){
//                 cout<<"*  ";
//             }else{
//                 cout<<"   ";
//             }
//         }
//         cout<<endl;
//     }
//        return 0;
// }


#include<iostream>
using namespace std;

int main(){
    

int n;
cout<<"Enter the side of square"<<endl;
cin>>n;
//outer loop for row
for(int row = 0; row < n; row++)
{
    //inner loop for col
    for(int col = 0; col < n; col++){
        //logic 
    //    if(row==0 || row ==n-1){
    //     cout<<"*  ";
    //    }
    //    else{
    //     //middle row
    //     if(col==0 || col == n-1){
    //         cout<<"*  ";
    //     }
    //     else{
    //         cout<<"   ";
    //     }
    //    }

        if(row == 0 || row == n-1 || col == 0 || col == n-1){
            cout<<"*  ";
        }else{
            cout<<"   ";
        }
    }
    cout<<endl;
}
    return 0;
}