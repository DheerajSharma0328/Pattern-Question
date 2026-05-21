/**
 * 
 * Here the actual user input is 5 Not 9
 * 
 * Here the main point is that if the user give input 5 then we need to print 9 line 
 * The first five line are normal right angle trinagle
 * The next fout line are inverted right angle trinagle
 * with the common base of five star
 */

#include<iostream>
using namespace std;

void half_diamond_star_pattern(int rows);
void half_diamond_star_pattern_another_approach(int rows);

int main(){

    int rows;
    cout<<"Enter Rows: ";
    cin>>rows;

    // half_diamond_star_pattern(rows);
    cout<<endl<<endl<<endl;
    half_diamond_star_pattern_another_approach(rows);
    return 0;

}

void half_diamond_star_pattern(int rows){

    int count = 1;
    //Outer Loop for rows
    for(int i=0; i<rows; i++){

        // Printing Right angle triangle or the upper part
        cout<<count;
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
        count++;


        //Printing Inverted Right angle triangle or the lower part
        if(i>= (rows-1)){
            for(int k=rows-2; k>=0; k--){
                cout<<count<<" ";
                for(int l=k; l>=0; l--){
                    cout<<"*";
                }

                cout<<endl;
                count++;

            }
        }

    }

     

}

void half_diamond_star_pattern_another_approach(int rows){

    int count = 1;
    //Outer Loop for rows for upper part
    for(int i=0; i<rows; i++){

        // Printing Right angle triangle or the upper part
        cout<<count<<" ";
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
        count++; 
    }
    
    //Printing Inverted Right angle triangle or the lower part
    //Outer Loop for rows for lower part
    for(int k=rows-2; k>=0; k--){
        cout<<count<<" ";
        for(int l=k; l>=0; l--){
                cout<<"*";
        }

        cout<<endl;
        count++;

    }
}