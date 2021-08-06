/* 2/1 Computer Science Assignment Q3
Howard Yen
Feb 1, 2018
Write a program that declares a number between 1 and 10, and accepts 5 numbers from the user.  If the number is selected output "You win".  For each wrong number output "you loose"*/


#include <iostream> //include header iostream
#include <cstdlib> //using rand() to get a random number
using namespace std; //using namespace std to avoid typing std::

int main() //beginning of the program
{
	int x = rand() % 10 + 1; //using rand() to get a random number between 1 and 10
	double a;
	double b;
	double c;
	double d;
	double e;
	cout << "Please enter five different numbers.\n"; //ask the user to tyoe in five different numbers
	cin >> a >> b >> c >> d >> e;
	if ( a == x || b == x || c == x || d == x || e == x ) //to recognize if one of the five numbers is same as the random number
		cout << "You win."; //this is the output if one of the five numbers is same as the random number
	else
		cout << "You loose."; //this is the output if all of the five nymbers aren't same as the random number
	return(0); //end of the program
}
