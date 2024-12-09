//CSC134
//M3LAB2- Grading
//Isaac Kasprak
// 9-23-24
#include <iostream>

using namespace std;

int main()
{
    int num_grade;
    cout << "Please enter a number grade (0-100)" << endl;
    cin >> num_grade;

    if (num_grade==100) {
        cout << "Congrats on the A+!" << endl;
    }
    else if (num_grade>=90) {
        cout << "Good job on the A" << endl;
    }
    else if (num_grade>=80) {
        cout << "Nice, you got a B" << endl;
    }
    else if (num_grade>=70){
        cout << "You got a C" << endl;
    }
    else if (num_grade>=60){
        cout << "You got a D, you can do better" << endl;
    }
    else{
        cout << "F" << endl;
    }




    return 0;
}
