//M2T2
//Apple Store part 2
//Isaac Kasprak
//9-8-24


#include <iostream>
#include <iomanip>
using namespace std;

int main() { 
  //set up our variable
  string name;
  int    num_apples;
  double price_per_apple;
  double total_cost;
  

  //Get user imput
  cout << "What is your name? ";
  cin >> name;
  cout << "How many apples are in stock? ";
  cin >> num_apples;
  cout << "How much is one apple? ";
  cin >> price_per_apple;
  
  //say hello
    cout << "------------------" << endl;
    cout << "Welcome to the "; 
    cout << name << " orchard!" << endl;
   
  // Calculate total cost
  total_cost = num_apples * price_per_apple;
  
//set a;; decimals to 2 places
  cout << fixed << setprecision(2);


  //Give the answer
  cout << "You have " << num_apples << " apples" << endl;
  cout << "Each apple costs $" << price_per_apple << endl;
  cout << "the total is: $" << total_cost << endl;

}
