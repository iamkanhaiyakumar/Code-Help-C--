#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main(){
    // Searching and finding algorithms in STL

    vector<int> arr(5);
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;     
    arr[4] = 5;

    //binary_search
    // The binary_search algorithm checks if an element is present in a sorted range.
    // It returns true if the element is found, otherwise false.
    // The time complexity of binary_search is O(log n).
    // The binary_search algorithm requires the range to be sorted.

    // Example usage:
    int target = 3;
    bool it = binary_search(arr.begin(), arr.end(), target);     
    cout << it << endl; // Output: 1 (true)

    //lower_bound
    // The lower_bound algorithm returns an iterator pointing to the first element in the range that is not less than (i.e., greater or equal to) the specified value.
    // It returns an iterator to the first element that is not less than the specified value.
    // The time complexity of lower_bound is O(log n).
    // The lower_bound algorithm requires the range to be sorted.

    // Example usage:
    int target2 = 3;
    auto it2 = lower_bound(arr.begin(), arr.end(), target2);
    cout << *it2 << endl; // Output: 3

    //upper_bound
    // The upper_bound algorithm returns an iterator pointing to the first element in the range that is greater than the specified value.
    // It returns an iterator to the first element that is greater than the specified value.
    // The time complexity of upper_bound is O(log n).
    // The upper_bound algorithm requires the range to be sorted.

    // Example usage:
    int target3 = 3;
    auto it3 = upper_bound(arr.begin(), arr.end(), target3);
    cout << *it3 << endl; // Output: 4

    //equal_range
    // The equal_range algorithm returns a pair of iterators that represent the range of elements in the sorted range that are equal to the specified value.    
    // It returns a pair of iterators representing the range of elements equal to the specified value.
    // The time complexity of equal_range is O(log n).
    // The equal_range algorithm requires the range to be sorted.

    // Example usage:
    int target4 = 3;
    auto it4 = equal_range(arr.begin(), arr.end(), target4);
    cout << *it4.first << " " << *it4.second << endl; // Output: 3 4
    // The first iterator points to the first occurrence of the target value, and the second iterator points to the first element greater than the target value.
    // The range of elements equal to the target value is [3, 4).
    




    

    return 0;
}