#include<iostream>
using namespace std;

void reverse_alphabet_right_triangle(int rows);

int main(){

    int rows;
    cout<<"Enter Rows: ";
    cin>>rows;

    reverse_alphabet_right_triangle(rows);
    return 0;
}

void reverse_alphabet_right_triangle(int rows){

    char alpha = 'A' + rows -1;
    char start = alpha;

    for(int i=0; i<rows; i++){

        for(int j=0; j<=i; j++ ){

            cout<<start;
            start++;
            
        }   

        start = start - i -2;
        cout<<endl;

    }
       
}