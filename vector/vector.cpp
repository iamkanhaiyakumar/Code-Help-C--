#include<iostream>
using namespace std;
void fun(int a[], int n){
    cout<<"Array elements are: "<<endl;
    for(int i=0; i<n; i++){
        cout<<a[i]<<endl;
    }
    // cout<<endl;
}

int main(){
    //static allocation of array
    // int arr[5] = {1,2,3,4,5};

    // fun(arr, 5);

    //dynamic allocation of array
    // int n;
    // cin>>n;
    // int * arr = new int [n];//each elemnt would be 0,or garbage value

    // for(int i=0; i<n; i++){
    //     int data;
    //     cin>>data;
    //     arr[i]=data;
    // }

    //let me try to insert more items;
    //5 -> 14 index;
    // for(int i = 0; i<10; ++i){
    //     arr[n+i]=80;
    // }
    fun(arr, n);
}



    // return 0;
// }