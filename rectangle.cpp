#include<iostream>
using namespace std;

void rectangle(int rows , int column);

int main(){

    int rows;
    cout<<"Enter Rows: ";
    cin>>rows;

    int column;
    cout<<"Enter Column: ";
    cin>>column;

    rectangle( rows , column);


    return 0;
}

void rectangle(int rows , int column){

    for(int i=0; i<rows; i++){
        for(int j=0; j<column; j++){
            cout<<"*";
        }
        cout<<endl;
    }

}