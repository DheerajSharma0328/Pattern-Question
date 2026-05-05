#include<iostream>
using namespace std;

void right_angle_triangle(int rows);

int main(){

    int rows;
    cout<<"Enter the number of row for right angle triangle: ";
    cin>>rows;

    right_angle_triangle(rows);

    return 0;

}


void right_angle_triangle(int rows){

    for(int i=1; i<=rows; i++){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

}