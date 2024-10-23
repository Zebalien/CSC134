//10-23-24
//CSC134
//M5T1
//Isaac Kasprak
#include <iostream> 
#include <string> 
using namespace std; 
// declare our functions 
string formatAnswer(int answer); 
void printAnswer(string msg); 
int main() { 
 int answer = 5; 
 string message; 
 message = formatAnswer(answer); 
 printAnswer(message); 
 return 0; 
} 
// define functions 
string formatAnswer (int answer) { 
 // Make a nice looking string containing the answer 
 string answerMessage; 
 answerMessage = "The answer is "; 
 answerMessage += to_string(answer); 
 return answerMessage; 
} 
void printAnswer(string msg) { 
 // display our message 
 cout << msg << endl; 
}
 int give_the_answer() {
 return 42;
 }
 int double_a_number(int num) {
 int new_num = num * 2;
 return new_num;
 }