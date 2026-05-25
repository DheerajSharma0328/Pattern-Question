#include<iostream>
using namespace std;

void all_number_right_triangle(int rows);

int main(){

    int rows;
    cout<<"Enter Rows: ";
    cin>>rows;

    all_number_right_triangle(rows);
    return 0;
}

void all_number_right_triangle(int rows){

    int number = 1;

    for(int i=0; i<rows; i++){

        for(int j=0; j<=i; j++){
            cout<<number<<" ";
            number += 1;
        }

        cout<<endl;
    }
}