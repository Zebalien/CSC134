//M3T3-CRAPS
//CSC134
//Isaac Kasprak
//9-25-24
#include <iostream>
#include <cstdlib> //for rand()
#include <ctime> //for time()
using namespace std;

int roll() {
    //get a random number from 1 to 6
    int die=(rand()%6)+1;
    return die;
}

int main()
{
    //variables
    int die1, die2, total;
    int seed; //random seed

    //input
    cout << "LETS GO GAMBLING!!! :D" << endl;
    //cout << "endter your lucky number: ";
    //cin >> seed;
    seed=time(0);
    srand(seed); //rng
    die1=roll();
    die2=roll();
    //die1 = (rand() % 6)+1;
    //die2 = (rand() % 6)+1;

    //results
    total=die1+die2;

    //output
    cout << "Your total is " << die1 << "+" << die2 << "=" << total << endl;

    //did they win or lose?
    if (total==2||total==3||total==12){
        cout << "CRAPS! AW MAN D:" << endl;
    }
    else if (total==7||total==11){
        cout << "You Win! :D" << endl;
    }
    else{
        cout << "We are not doing points right now. AW MAN :/" << endl;
    }

    return 0;
}
