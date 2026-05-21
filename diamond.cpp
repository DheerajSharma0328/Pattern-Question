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

    for(int i=0; i<rows; i++){

        // Printing Upper Part
        //Upper Part Space
        for(int j=0; j<(rows-i)-1; j++){
            cout<<" ";
        }

        //Upper Part Star
        for(int k=0; k<(i*2)+1; k++){
            cout<<"*";
        }

        cout<<endl;
    }

    //Printing Lower Part
    for(int i=0; i<rows; i++){
        //Lower Part Space
        for(int l=0; l<i; l++){
            cout<<" ";
        }

        //Lower Part Start
        for(int m=0; m<2*(rows-i)-1; m++){
            cout<<"*";
        }

        cout<<endl;
    }

}    
