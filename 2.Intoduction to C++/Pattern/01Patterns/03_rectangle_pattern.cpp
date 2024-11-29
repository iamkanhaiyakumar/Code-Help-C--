 #include<iostream>
 using namespace std;
 int length;
    int breadth;

 int main(){
   // Rectangle pattern
   cout<<"Enter no of length = "<<endl;
   cin>>length;
   
   cout<<"Enter no of breadth = "<<endl;
    cin>>breadth;

    for(int row=0; row<length; row++){
        for(int col=0; col<breadth; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
   
   
   
   
    // outer
    // for(int row=0; row<3; row++){
    //     //inner
    //     for(int col=0; col<5; col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
 
    return 0;
 }