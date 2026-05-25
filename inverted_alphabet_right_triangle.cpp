#include<iostream>
using namespace std;

void inverted_alphabet_right_triangle(int rows);

int main(){

    int rows;
    cout<<"Enter Rows: ";
    cin>>rows;

    inverted_alphabet_right_triangle(rows);
    return 0;

}

void inverted_alphabet_right_triangle(int rows){
    
    for(int i=rows; i>=0; i--){

        char alpha = 'A';

        for(int j=i; j>=0; j--){
            cout<<alpha<<" ";
            alpha++;
        }

        cout<<endl;
    }
}