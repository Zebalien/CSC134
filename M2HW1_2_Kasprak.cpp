#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int pizza;
    int slices;
    int visitors;
    int total_slices;
    int left_over;
    int eaten;

    cout << "How many pizzas are ordered?" << endl;
    cin >> pizza;
    cout << "How many slices per pizza?" << endl;
    cin >> slices;
    cout << "How many visitors?" << endl;
    cin >> visitors;

    //calculations
    total_slices=pizza*slices;
    eaten=3*visitors;
    left_over=total_slices-eaten;

    //response
    cout << "After all of the visitors eat their pizza, you will have " << left_over << " left over." << endl;
    
    
   return 0;
}