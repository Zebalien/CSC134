//CSC134
//M4T2-input validation
//Isaac Kasprak
//10-2-24
#include <iostream>

using namespace std;

//function
void counting();

int main()
{
    //quick loop example
    //counting();

    //Input validation example
    const int MIN_PLAYERS = 1;
    const int MAX_PLAYERS = 4;
    int num_players;
    cout << "How many players? (1-4): ";
    cin >> num_players;
    while (num_players < MIN_PLAYERS || num_players > MAX_PLAYERS) {
        //ERROR!
        cout << "Please choose between " << MIN_PLAYERS;
        cout << " and " << MAX_PLAYERS << " players." << endl;
        cout << "How many players? (1-4): ";
        cin >> num_players;
    }
    cout << "You're playing with " << num_players << " players." << endl;

    //ready to start?
    string ready;
    do{
        cout << "waiting..." << endl;
        cout << "Are all players ready?(yes/no) ";
        cin >> ready;
    }while (ready != "yes");


    return 0;
}


void counting() {
    cout << "Version 1: while" << endl;
    int num=0;
    while (num<5){
        cout << num << endl;
        num++;
    }
    cout << "Version 2: for" << endl;
    for (int n=0; n<5; n++) {
        cout << n << endl;
    }
}
