#include <iostream>
using namespace std;
int main(){
    int bottles_of_beer;
    cout << "How many bottles of beer are on the wall?" << endl;
    cin >> bottles_of_beer;
    while (bottles_of_beer>0){
        cout << bottles_of_beer << " bottles of beer on the wall." << endl;
        cout << bottles_of_beer << " bottles of beer." << endl;
        cout << "Take one down, pass it around." << endl;
        bottles_of_beer--;
        cout << bottles_of_beer << " bottles of beer on the wall." << endl;
        cout << "---------------------------------------" << endl;
    }
}