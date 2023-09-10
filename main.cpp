// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int rowcount;
    int colcount;
    cout<<"Enter the number of row";
    cin>> rowcount;
    cout<<"Enter the number of column";
    cin>> colcount;

    for(int row=0;row<rowcount;row=row+1){
        if(row==0 || row==(rowcount-1)){
            for(int col=0;col<colcount;col=col+1){
                cout << "* ";
            }
        }
        else{
            cout << "* ";
            for(int col=0;col<colcount-2;col=col+1){
                cout << "  ";
            }
            cout <<"* ";
        }
        cout <<endl;
    }
}