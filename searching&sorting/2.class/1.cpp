#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int target = 3;

    bool ans = binary_search(arr, arr + n, target);

    cout <<ans << endl;
    

    return 0;
}