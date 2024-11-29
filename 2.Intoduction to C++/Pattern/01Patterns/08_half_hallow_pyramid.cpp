// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;

//     for(int row = 0; row<n; row++){

//         int totalColumns = row + 1;

//         for(int col = 0; col < totalColumns; col++)
//             //  if(row == 0|| row == 1 ||row == n-1 || col == 0 || col == totalColumns-1)
//                 if(row == 0|| row == 1 ||row == n-1)
//                 {
//                     cout<<"* ";      
//                  }
//                 else {
//                 // if(col == 0 || col == row +1 -1)
//                 if(col == 0 || col == totalColumns-1){
//                     cout<<"* ";      
//                  }
//                 else{
//                     cout<<"  ";
//                 }
//             }
//         cout<<endl;
//     }

//     return 0;
// }


#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    for(int row = 0; row<n; row++){

        // int totalColumns = row + 1;

        for(int col = 0; col < row + 1; col++)
        if (row == 0 || row == 1 || row == n-1 || col == 0 || row == col)
        {
            cout<<"* ";
        }
       
            else{
                cout<<"  ";
            }
        cout<< endl;
    }
    return 0;
}
        