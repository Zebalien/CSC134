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
bool play_round();

int main()
{
 
    //variables
 
    int die1, die2, total;
 
    int seed; //random seed
    bool is_winner;
    //input
 
    cout << "LETS GO GAMBLING!!! :D" << endl;
 
    //cout << "endter your lucky number: ";
 
    //cin >> seed;
 
    seed=time(0);
 
    srand(seed); //rng
    //play a round of craps
    is_winner=play_round();
    if (is_winner){
        cout << "You won!" << endl;
    }
    else {
        cout << "You lost!" << endl;
    }
    return 0;
}

bool play_round() {
    bool is_winner = false; //house always wins
    int die1=roll();
 
    int die2=roll();
 
    //die1 = (rand() % 6)+1;
 
    //die2 = (rand() % 6)+1;
 
    //results
 
    int total=die1+die2;
    int point;
 
    //output
 
    cout << "Your total is " << die1 << "+" << die2 << "=" << total << endl;
 
    //did they win or lose?
 
    if (total==2||total==3||total==12){
 
        //cout << "CRAPS! AW MAN D:" << endl;
        is_winner=false;
    }
 
    else if (total==7||total==11){
 
        //cout << "You Win! :D" << endl;
        is_winner=true;
    }
 
    else{
        cout << "Your point total is: " << endl;
        point=total;
        //roll again
        total=roll()+roll();
        cout << "Reroll: " << total << endl;
        //keep rolling till win or lose
        while (total != point && total !=7){
            
            if (total==point){
                is_winner=true;
            }
            else if (total==7){
                is_winner = false;
            }
            else{
                //keep rolling
                total=roll()+roll();
                cout << "Reroll: " << total << endl;
            }
        }
        //cout << "We are not doing points right now. AW MAN :/" << endl;
 
    }
    return is_winner;
}