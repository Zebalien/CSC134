//M2Lab1-Case Study
//CSC134
//Isaac Kasprak
// 9-9-24

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // set up variables
    string name;
    int length;
    int width;
    int height;
    int area;
    int volume;

    // price variables in dollars
    const double COST_PER_CUBIC_FT = .23;
    const double PRICE_PER_CU_FT = .5;
    double cost;
    double customer_price;
    double profit;

    // say hi
    /*
    cout << "Hi, what's your name?";
    cin >> name;
    cout << "Nice to meet you, " << name << endl;
    */

    // ask user questions
    cout << "Let's get the crate dimensions (in feet)." << endl;
    cout << "What's the length? ";
    cin >> length;
    cout << "What's the width? ";
    cin >> width;
    cout << "What's the height? ";
    cin >> height;
    cout << "Length: " << length << ", Width: " << width << ", Height: " << height << endl;

    // calculations
    volume = length * width * height;
    // cost clculations
    cost = volume * COST_PER_CUBIC_FT;
    customer_price = volume * PRICE_PER_CU_FT;
    profit = customer_price - cost;

    // output
    // next line requires iomanip
    cout << setprecision(2) << fixed;
    cout << "Crate is: " << width << "x" << length << "x" << height << endl;
    cout << "Total volume is: " << volume << " cubic feet." << endl;
    cout << "The cost to make the crate is: $" << cost << endl;
    cout << "The price of the crate is: $" << customer_price << endl;
    cout << "The profit made is: $" << profit << endl;
   

}
