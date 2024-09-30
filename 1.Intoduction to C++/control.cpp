#include <iostream>
using namespace std;

int main(){
    int budget;
    cout << "Enter your budget: "<<endl;

    cin >> budget;

    if(budget>10000){
        cout<<"You can go to collage"<<endl;
    }

    else{
        cout<<"You can't go to collage"<<endl;
    }


    return 0; 
} 