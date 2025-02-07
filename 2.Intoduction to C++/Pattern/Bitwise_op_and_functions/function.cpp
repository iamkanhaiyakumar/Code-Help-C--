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
// void printNkatable(int n){


//     for (int i=1; i<=10; i++){
//         // cout<<2*i <<endl;
//         cout<<n*i << endl;
//     }
// }


///*******Find AP *******/

// int calculateAP(int a, int l, int n){
//     int ans = ((n)*(a+l))/2;
//     return ans;
// }


//******Fine prime *****/

bool isPrime(int num){
    for (int i=2; i<=(num-1); i++ ){
        if(num % i ==0)
        //not prime
        return false;
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

    // printNkatable(15);
     
    // int a = 2;
    // int l = 10;
    // int n = 5;

    // int ans = calculateAP(a,l,n);

    // cout << ans << endl;


    //prime number


    int number;
    cout<<"Enter the number"<<endl;
    cin>> number;

    bool ans = isPrime( number);
    if(ans == true){
        cout<<number<<" is Prime";
    }

    else{
        cout<<number<< " is Not Prime";
    }



    
    return 0;
}