#include <iostream>
using namespace std;
int main(){
    int x;
    cout << "How many bottles of beer are on the wall?" << endl;
    cin >> x;
    while (x>0){
        cout << x << " bottles of beer on the wall." << endl;
        cout << x << " bottles of beer." << endl;
        cout << "Take one down, pass it around." << endl;
        x--;
        cout << x << " bottles of beer on the wall." << endl;
        cout << "---------------------------------------" << endl;
    }
}