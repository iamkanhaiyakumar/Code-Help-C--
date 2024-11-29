// #include<iostream>
// using namespace std;

// int main(){
//     //outer loop
//     for (int row = 0; row<4; row++)
//     {
//         //inner loop
//         for(int c = 0; c<5; c++)
//         //logic
//         {
//             if(row == 0 || row ==3){
//                     cout<<"* ";
//                 }
//                 else{
//                      //middle row
//                     if(c == 0 || c==4){
//                         cout<<"* ";
//                     }
//                     else{
//                         cout<<"  ";
//                     }
//                 }
//         }
//             cout <<endl;
//     }

//     return 0;
// }



#include<iostream>
using namespace std;

int main(){

int length;
int width;

cout << "Enter the length ="<<endl;

cin>> length;

cout<<" Enter the width=" <<endl;
cin >> width;

for( int row = 0; row <length; row = row + 1 )
{
    for ( int col = 0 ; col < width; col = col +1)
    {
         if( row == 0 || row == length-1)
        {
            cout<<"* ";
        }
        else
        {
            if(col == 0 || col == width -1)
            {
                cout<<"* ";
           
            }
             else{
                cout<<"  ";
             }
        }
    }
    cout<<endl;
}

    return 0;
}

 

