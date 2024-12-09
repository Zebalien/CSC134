//Isaac Kasprak
//csc134
//11-25-24
//M6Lab2

#include <iostream>
#include <vector>
using namespace std;

const int RED=1;
const int BLACK=0;

int main(){
    //start with empty vector
    vector<int> chamber={RED, BLACK, RED};

    chamber.push_back(RED);
    chamber.push_back(RED);
    chamber.push_back(BLACK);

    for (int round:chamber){
        if (round==RED){
            cout << "RED ";
        }
        if (round==BLACK){
            cout << "BLACK ";
        }
    }
    cout << endl;
    return 0;
}