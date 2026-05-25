#include<iostream>
using namespace std;

void binary_right_triangle(int rows);

int main(){

    int rows;
    cout<<"Enter Rows: ";
    cin>>rows;

    binary_right_triangle(rows);
    return 0;
}

void binary_right_triangle(int rows){

    //Printing Rows
    for(int i=1; i<=rows; i++){

        //Printing normal right angle triangle
        for(int j=1; j<=i; j++){
            cout<<j;
        }

        //Printing Space
        for(int k=0; k<(rows-i)*2; k++){
            cout<<" ";
        }

        //Printing Mirror Right triangle
        for(int l=i; l>=1; l--){
            cout<<l;
        }

        cout<<endl;
    }


}