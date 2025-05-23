#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    //pair<datatype1, datatype2> name;
    //pair<int, char> p1;
    //pair<int, char> p2(10, 'a');
    //pair<int, char> A = {10, 'a'};
    pair<int, char> p1 = make_pair(10, 'a');
    

    //accessing pair
    cout << p1.first << endl; //10
    cout << p1.second << endl; //'a'

    return 0;
}