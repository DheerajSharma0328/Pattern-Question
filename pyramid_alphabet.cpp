#include<iostream>
using namespace std;

void pyramid_alphabet(int rows);

int main(){

    int rows;
    cout<<"Enter Rows: ";
    cin>>rows;

    pyramid_alphabet(rows);
    return 0;
}

void pyramid_alphabet(int rows){

    char alpha = 'A';

    for(int i=0; i<rows; i++){

        //Printing Space
        for(int j=0; j<rows-i-1; j++){

            cout<<" ";

        }  
        
        // Printing half alphabet
        for(int k=0; k<=i; k++){
            cout<<alpha;
            alpha++;
        }

        alpha -= 2;

        //Printing Inverted part
        for(int l=0; l<i; l++){
            cout<<alpha;
            alpha--;
        }

        cout<<endl;
        alpha = 'A';
    }


}