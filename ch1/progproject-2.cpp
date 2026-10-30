#include <iostream>
using namespace std;

/*
Write a C++ program that reads in two integers and then outputs both 
their sum and their product. One way to proceed is to start with the 
Write a program that prints out “C S !” in large block letters inside a 
border of *s followed by two blank lines then the message Computer 
Science is Cool Stuff.
*/

int main() {
    cout << "*************************************************\n";
    cout << "           C C C            S S S S        !!    \n";
    cout << "         C       C        S         S      !!    \n";
    cout << "        C                S                 !!    \n";
    cout << "       C                  S                !!    \n";
    cout << "       C                   S S S S         !!    \n";
    cout << "       C                            S      !!    \n";
    cout << "        C                            S     !!    \n";
    cout << "         C       C        S         S            \n";
    cout << "           C C C            S S S S        00    \n";
    cout << "*************************************************\n";
    cout << "       Computer Science is Cool Stuff!!!\n";
    cout << "\n";
    
    int num1, num2;
    cout << "Enter the first and second number to compute:\n";
    cin >> num1 >> num2;
    cout << "The sum of " << num1 << " and " << num2 << " is " << num1 + num2 << "\n";
    cout << "The product of " << num1 << " and " << num2 << " is " << num1 * num2 << "\n";
    return 0;
}