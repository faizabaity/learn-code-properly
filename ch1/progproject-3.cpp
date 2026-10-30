#include <iostream>
using namespace std;

/*
Write a program that allows the user to enter a number of quarters, dimes, 
and nickels and then outputs the monetary value of the coins in cents. For 
example, if the user enters 2 for the number of quarters, 3 for the number 
of dimes, and 1 for the number of nickels, then the program should 
output that the coins are worth 85 cents.
*/

int main() {
    int quarters, nickels, dimes;
    quarters = nickels = dimes = 0;
    cout << "Enter a number of quarters:\n";
    cin >> quarters;
    cout << "Enter a number of dimes:\n";
    cin >> dimes;
    cout << "Enter a number of nickles:\n";
    cin >> nickels;
    cout << "Your coins are worth " << (quarters * 25) + (dimes * 10) + (nickels * 5) << " cents";
}