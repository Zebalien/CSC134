//CSC 134
//M1Homework
//KasprakI
//8/28/24


#include <iostream>
using namespace std;

int main()  { 
  //set up our variable
  string name_of_character;
  string creator;
  int year_of_release;
  double movie_gross;
  double price_of_ticket;


  cout << "The Super Mario Bros. Movie was based on what character?" << endl;
  cin >> name_of_character;
  cout << "The company that created Mario was?" << endl;
  cin >> creator;
  cout << "The movie was released in?" << endl;
  cin >> year_of_release;
  cout << "The movie made how many billions?" << endl;
  cin >> movie_gross;
  cout << endl;
    cout << "------------------" << endl;
    cout << "The Mario movie was based on the character ";
    cout << name_of_character << " of the game Super Mario." << endl;
    cout << "The company which made the movie was ";
    cout << creator << " who made the original game." << endl;
    cout << "The movie made ";
    cout << movie_gross << " billion dollars which could be considered a success because it came out in ";
    cout << year_of_release << "." << endl;
    cout << "Lumalee said in the movie 'In an insane world, it is the sane who are called crazy.'" << endl;

}