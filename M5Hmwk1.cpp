//Csc134
//M5 Homework1
// Julian Palacio, Isaac Kasprak
//11/4/24

#include <iostream>
#include <iomanip>

using namespace std;

// Functions here
void do_choice(int);
void average_rainfall();
void volume();
void roman_numeral();
void geometry_calculator();
void distance_traveled();
void exit();

int main() {
    cout << "Which question would you like to see?" << endl;
    cout << "1 - Average Rainfall" << endl;
    cout << "2 - Volume" << endl;
    cout << "3 - Roman Numerals" << endl;
    cout << "4 - Geometry Calculator" << endl;
    cout << "5 - Distance Traveled" << endl;
    cout << "6 -  EXIT" << endl;
    int choice;
    cin >> choice;
    if (choice < 1 || choice > 6) {
        while (choice <1 || choice > 6) {
            cout << "Please enter a number between 1 and 6!" << endl;
            cin >> choice;
        }
    }
    do_choice(choice);
    return 0;
}
void do_choice(int choice) {
    if (choice == 1) {
        average_rainfall();
    }
    else if (choice == 2) {
        volume();
    }
    else if (choice == 3) {
        roman_numeral();
    }
    else if (choice == 4) {
        geometry_calculator();
    }
    else if (choice == 5) {
        distance_traveled();
    }
    else if (choice == 6) {
        exit();
    }
}
void average_rainfall() {
    string month1, month2, month3;
    double rainfall1, rainfall2, rainfall3;
    cout << "Welcome to the average rainfall calculator!" << endl;
    cout << "Please enter month # 1: ";
    cin >> month1;
    cout << "Please enter the rainfall for the month of " << month1 << ": ";
    cin >> rainfall1;
    cout << "Please enter month # 2: ";
    cin >> month2;
    cout << "Please enter the rainfall for the month of " << month2 << ": ";
    cin >> rainfall2;
    cout << "Please enter month # 3: ";
    cin >> month3;
    cout << "Please enter the rainfall for the month of " << month3 << ": ";
    cin >> rainfall3;
    double total = rainfall1 + rainfall2 + rainfall3;
    double average_rain = total/3;
    cout << fixed << setprecision(2);
    cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " is " << average_rain << endl;
    cout << "Thank you for using the average rainfall calculator" << endl;
    exit();
    }
void volume(){


    double length, width, height, volume;    
    cout << "Welcome to the box volume calculator!" << endl;
    cout << "Please enter the length of the box: ";
    cin >> length;
    if (length<1){
            while (length<1){
            cout << "You need to enter a positive number!" << endl;
            cin >> length;
            }
        }
    cout << "Please enter the width of the box: ";
    cin >> width;
    if (width<1){
            while (width<1){
            cout << "You need to enter a positive number!" << endl;
            cin >> width;
            }
        }
    cout << "Please enter the height of the box: ";
    cin >> height;
    if (height<1){
            while (height<1){
            cout << "You need to enter a positive number!" << endl;
            cin >> height;
            }
        }
    volume = length * width * height;
    cout << "The volume of the box is " << volume << " units cubed" << endl;
    exit();
}
void roman_numeral() {
    cout << "Welcome to the roman numeral converter!" << endl;
    cout << "Enter a number (1-10): ";
    int num;
    cin >> num;
    if (num<1 || num>10){
        while (num<1 || num>10){
            cout << "You need to enter a number from 1 to 10!" << endl;
            cin >> num;
        }
    }
    if (num==1) {
        string roman="I";
        cout << "The roman numeral version of " << num << " is " << roman << endl;
    } else if (num==2) {
        string roman="II";
        cout << "The roman numeral version of " << num << " is " << roman << endl;
    } else if (num==3) {
        string roman="III";
        cout << "The roman numeral version of " << num << " is " << roman << endl;
    } else if (num==4) {
        string roman="IV";
        cout << "The roman numeral version of " << num << " is " << roman << endl;
    } else if (num==5) {
        string roman="V";
        cout << "The roman numeral version of " << num << " is " << roman << endl;
    } else if (num==6) {
        string roman="VI";
        cout << "The roman numeral version of " << num << " is " << roman << endl;
    } else if (num==7) {
        string roman="VII";
        cout << "The roman numeral version of " << num << " is " << roman << endl;
    } else if (num==8) {
        string roman="VIII";
        cout << "The roman numeral version of " << num << " is " << roman << endl;
    } else if (num==9) {
        string roman="IX";
        cout << "The roman numeral version of " << num << " is " << roman << endl;
    } else if (num==10) {
        string roman="X";
        cout << "The roman numeral version of " << num << " is " << roman << endl;
    }
    exit();
}
void geometry_calculator(){
    cout << "Welcome to Geometry Calculator!" << endl;
    cout << "What would you like to calculate?" << endl;
    cout << "1. Calculate the area of a circle" << endl;
    cout << "2. Calculat e the area of a rectangle" << endl;
    cout << "3. Calculate the area of a triangle" << endl;
    cout << "4. Quit" << endl;
    cout <<  "Enter your choice (1-4): ";
    int cal_area;
    cin >> cal_area;
    if (cal_area < 1 || cal_area > 4) {
        while (cal_area <1 || cal_area > 4) {
            cout << "Please enter a number between 1 and 4!" << endl;
            cin >> cal_area;
        }
    }
    if(cal_area==1) {
        cout << "What is the radius of the circle" << endl;
        int radius;
        cin >> radius;
        if (radius<0){
            while (radius<0){
            cout << "You need to enter a positive number!" << endl;
            cin >> radius;
            }
        }
        int c_area=3.14159*(radius*radius);
        cout << "The area of the circle is " << c_area << endl;
    } else if(cal_area==2){
        cout << "What is the length of the rectangle?" << endl;
        int length;
        cin >> length;
        if (length<0){
            while (length<0){
            cout << "You need to enter a positive number!" << endl;
            cin >> length;
            }
        }
        cout << "What is the width of the rectangle?" << endl;
        int width;
        cin >> width;
        if (width<0){
            while (width<0){
            cout << "You need to enter a positive number!" << endl;
            cin >> width;
            }
        }
        int r_area=length*width;
        cout << "The area of the rectangle is " << r_area << endl;
    } else if(cal_area==3) {
        cout << "What is the base iof the triangle?" << endl;
        int base;
        cin >> base;
        if (base<0){
            while (base<0){
            cout << "You need to enter a positive number!" << endl;
            cin >> base;
            }
        }
        cout << "What is the height of the triangle?" << endl;
        int height;
        cin >> height;
        if (height<0){
            while (height<0){
            cout << "You need to enter a positive number!" << endl;
            cin >> height;
            }
        }
        int t_area=.5*base*height;
        cout << "The area of the triangle is " << t_area << endl;
    } else{
        cout << "Goodbye" << endl;
        
     }
    exit();
    
    
}
void distance_traveled(){
    cout << "Welcome to the distance calculator!" << endl;
    int speed;
    cout << "What is the speed of the vehicle in miles?(no decimals) ";
    cin >> speed;
    if (speed<0){
        cout << "Please enter a positive number!" << endl;
        cin >> speed;
    }
    cout << "How long did the vehicle travel in hours?(no decimals) ";
    int time;
    cin >> time;
    if (time<1){
        cout << "Please enter a time greater than or equal to 1!" << endl;
        cin >> time;
    }
    cout << "--------------------------------" << endl;
    cout << "Time          distance" << endl;
    cout << "--------------------------------" << endl;
    for (int i=1; i<=time; i++){
        int distance = speed * i;
        cout << i << "             " << distance << endl;
    }
    exit();
}
void exit(){
    cout << "Thank you for visiting this assignment." << endl;
    cout << "Would you like to try another program (y/n)?" << endl;
    string ans;
    cin >> ans;
    while (ans != "y" && ans != "n") {
        cout << "Please select a valid option (y/n)!" << endl;
        cin >> ans;
    }
    if (ans == "y") {
        main();
    }
    else if (ans == "n") {
        cout << "Visit again soon." << endl;
        cout << "Goodbye!" << endl;
    }
    return;
    }
