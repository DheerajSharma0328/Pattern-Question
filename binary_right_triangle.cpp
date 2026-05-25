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

    int start = 0;

    for(int i=0; i<rows; i++){

        if(i%2 == 0){
            start = 1;
        }
        else{
            start = 0;
        }

        for(int j=0; j<=i; j++){ 

            cout<<start;
            start = 1 - start;
            

        }

        cout<<endl;
        

    }

}