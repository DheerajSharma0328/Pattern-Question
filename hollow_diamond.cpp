#include<iostream>
using namespace std;

void hollow_diamond(int rows);

int main(){

    int rows;
    cout<<"Enter Rows: ";
    cin>>rows;

    hollow_diamond(rows);
    return 0;
}


void hollow_diamond(int rows){

    int star = rows;
    int count = 1;

    //Outer Loop for Rows Upper Part;
    for(int i=0; i<rows; i++){

        // cout<<count<<" ";

        //Printing Inverted Right Triangle
        for(int j=star; j>0; j--){
            cout<<"*";
        }

        //Printing Space
        for(int k=0; k<2*i; k++){
            cout<<" ";
        }

        //Printing Mirrior Inverted Right Trinagle
        for(int l=star; l>0; l--){
            cout<<"*";
        }

        cout<<endl;
        star -= 1;
        count++;
    }

    star = rows;

        //Outer Loop for Rows Lower Part;
    for(int i=0; i<rows; i++){

        // cout<<count<<" ";
        //Printing Right Triangle
        for(int j=0; j<=i; j++){
            cout<<"*";
        }

        //Printing Space
        for(int k=0; k<2*(rows-i)-2; k++){
            cout<<" ";
        }

        //Printing Mirrior Right Trinagle
        for(int l=0; l<=i; l++){
            cout<<"*";
        }

        cout<<endl;
        count++;


    }

}