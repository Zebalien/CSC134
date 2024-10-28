//CSC134
//M5T1-basic functions
//Isaac Kasprak
//10-28-24

#include <iostream>
using namespace std;

void say_hello();
//void Sun_Tzu();
int give_the_answer();
int double_an_int(int number);

int main(){
    cout << "Hello from main" << endl;
    say_hello();
    //Sun_Tzu();
    cout << "The magic number is: ";
    int number=give_the_answer();
    cout << number << endl;
    int twotimes=double_an_int(number);
    cout << "Double that is " << twotimes << endl;
    return 0;
}

void say_hello(){
    cout << "Hello from say_hello()" << endl;
}

//void Sun_Tzu() {
    //cout << "That" << endl;
    //cout << "-Sun Tzu" << endl;
//}
int give_the_answer(){
    int answer=42;
    return answer;
}
int double_an_int(int number){
    int twotimes=number*2;
    return twotimes;
}