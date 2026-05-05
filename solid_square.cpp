#include<iostream>
using namespace std;

void solid_square(int a);

int main(){

    int a;
    cout<<"Enter the input for rows and column: ";
    cin>>a;

    solid_square(a);
    
    return 0;

}

void solid_square(int a){

    for(int i=0; i<a; i++){
        for(int j=0; j<a; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

}