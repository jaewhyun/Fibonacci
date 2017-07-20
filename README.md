# Fibonacci
BU MET CS341 Midterm #1

Given the program below which recursively generates the Fibonnaci numbers for inputs between 3 and 20 inclusive, please modify the program to count how many times the fibonnaci function is called for any valid and acceptable integer which may be entered.

// recursiveFibonacci.cpp  John Maslanka   May 28, 2015
// This program demonstrates recursion, a procedure in which a function
//  calls itself from within its own code until the result from a specific 
//  base condition has changed.  This program has two calls to the function 
//  from within its own code.  The base condition is (x > 1) for which its 
//  truth value has changed when x = 0.
//  

#include <iostream>
using namespace std;

int fibonacci (int);

int main ( )
{int ino, ct = 0;
 cout << "Enter an integer number followed by <Enter>: ";
 cin >> ino;
 if (!cin.eof() && cin.good() && ino <=20 && ino > 2) {
 	cout << "Fibonacci numbers are 0 "; 
	if (ino > 0)
	       for (int i = 0; i < ino ; i++)
           		 cout << fibonacci (i) << " ";
            }
  else 
	if (!cin.eof()) cout << "Invalid input value";
  cout << endl;
  cout << "Program terminating" << endl;
  system("PAUSE");
  return 0;
}
int fibonacci (int x) {
  	if ( x > 1 )
   		return (fibonacci (x - 1) + fibonacci (x - 2));
  	return 1; 
}
