#include<iostream>
using namespace std;

void rotateArray(int arr[], int size, int shift){
    
   
    int n = shift % size; // To handle cases where shift > size
    int finalShift = n ;
    
    if (n == 0){
        return; // No rotation needed
    }

    // step 1 copy last final shift elements to a temp array
    int temp[10000];
    int index = 0;
    for(int i = size - n; i < size; i++){
        temp[index] = arr[i];
        index++;
    }

    // step shift array elemnts by the final shift place
    for(int i = size -1; i >= n; i--){
        if(i - n >= 0){
            arr[i] = arr[i - n];
        }
    }

    //step 3 copy temp array to the start of the original array
    for(int i = 0; i < n; i++){
        arr[i] = temp[i];
    }

};

int main(){
    int arr[6] = {1, 2, 3, 4, 5, 6}; // Array of size 6
    int size = 6; 
    int shift = 2; // Number of positions to shift

    cout<<"Before rotation: "<<endl;
    for(int i =0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    rotateArray(arr, size, shift);

    // Print the rotated array
    cout << "Rotated array: "<<endl;
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}