//Just a thing for a story I have in my head, ignore cause it's all fiction
//Its sort of like scp, but more of a topic I can relate to
//Just testing my skills from what we learned
//Edit: Used gpt to change most if/else statements to void cause Im to lazy to
#include <iostream>
using namespace std;
void fleeEncounter();
void cameras();
void history();
void watch();
void welcome() {
    cout << "Welcome to experiment 1. :)" << endl;
    cout << "Are you ready to proceed? (yes/no)" << endl;
}

void insufficientClearance() {
    cout << "I am sorry but you do not have a high enough level to access this content." << endl;
}

void sufficientClearance() {
    cout << "Well, it seems you have a high enough level. Let me introduce you to this entity." << endl;
    cout << "This entity is able to change shapes and was responsible for the incident occurring between a group of kids and him." << endl;
    cout << "We are meant to contain these entities to protect society from them." << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Nothing is worth the risk." << endl;
    }
}

void anomalyEscaped() {
    cout << "ANOTHER ANOMALY ESCAPED" << endl;
    cout << "You will not be back for another night." << endl;
    exit(0);
}

void handleResponseYes() {
    string freedom;
    cout << "Oh thank God there is someone else here. Can you let me out? (Yes/No)" << endl;
    cin >> freedom;
    if (freedom == "Yes"||freedom=="yes") {
        cout << "Thank you, you gullible test subject" << endl;
        anomalyEscaped();
    } else {
        cout << "Well, I'll escape another day." << endl;
    }
    void handleResponseNo();
    string answer;
    cout << "The phone starts ringing, answer it? (Yes/No)" << endl;
    cin >> answer;
    if (answer == "Yes"||answer=="yes") {
        string join;
        cout << "Hey, Liam, it's nice to finally reach you. We want you to release all of the monsters. Will you join?(Yes/No)" << endl;
        cin >> join;
        if (join == "Yes"||join=="yes") {
            cout << "Great, press the 5 blue buttons on your console." << endl;
            anomalyEscaped();
        } else {
            cout << "Too bad you don't want to free us." << endl;
            void handleResponseNo();
            handleResponseNo();
        }
    } else {
        cout << "You should have answered that, Liam. It was really important." << endl;
        handleResponseNo();
    }
}

void handleResponseNo() {
    cout << "I guess no one else is here to free me, you are a lucky man Liam." << endl;
    cout << "Later in the night you encounter a shadow in front of you." << endl;
    fleeEncounter();
}

void fleeEncounter() {
    string flee;
    cout << "You need to flee." << endl;
    cin >> flee;
    if (flee == "Flee" || flee == "flee") {
        cout << "You flee the scene, running into the woods." << endl;
        string video;
        cout << "You encounter a house and run up the stairs and find a camera system, open it? (Yes/No)" << endl;
        cin >> video;
        if (video == "Yes" || video == "yes") {
            cameras();
        }
    } else {
        cout << "Well, I thought you would run; it's too late for you now." << endl;
        exit(0);
    }
}

int main() {
    string yn;
    welcome();
    cin >> yn;

    if (yn == "yes" || yn == "Yes") {
        cout << "Well then, let's proceed." << endl;
        
        int level;
        cout << "What is your clearance level?" << endl;
        cin >> level;

        if (level == 1 || level == 2 || level == 3) {
            insufficientClearance();
        } else if (level == 4) {
            sufficientClearance();
        }

        string response;
        cout << "Hello? Is anyone there? I seem to be stuck in this cell-like structure and I do not know why I am here." << endl;
        cout << "Respond? (Yes/No)" << endl;
        cin >> response;

        if (response == "Yes"||response=="yes") {
            handleResponseYes();
        } else {
            handleResponseNo();
        }
    } else {
        cout << "Come back when you are ready." << endl;
        exit(0);
    }
    return 0;
}
void cameras(){
        string file;
        cout << "You open the camera system and see a file. Do you open it?(Yes/No)" << endl;
        cin >> file;
        if(file=="yes"||file=="Yes"){
            history();
        } else {
            watch();
        }
}
void history(){

}
void watch(){

}