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
