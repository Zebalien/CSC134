#include <iostream>

using namespace std;
/*
CSC 134
M5LAB1 - Choose Your Own Adventure
Isaac Kasprak
10-21-24
This template serves as a starting point
for your own program. We'll be using
void functions to tell a simple story,
where the user gets to make choices.
You can fork this template by clicking on the name above, then click the three
dots on the top right, and click 'fork repl'. This makes a copy for you to use.
*/
// Function Prototypes
// Any functions you make will need to
// be listed here, in this format, at the top.
// This is so the compiler knows to save
// room for them in the final program.
void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
// TODO: add more choices here
void choice_order_food();
void choice_basement();
void choice_inside();
void choice_dream();
void choice_no_dream();
int main() {
    cout << "M5LAB1 - Choose Your Own Adventure" << endl;
    // load up the main menu
    main_menu();
    // when we return here, we're done
    cout << "Thanks for playing!" << endl;
    return 0; // finished with no errors
}
void main_menu() {
    // Write a simple menu that lets the user choose 1,2, or 3, or 4 to quit.
    cout << "Main Menu" << endl;
    cout << "You're in front of a spooky old house. You are recording it for your YouTube channel." << endl;
    cout << "Do you:" << endl;
    cout << "1. Try the front door" << endl;
    cout << "2. Sneak around back" << endl;
    cout << "3. Forget it, and go home" << endl;
    cout << "4. [Quit]" << endl;
    cout << "Choose: ";
    int choice;
    cin >> choice;
    if (1 == choice) {

        choice_front_door();
    } else if (2 == choice) {

        choice_back_door();
    } else if (3 == choice) {

        choice_go_home();
    } else if (4 == choice) {

        cout << "Ok, quitting game" << endl;

        return; // go back to main()
    } else {

        cout << "That's not a valid choice, please try again." << endl;

        cin.ignore(); // clear the user input

        main_menu(); // try again
    }
}
// FUNCTION DEFINITIONS
// OK, we have the prototypes at the top, but
// now we have to actually write the functions.
// They go here, after main().
void choice_front_door() {
    cout << "Try the front door." << endl;
    cout << "It's locked. " << endl;
    cout << "Do you:" << endl;
    cout << "1. Check around back" << endl;
    cout << "2. Give up and go home" << endl;
    int choice;
    cout << "Choose: ";
    cin >> choice;
    if (1 == choice) {

        choice_back_door();
    } else if (2 == choice) {

        choice_go_home();
    }

}
void choice_back_door() {

    cout << "You went to the back door." << endl;

    cout << "Where do you look now?" << endl;

    cout << "1. Go in the back door" << endl;

    cout << "2. Go in the basement" << endl;

    cout << "3. Go home" << endl;

    int choice;

    cout << "Choose: ";

    cin >> choice;

    if (1 == choice) {

        choice_inside();

    } else if (2 == choice) {

        choice_basement();

    } else if (3 == choice) {

        choice_go_home();

    }
}
void choice_go_home() {

    cout << "You went home." << endl;

    cout << "Safe at home, do you:" << endl;

    cout << "1. Order some food" << endl;

    cout << "2. Go to bed." << endl;

    int choice;

    cout << "Choose: ";

    cin >> choice;

    if (1 == choice) {

        choice_order_food();

    } else if (2 == choice) {

        cout << "You go to bed, maybe going to film at that house would not make a good video." << endl;
        cout << "Do you want to dream?" << endl;
        cout << "1.Yes" << endl;
        cout << "2.No" << endl;
        int dream;
        cin >> dream;
        if (dream == 1) {
            choice_dream();
        } else {
            choice_no_dream();
        }

    }
}
// any new choices go here
void choice_order_food() {

    cout << "You order food." << endl;

    cout << "What do you order?" << endl;

    cout << "1. Spaghetti" << endl;

    cout << "2. Pizza" << endl;

    int choice;

    cout << "Choose: ";

    cin >> choice;

    if (1 == choice) {

        cout << "Three days until Mario steals your liver." << endl;

        cout << "Thanks for playing!" << endl;

        cout << "By the way, watch out for Mario." << endl;

        cout << "Play again?" << endl;

        cout << "1.Yes" << endl;

        cout << "2.No" << endl;

        int again;

        cin >> again;

        if (again == 1) {

            main_menu();

        } else if (again == 2) {

            cout << endl;

        }

    } else if (2 == choice) {

        cout << "Mario steals your liver." << endl;

        cout << "Thanks for playing!" << endl;

        cout << "Play again?" << endl;

        cout << "1.Yes" << endl;

        cout << "2.No" << endl;

        int again;

        cin >> again;

        if (again == 1) {

            main_menu();

        } else if (again == 2) {

            cout << endl;

        }

    }
}
void choice_inside() {

    cout << "You go inside." << endl;

    cout << "There are only 2 places you can go" << endl;

    cout << "1.Basement" << endl;

    cout << "2.Upstairs" << endl;

    int choice;

    cout << "Choose: ";

    cin >> choice;

    if (1 == choice) {

        choice_basement();

    } else if (2 == choice) {

        cout << "You go upstairs and get caught by the monster. You die" << endl;

        cout << "Thanks for playing!" << endl;

        cout << "Play again?" << endl;

        cout << "1.Yes" << endl;

        cout << "2.No" << endl;

        int again;

        cin >> again;

        if (again == 1) {

            main_menu();

        } else if (again == 2) {

            cout << endl;

        }

    }
}
void choice_basement() {

        cout << "You go into the basement. You see something wearing a hat that looks like one of the aliens from Toy Story." << endl;

        cout << "What do you do?" << endl;

        cout << "1.Record it" << endl;

        cout << "2.Leave" << endl;

        int choice;

        cout << "Choose: ";

        cin >> choice;

        if (1 == choice) {

            cout << "You record the thing." << endl;

            cout << "I think its just hanging there." << endl;

            cout << "You leave the house and upload the video." << endl;

            cout << "The video explodes, but you get a ton of hate after recording a dead body." << endl;

            cout << "You have made a severe and continuous lapse in your judgment." << endl;

            cout << "You get canceled, but you could sell a terrible drink and market it as 'healthy' due to it having 400mg of electrolytes but of the wrong type." << endl;

            cout << "Bad ending" << endl;

            cout << "Thanks for playing!" << endl;

            cout << "Play again?" << endl;

            cout << "1.Yes" << endl;

            cout << "2.No" << endl;

            int again;

            cin >> again;

            if (again == 1) {

                main_menu();

            } else if (again == 2) {

                cout << endl;

            }

        } else if (2 == choice) {

            cout << "You hear something clashing around the house." << endl;

            cout << "You do not record the thing and start running out of the house trying to escape the creature." << endl;

            cout << "You narrowly escape the house." << endl;

            cout << "You luckily got footage of the creature and it goes viral online." << endl;

            cout << "People in suits visit you everyday and a black car follows you around." << endl;

            cout << "The nice people in the black suits eventually take you away." << endl;

            cout << "Good ending?" << endl;

            cout << "Thanks for playing." << endl;

            cout << "Play again?" << endl;

            cout << "1.Yes" << endl;

            cout << "2.No" << endl;

            int again;

            cin >> again;

            if (again == 1) {

                main_menu();

            } else if (again == 2) {

                cout << endl;

            }

        }
        void choice_dream() {
            cout << "You decided to have a dream." << endl;
            cout << "Freddy Kruger decides to attack your dream." << endl;
            cout << "You die." << endl;
            cout << "Thanks for playing!" << endl;
            cout << "Play again?" << endl;
            cout << "1.Yes" << endl;
            cout << "2.No" << endl;
            int again;
            cin >> again;
            if (again == 1) {
                main_menu();
            } else if (again == 2) {
                cout << endl;
            }
        }
        void choice_no_dream() {
            cout << "You decided to not dream." << endl;
            cout << "You survive the night." << endl;
            cout << "Thanks for playing!" << endl;

            cout << "Play again?" << endl;

            cout << "1.Yes" << endl;

            cout << "2.No" << endl;

            int again;

            cin >> again;

            if (again == 1) {

                main_menu();

            } else if (again == 2) {
                cout << endl;
            }
        }