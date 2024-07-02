#include<iostream>
using namespace std;

int main(){
    //------Nested loops----///
    
    // for (int i = 1; i<=3; i++){
    //     cout<<" i = "<<i<<endl;
        
    //     for(int j = 1; j<=2; j++){
    //         cout<<" j = "<<j<<endl;
    //         // cout<<" i = "<<i<<" "<<" j = "<<j<<endl;
    //     }
    // }

    // for(int i = 1; i<=3; i++){
    //     cout <<i <<"=>";
    //     for(int j = 1; j<=2; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

//----------PATTERN----------//

//-----SQUARE PATTERN-------//

//total row= 4;
//every row has 4 stars
//total column= 4;

//row= outer loop
//column= inner loop

//outer loo -> 4rows
// for(int row = 0; row<4; row++){
//     //inner loop -> 4 star pront
//     //har ek row me kya karna hai wo inner loop batyega
//     for (int col = 0; col<4; col++){
//         cout<<"* ";
//     }
//     cout<<endl;
// }


//-----RECTANGLE PATTERN-------//
//no row = 3
//no of column = 5
//every row print 5 * 

//outer loop -> 3 rows
//inner loop -> 5 star print


// for (int r = 0; r<3;r++){
//     for(int c=0; c<5; c++){
//         cout<<" * ";
//     }
//     cout <<endl;
// }

// int length;
// int breadth;
// cout<<"Enter the length of rectangle: ";
// cin>>length;

// cout<<"Enter the breadth of rectangle: ";
// cin>>breadth;

// for(int r= 0; r<length; r++ ){
//     for(int c=0; c<breadth; c++ ) {
//         cout<<" "<< "*";
//     }
//     cout <<endl;
// }

//Hollow Rectangle Pattern

//no of row = 4
//no of column = 5

//row0=5*
//row1=1*3space1*
//row2=1*3space1*
//row3=5*

//column0=5*
//column1=1*3space1*
//column2=1*3space1*
//column3=5*



// //outer loop
// for (int r=0; r<4; r++){

//     //inner loop
//     for(int c=0; c<5; c++){
//         if (r == 0 || r == 3){
//             cout<<"*";
//         }
//         else{
//             if(c==0||c==4){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//     }
//     cout<<endl;
// }

// int length;
// int width;
// cout<<"Enter the length = ";
// cin>>length;

// cout<<"Enter the breadth = ";
// cin>>width;

// //outer loop
// for(int row=0; row<length; row = row + 1){
//  //inner loop
//     for(int col = 0; col < width; col = col + 1){
//         //logic
//         if(row == 0 || row == length-1){
//             cout << " * ";    
//         }
//         else{
//             //middle row
//             if (col == 0 || col == width-1){
//                 cout << " * ";
//             }
//             else{
//                 cout << "   ";

//             }
//         }
//     }
//     cout << endl;
// }

//------Hallow square pattern------//

//  int side;
//     cout<<"Enter the side of square: ";
//     cin>>side;

//     for(int row= 0; row<side; row= row+1){
//         for (int col=0; col<side; col=col+1){
//             if(row==0||row==side-1){
//                 cout<<" * ";
//             }
//             else{
//                 if(col==0||col==side-1)
//                 {
//                     cout<<" * ";
//                 }
//                 else{
//                     cout<<"   ";
//                 }
//             }
//         }
//-------ye mai bhul jata hu------// 
//         cout<<endl;
//     }


// int row;
// int col;
// //outer loop 
// for(row = 0; row<5; row++){
//     //inner loop
//     for(col=0; col<5; col++){
//         if(row==0 || row==4 || col==0 || col==4 || row==col || col==4-row){
//             cout<<" * ";
//         }
//            else{
//                 cout<<"   ";
//             }
//         }
// //-------ye mai bhul jata hu------//
//         cout<<endl;
//     }
    

// ------Half Pyramid Pattern--------//
// for (int row =0; row <4; row++){
//     for(int col = 0; col<row+1; col++){
//         cout<<" * ";
//     }
//     //-------ye mai bhul jata hu------//
//     cout<<endl;
// }

// int n;
// cout<<"Enter the number of rows: ";
// cin>>n;
// //outer loop
// for (int row =0; row <n; row++){
//     //inner loop
    
//     for(int col = 0; col<row+1; col++){
//         cout<<" * ";
//     }
//     //-------ye mai bhul jata hu------//
//     cout<<endl;
// }

















return 0;





}