#include<iostream>
using namespace std;

void inverted_pyramid(int rows);

int main(){


    int rows;
    cout<<"Enter Rows: ";
    cin>>rows;

    inverted_pyramid(rows);
    return 0;
}

void inverted_pyramid(int rows){

    int star = rows;

    for(int i=1; i<=rows; i++){

        for(int j=1; j<=i-1; j++){
            cout<<" ";
        }

        for(int k=1; k<= (star*2)-1; k++){
            cout<<"*";
        }

        --star;
        cout<<endl;

    }

}