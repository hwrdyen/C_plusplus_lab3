/* 2/1 Computer Science Assignment Q4
Howard Yen
Feb 1, 2018
Write a program that accepts a value from the user.  If the number is even output "The number ____ is even" if it is odd output "The number ___ is odd".*/

#include <iostream> //include header iostream
#include <cmath> //include math library
using namespace std; //using namespace std to avoid typing std::

int main() //beginning of the program
{
	int n;
	cout << "Please enter a number.\n"; //ask the user to enter a number
	cin >> n;
	if ( n % 2 == 0) //to recognize this number is even or odd
		cout << "The number " << n << " is even."; //this is the output if the number is even
	else
		cout << "The number " << n << " is odd."; //this is the output if the number is odd
	return(0); //end of the program
}
