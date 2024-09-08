//M2T1
//Receipt Calculator
//Isaac Kasprak
//9-8-24


#include <iostream>
using namespace std;

int main() {
  //simple receipt calculator

  //variables
  double mealPrice=5.99;
  double taxRate=.08; //8%
  double taxAmount; //tax due
  double total; //meal+tax

  //calculate tax amount and total
  taxAmount=taxRate*mealPrice; //8% of price
  total=mealPrice+taxAmount;

  //print output
  cout << "Thank you for dining with us." << endl;
  cout << "Your meal total is $" << mealPrice << endl;
  cout << "The tax is $" << taxAmount << endl;
  cout << "Your total is $" << total << endl;
  cout << "Please come again." << endl;


}
