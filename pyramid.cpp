#include<iostream>
using namespace std;

void pyramid(int rows);

int main(){

    int rows;
    cout<<"Enter Rows: ";
    cin>>rows;

    pyramid(rows);
    return 0;

}

void pyramid(int rows){

    int space = rows;

    for(int i=1; i<=rows; i++){

        // Printing Space for first time
        for(int j=1; j<=space-1; j++){
            cout<<" ";
        }

        // Printing Star 
        for(int k=1; k<=(2*i)-1; k++){
            cout<<"*";
        }

        // Printing Space for second time
        for(int l=1; l<=space-1; l++){
            cout<<" ";
        }

        --space;
        cout<<endl;

    }

}