#include<iostream>
#include<vector>
using namespace std;

// void fun(int a[], int n){
//     cout<<"Array elements are: "<<endl;
//     for(int i=0; i<n; i++){
//         cout<<a[i]<<endl;
//     }
//     // cout<<endl;
// }

void print(vector<int> v){
    int size = v.size(); // size of vector
    
    for(int i=0; i<size; i++){
        
        cout<<v[i]<<endl;
    }
    
}

int main(){
    // // static allocation of array
    // // int arr[5] = {1,2,3,4,5};
    // // fun(arr, 5);

    // // dynamic allocation of array
    // int n;
    // cout<<"Enter the size of array: ";
    // cin>>n;
   // int * arr = new int [n];//each elemnt would be 0,or garbage value
    // for(int i=0; i<n; i++){
    //     int data;
    //     cin>>data;
    //     arr[i]=data;
    // }
    // //let me try to insert more items;
    // //5 -> 14 index;
    // for(int i = 0; i<10; ++i){
    //     arr[n+i]=80;
    // }
    // fun(arr, n);


    vector<int> v; //  vector ek array hi h

    // //initialization
    // v.push_back(11); // 1st element
    // v.push_back(12); // 2nd element
    // v.push_back(13); // 3rd element

    // cout<<"After push_back() : "<<endl;

    // print(v); // print the vector

    // //pop_back() removes the last element of the vector
    // v.pop_back(); // remove last element
    // cout<<"After pop_back() : "<<endl;
    // print(v); // print the vector




    // while(1){
    //     int d;cin>>d; // take input from user
    //     v.push_back(d); // add element to vector
    //     cout<<"Capacity : "<<v.capacity()<<" size : "<<v.size()<<endl;
    // }


    //insert 
    int n;
    cin >>n; // take input from user
    for(int i=0; i<n; i++){
        int data;
        // cout<<"Enter element: ";
        cin>>data;

        v.push_back(data); // add element to vector
    }
    cout<<"elements are: "<<endl;
    v.clear(); // clear the vector
    print(v); // print the vector
   
}






    // return 0;
// }