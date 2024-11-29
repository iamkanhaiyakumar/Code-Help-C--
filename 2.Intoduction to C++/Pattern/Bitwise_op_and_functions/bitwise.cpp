#include <iostream>
using namespace std;

int main() {
    // cout << (5 & 3) << endl;
    // cout <<(5 | 3) << endl;
    // cout <<(5^5^9) << endl;
    // cout <<(25<<2) << endl;
    // cout <<(25>>1) << endl;
    // cout << ((-10) <<1) << endl;
    // cout << ((-10) >> 1) << endl;

    // int n = 10;
    // if( (n&1) ==0) {
    //     cout << "Even" << endl;
    // } 
    // else {
    //     cout << "Odd " << endl;
    // }

    // int n = 11;
    // if(n&1)
    //  {
    //     cout << "Odd" << endl;
    // } 
    // else {
    //     cout << "Even " << endl;
    // }


    //////******SetBit Count******//////

    int num = 1;
    int setBitCount = 0;

    while (num !=0) {
        int lastbit = (num & 1);
        if(lastbit == 1) {
            setBitCount = setBitCount+1;
        }

        //right shift
        num = num >> 1;
    }



   // while (num > 0) {
    //     setBitCount += (num & 1);
    //     num = num >> 1;
    // }

    cout << "Total set Bits = "<<setBitCount << endl;


    return 0;

}