 #include<iostream>
 #include<algorithm>
 using namespace std;

//  void sortZeroOne(int arr[], int n){
//      int start = 0;
//      int end = n-1;
//      while(start<end){
//          if(arr[start]==1){
//              swap(arr[start], arr[end]);
//              end--;
//          }
//          else{
//              start++;
//          }
//      }
//      for(int i =0; i<n; i++){
//          cout<<arr[i]<<" ";
//      }

//  }

// void sortZeroOne(int arr[],int n){
//     int zeroCount = 0;
//     int oneCount = 0;
//     //couting
//     for(int i = 0; i<n; i++){
//         if(arr[i]==0){
//             zeroCount++;
//         }
//         if(arr[i]==1){
//             oneCount++;
//         }
//     }

//     //Insertion
//     for(int i =0; i<zeroCount; i++){
//         arr[i] = 0;
//     }
//     for(int i = zeroCount; i<n; i++){
//         arr[i] = 1;
//     }
// }
void sortZeroOne(int arr[], int n) {
    int zeroCount = 0;
    // Counting 0s
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            zeroCount++;
        }
    }

    // Insertion of 0s and 1s
    fill(arr, arr + zeroCount, 0);
    fill(arr + zeroCount, arr + n, 1);


    // for (int i = 0; i < zeroCount; i++) {
    //     arr[i] = 0;
    // }
    // for (int i = zeroCount; i < n; i++) {
    //     arr[i] = 1;
    // }
}


 
 int main(){

        int arr[] = {0,1,0,1,1,0,1,0,1,0,1,0};
        int n = sizeof(arr)/sizeof(arr[0]);
        sortZeroOne(arr, n);

        // sort(arr, arr+n);// sort inbuilt function

        for(int i =0; i<n; i++){
            cout<<arr[i]<<" ";
        }

        
    
 
    return 0;
 }