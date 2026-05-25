#include<iostream>
using namespace std;

void repeat_alphabet_right_triangle(int rows);

int main(){

    int rows;
    cout<<"Enter Rows: ";
    cin>>rows;

    repeat_alphabet_right_triangle(rows);
    return 0;

}

void repeat_alphabet_right_triangle(int rows){

    char alpha = 'A';

    for(int i=0; i<rows; i++){

        for(int j=0; j<=i; j++){
            cout<<alpha<<" ";
        }

        alpha++;
        cout<<endl;
    }

}