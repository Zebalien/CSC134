//CSC134
//M3Lab1
//Isaac Kasprak
//9-20-24

#include <iostream>
using namespace std;
int main()
{
    int choice;
    cout << "Would you like to eat a banana or a sandwich?" << endl;
    cout << "Type 1 for banana or 2 for sandwich" << endl;
    cin >> choice;
    if (1==choice){
        cout << "You eat the banana and die of radiation poisoning." << endl;
    }
    else if (2==choice){
        cout << "You eat the sandwich and become very strong." << endl;
    }
    else {
        cout << "I am sorry, but you starve after not choosing any food." << endl;
    }
    cout << "Thanks for doing this experiment, see you next time." << endl;
    return 0;
}