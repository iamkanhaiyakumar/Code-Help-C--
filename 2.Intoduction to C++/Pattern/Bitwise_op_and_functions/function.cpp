#include<iostream>
using namespace std;
 
// void myNmae() # return nothing 
// {
//     cout << "Kanhaiya Kumar" << endl;
// }

// int slove(int a, int b)
// {
//     int sum = a + b;
//     return sum;
// }


// void print2katable(){

//*****parameter*****//
void printNkatable(int n){


    for (int i=1; i<=10; i++){
        // cout<<2*i <<endl;
        cout<<n*i << endl;
    }
}




int main()
{
    // myNmae();
    
    // int a  = 5;
    // int b = 10; 

    // int sum1 = slove(a,b);
    // cout <<  sum1 << endl;

    // print2katable();

    printNkatable(5);

    
    return 0;
}