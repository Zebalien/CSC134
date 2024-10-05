//CSC134
//M3HW1-Silver
//Isaac Kasprak
//10-5-24

#include <iostream>
#include <random>
#include <ctime>
using namespace std;
int roll() {
//get a random number from 1 to 6
 
    int die=(rand()%6)+1;
 
    return die;
    }
int main() {
    //question 1
    string answer;
    cout << "Hello, I am a C++ program" << endl;
    cout << "Do you like learning C++, please type yes or no." << endl;
    cin >> answer;
    if (answer=="yes"){
        cout << "Thats great, I am sure we will get along!" << endl;
    }
    else if (answer=="no"){
        cout << "Aw, I hope we can still get along." << endl;
    }
    else {
        cout << "I am unsure what you are trying to say" << endl;
    }
    //question 2
    int batman;
    int fnf;
    cout << "Welcome weary traveller, I have a few questions for you before you proceed." << endl;
    cout << "If you do not answer them right, I will be forced to keep you trapped here." << endl;
    cout << "Question 1: What is 1+1?" << endl;
    cin >> batman;
    if (batman==2){
        cout << "Goodjob traveller, you have successfully answered my question, I hope you are ready for the next question." << endl;
    }
    else{
        cout << "Tough luck traveller, unfortunately you did not answer my question correctly" << endl;
    }
    cout << "Well traveller, I believe you have another question to answer." << endl;
    cout << "What is 3 times 5" << endl;
    cin >> fnf;
    if (fnf==15){
        cout << "Excellent job traveller, you may continue your journey" << endl;
    }
    else {
        cout << "Well traveller, you did not make me say how proud I am of you, goodbye traveller" << endl;
    }
    //question 3
    
    //variables
    int guess;
    int die1, die2, total;
 
    int seed; //random seed
    
    seed=time(0);
 
    srand(seed); //rng
 
    die1=roll();
 
    die2=roll();
    cout << "What is " << die1 << " + " << die2 << "?" << endl;
    cin >> guess;
    total=die1+die2;
    if (guess==total){
        cout << "That is correct!" << endl;
    }
    else {
        cout << "Incorrect!" << endl;
    }
    return 0;
}
//I somehow made it work :/