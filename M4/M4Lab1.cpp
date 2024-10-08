//csc134
//M4Lab1
//Isaac Kasprak
//10-7-24

#include <iostream>
using namespace std;

int main() {
    cout << "M4LAB1" << endl;
    string emoji="👾";
    //cout << "👾" << endl;
    // print sideways (row)
    for (int i=0; i<9; i++){
        cout << "👾" << " ";
    }
    cout << endl; // finish the row

    //print down (column) 
    for (int j=0; j<9;j++){
        cout << emoji << endl;
    }
    cout << "Full version: " << endl << endl;
    const int rows = 7;
    const int cols = 3;
    //put both together, to fill in the rectangle
    for (int i=0;i<rows;i++){
        for (int j=0;j<cols;j++){
            cout << emoji << " ";
        }
        cout << endl;
    }
 //HelloWorld("print")   
}