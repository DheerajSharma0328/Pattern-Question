#include<iostream>
using namespace std;



void butterfly(int rows);

int main(){

    int rows;
    cout<<"Enter Rows: ";
    cin>>rows;

    butterfly(rows);
    return 0;
}

void butterfly(int rows){

    //Upper part rows
    for(int i=0; i<rows; i++){

        //Printing Right Triangle
        for(int j=0; j<=i; j++){
            cout<<"*";
        }

        //Printing Space
        for(int j=0; j<2*(rows-i)-2; j++){
            cout<<" ";
        }

        //Printing Mirror Right trinagle
        for(int k=0; k<=i; k++){
            cout<<"*";
        }

        cout<<endl;
    }
    
    int star = rows-2;

    //Lower part rows
    for(int i=1; i<rows; i++){

        //Printing Inverse Right Triangle
        for(int j=star; j>=0; j--){
            cout<<"*";
        }
    

        //Printing Space
        for(int j=0; j<2*i; j++){
            cout<<" ";
        }

        //Printing Inverse Mirror Right trinagle
        for(int k=star; k>=0; k--){
            cout<<"*";
        }

        cout<<endl;
        star -= 1;
    }

}