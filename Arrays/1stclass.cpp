#include<iostream>
using namespace std;

int main(){
    //****creation**** */
    // int aar[5];
    // int brr[]; //Error: Array size missing

    // int crr[] = {1,2,3,4,5};
    // cout<<crr[0]<<endl;
    // cout<<crr[1]<<endl;
    // cout<<crr[2]<<endl;
    // cout<<crr[3]<<endl;
    // cout<<crr[4]<<endl;
    // cout<<crr[6]<<endl; //give garbage value

     
    // int drr[5] = {0};
    // cout<<drr[0]<<endl;


    // int arr[4];
    // fill(arr, arr+4, 202);
    // for(int i=0; i<4; i++){
    //     cout<<arr[i]<<" "<<endl; }
    // cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << endl;
   
   //Input and Output

   int arr[5];
   for(int a=0; a<5; a++){
    cout << "Enter the value of arr["<<a<<"] : ";
       cin>>arr[a];
    }
    for(int a=0; a<5; a++){
        cout<<a[arr]<<" ";
    }

    return 0;
}