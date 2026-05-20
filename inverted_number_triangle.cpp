#include<iostream>
using namespace std;

void inverted_number_triangle(int rows);

int main(){

    int rows;
    cout<<"Enter Rows: ";
    cin>>rows;

    inverted_number_triangle(rows);
    return 0;
}

void inverted_number_triangle(int rows){

    for(int i=rows; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

}