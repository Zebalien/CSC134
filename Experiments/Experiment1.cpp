//Just a thing for a story I have in my head, ignore cause it's all fiction
//Its sort of like scp, but more of a topic I can relate to
//Just testing my skills from what we learned
#include <iostream>
using namespace std;
int main(){
    string yn;
    int level;
    string response;
    string freedom;
    cout << "Welcome to experiment 1. :)" << endl;
    cout << "Are you ready to proceed? (yes/no)" << endl;
    cin >> yn;
    if (yn == "yes") {
        cout << "Well then, lets proceed" << endl;
        cout << "Infront of you should be the necessary files to continue your research into this anomaly." << endl;
        cout << "Many of the redacted parts include different events caused by his shapeshifting ability." << endl;
        cout << "In order for you to read them, you need a high clearance level." << endl;
        cout << "What is your clearance level?" << endl;
        cin >> level;
        if (level==1||level==2||level==3){
            cout << "I am sorry but you do not have a high enough level to access this content." << endl;
        }
        else if (level==4){
            cout << "Well, it seems you have a high enough level, let me introduce you to this entity whome is in for one main reason." << endl;
            cout << "This entity is able to change shapes and was responsible for the incident occuring between a group of kids and him." << endl;
            cout << "We are meant to contain these entities to protect society from them, after all, we do not want any mass casualty events." << endl;
            cout << "Currently we are looking for this monster, so stricter security is implemented." << endl;
            for (int i=0; i<3; i++){
                cout << "Nothing is worth the risk." << endl;
            }
        }
        cout << "When dealing with these anomalies, you cannot let them trick you, they will escape and the blood will be on your hands." << endl;
        cout << "These anomalies are what was once considered to be human, but had a disablitiy causing them to become these monsters." << endl;
        cout << "We do not know how many are out there, and we do not know what all of them do." << endl;
        cout << "If you see a red flashing light on the pannel, that means an anomaly has escaped this containment site." << endl;
        cout << "Just ignore that one because that was from the experiment we were just talking about." << endl;
        cout << "Make sure to let me know when another lights up." << endl;
        cout << "Goodnight Liam, I will be back in the morning." << endl;
        cout << "--------------------------------------------------" << endl;
        cout << "MIDNIGHT" << endl;
        cout << "Hello? Is anyone there? I seem to be stuck in this cell like structure and I do not know why I am here." << endl;
        cout << "Respond? (Yes/No)" << endl;
        cin >> response;
        if (response=="Yes"){
            cout << "Oh thank God there is someone else here. Can you let me out? (Yes/No)" << endl;
            cin >> freedom;
            if (freedom=="Yes"){
                cout << "Thank you, you gullible test subject" << endl;
                cout << "ANOTHER ANOMALY ESCAPED" << endl;
                cout << "You will not be back for another night." << endl;
                exit(0);
            }
        }

    }
    else {
        cout << "Come back when you are." << endl;
    }
    return 0;
}