/* 1/31 Computer Science Assignment Q1
Howard Yen
Jan 31, 2018
Write a program that averages the absolute value of five values entered by the user. Display the result.*/

#include <iostream> //include header iostream
#include <cmath> //include math library
using namespace std; //using namespace std to avoid typing std::

int main() //beginning of the program
{
	double a;
	double b;
	double c;
	double d;
	double e;
	cout << "Pleas enter five numbers.\n"; //ask the user to type in five numbers
	cin >> a >> b >> c >> d >> e;
	cout << "The average of the absolute value of the five numbers is " << abs(a+b+c+d+e)/5 <<"\n"; //ask for the average of the absolute value of the five numbers  
	return(0); //end of the program
}

//|x| ==> abs(x)