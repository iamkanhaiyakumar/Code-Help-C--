#include<iostream>
using namespace std;

    void printAllPairs(int arr[], int n){
    //     for (int i = 0; i<n; i++){
    //         // from every i   we are running looping variable j from 0start to n end
    //         for (int j =0; j<n; j++){
    //             cout << arr[i]<<","<<arr[j]<<endl;
    //         }
    //     }
    // }
//     for(int i = 0; i<n; i++){
//         for(int j = i+1; j<n; j++){
//             cout<<arr[i]<<","<<arr[j]<<endl;
//          }
//     }
// }
        for(int i = 0; i<n; i++){
            for(int j = 0; j<i; j++){
                cout<<arr[i]<<","<<arr[j]<<endl;
             }
        }
    }
//     for(int i = 0; i<n; i++){
//         for(int j = i; j<n; j++){
//             cout<<arr[i]<<","<<arr[j]<<endl;
//         }
//     }
// }

int main(){

    int arr[] = {10, 5, 20, 15, 30};
    int n = 4;
    printAllPairs(arr, n);

    return 0;
}