//csc134
//M4HW-silver
//Isaac Kasprak
//10-20-24

#include <iostream>
using namespace std;
int main(){
    int n;
    int i=0;
    int total;
    cout << "What number do you want to create a multiplication table of?(1-12)" << endl;
    cin >> n;
    while (i<13){
        total=n*i;
    cout << n << " times " << i << " is " << total << endl;
    i++;
    }
}