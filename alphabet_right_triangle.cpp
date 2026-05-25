#include<iostream>
using namespace std;

void alphabet_right_triangle(int rows);

int main(){

    int rows;
    cout<<"Enter Rows: ";
    cin>>rows;

    alphabet_right_triangle(rows);
    return 0;

}

void alphabet_right_triangle(int rows){
    
    for(int i=0; i<rows; i++){

        char alpha = 'A';

        for(int j=0; j<=i; j++){
            cout<<alpha<<" ";
            alpha++;
        }

        cout<<endl;
    }
}