#include <iostream>
using namespace std;

/*
Write a program that inputs a character from the keyboard and then 
outputs a large block letter “C” composed of that character. For example,  
if the user inputs the character “X,”
*/

int main() {
    char letter;
    cout << "Enter a letter:\n";
    cin >> letter;
    cout << "\n";
    cout << "     " << letter << " " << letter << " " << letter << "  \n";
    cout << "    " << letter << "    " << letter << "  \n";
    cout << "   " << letter << "        \n";
    cout << "   " << letter << "        \n";
    cout << "   " << letter << "        \n";
    cout << "   " << letter << "        \n";
    cout << "   " << letter << "        \n";
    cout << "    " << letter << "    " << letter << "  \n";
    cout << "     " << letter << " " << letter << " " << letter << "  \n";
    return 0;
}