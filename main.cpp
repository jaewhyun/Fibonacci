#include <iostream>

//
//  main.cpp
//  midterm
//
//  Created by Jae Won Hyun on 10/21/16.
//  Copyright © 2016 Jae Won Hyun. All rights reserved.
//
// edit histroy
// included reference variable input into the fibonacci function
// add line to increment the count every time fibonnaci is called
// declared the count variable to 0


#include <iostream>
using namespace std;

int fibonacci (int, int& );
// number of times the fibonacci will be called

int main()
{
    // declare input number and count
    int ino = 0;
    
    // ask user for an integer number
    cout << "Enter an integer number followed by <Enter>: ";
    // take in integer from user
    cin >> ino;
    
    // if it is not the end of the file and the input is good
    // if input is less than 20 and bigger than 2
    if(!cin.eof() && cin.good() && ino <= 20 && ino > 2)
    {
        // print fibonacci numbers
        cout << "Fibonacci numbers are 0 ";
        
        // declare variable ct to 0
        int ct = 0;
        
        // if the input is bigger than 0
        if(ino > 0)
        {
            // for the numbers less than user input
            for (int i = 0; i < ino; i ++)
            {
                cout << fibonacci(i, ct) << " ";
            }
            
            cout << "\nThe fibonacci function has been called " << ct << " times\n";
        }
        
        
        
    }
    // if the input is not good
    else
        if(!cin.eof())
            cout << "Invalid input value";
    
    // cout endl;
    cout <<endl;
    // let user know that the program is terminating
    cout << "Program terminating" << endl;
    system("PAUSE");
    return 0;
}


// include reference ct
int fibonacci (int x, int& ct)
{
    // increment count value
    ct++;
    
    if (x > 1)
        return (fibonacci (x -1, ct) + fibonacci(x-2, ct));
    return 1;
}
