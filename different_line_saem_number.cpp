#include<iostream>
using namespace std;

void different_line_same_number(int rows);

int main(){

    int rows;
    cout<<"Enter Rows: ";
    cin>>rows;

    different_line_same_number(rows);

}

void different_line_same_number(int rows){

    for(int i=1; i<=rows; i++){
        for(int j=1; j<=i; j++){
            cout<<i<<" ";
        }

        cout<<endl;
    }

}