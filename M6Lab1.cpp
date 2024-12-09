//csc134
//M6Lab1-buckshot roulette
//Kaspraki
//11-13-24

#include <iostream>

using namespace std;

//constants
const int NUM_ROUNDS=7;
const int RED=1; //live
const int BLACK=0; //blank


int main(){
    //load the chamber
    int chamber[]={BLACK,BLACK, RED, RED, BLACK, RED, RED};
    //cout << chamber << endl; NO, DOESNT WORK
    //Use a range based loop to print all the rounds instead
    for (int round: chamber){
        if (round==RED){
            cout << "RED ";
        }
        if (round==BLACK){
            cout << "BLACK ";
        }
    }
    cout << endl;
}