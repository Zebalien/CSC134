//csc134
//M6T1 arrays
//KASPRAKi
//11-11-24

#include <iostream>
using namespace std;

//global const
const int NUM_DAYS=5;

//prototypes
void part1();
void part2();


int main(){
    part1();
    part2();
}

void part1(){
    //set up variables
    // for each day monday through friday:
    //-ask how many card
    //-add them to total
    //when done, report total and average
    double total=0;
    int todays_count=0;
    double average=0;
    for (int day=1; day <= NUM_DAYS; day++){
        cout << "Please enter the count for day " << day << " of " << NUM_DAYS << ":";
        cin >> todays_count;
        total+=todays_count;

    }
    // find average
    average=total/NUM_DAYS;
    cout << "For all " << NUM_DAYS << " days: " << endl;
    cout << "Total cars: " << total << endl;
    cout << "Average: " << average << endl;


}
void part2(){
    //set up variables
    // for each day monday through friday:
    //-ask how many card
    //-add them to total
    //when done, report total and average
    int cars[NUM_DAYS]; //array to hold values
    double total=0;
    int todays_count=0;
    double average=0;
    for (int day=1; day <= NUM_DAYS; day++){
        cout << "Please enter the count for day " << day << " of " << NUM_DAYS << ":";
        cin >> todays_count;
        cars[day]=todays_count;
        total+=todays_count;

    }
    // find average
    average=total/NUM_DAYS;
    cout << "For all " << NUM_DAYS << " days: " << endl;
    for (int day=1; day<=NUM_DAYS; day++){
        cout << cars[day] << ",";
    }
    cout << endl;
    cout << "Total cars: " << total << endl;
    cout << "Average: " << average << endl;
}