#include<iostream>
using namespace std;

void number_right_angle_trianagle(int rows);

int main(){

    int rows;
    cout<<"Enter Rows: ";
    cin>>rows;

    number_right_angle_trianagle(rows);

    return 0;
}

void number_right_angle_trianagle(int rows){

    for(int i=1; i<=rows; i++){

        for(int j=1; j<=i; j++){

            cout<<j<<" ";
        }

        cout<<endl;

    }

}