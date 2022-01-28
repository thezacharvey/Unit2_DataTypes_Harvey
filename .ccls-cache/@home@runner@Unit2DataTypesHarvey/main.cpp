#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	//input of total pennies
	int input_pennies;
	int dollars,dollar_remainder;
	int quarters,quarter_remainder;
	int dimes, dime_remainder;
	int pennies, penny_remainder;
	
	//ask for the input
	cout << "How many pennies do you have?" << endl;
	
	//store input into value
	cin >> input_pennies;
	dollars = input_pennies / 100;
	dollar_remainder = input_pennies % 100; 
	
	quarters = dollar_remainder / 25;
	quarter_remainder = dollar_remainder % 25;
	
	dimes = quarter_remainder / 10;
	dime_remainder = quarter_remainder % 10;
	
	//set pennies to whatever is left over
	pennies = dime_remainder; 
	
	cout << "Dollars: " << dollars << endl << "Quarters: " << quarters << endl << "Dimes: " << dimes << endl << "Pennies:" << pennies;
	auto val  = 0;
	cout << "\n Input value to Close ";
	cin >> val;
	
	return 0;
}