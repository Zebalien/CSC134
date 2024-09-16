//M3T1
//CSC134
//9-16-24
//Isaac Kasprak

//Ask the user to enter the length and width of two rectangles,
//then display the area of both

#include <iostream>
using namespace std;
int main()  {
    //set up variable
    double width1, width2, length1, length2;
    double area1, area2;

    cout << "M3T1-Area of two rectagles" << endl;
    cout << "Width of first rectangle" << endl;
    cin >> width1;
    cout << "Length of first rectangle" << endl;
    cin >> length1;
    cout << endl;
    cout << "Width of second rectangle" << endl;
    cin >> width2;
    cout << "Length of second rectangle" << endl;
    cin >> length2;

    //calculations
    area1=width1*length1;
    area2=width2*length2;

    //response
    cout << "The area of the first rectangle is " << area1 << endl;
    cout << "The area of the second rectangle is " << area2 << endl;

}