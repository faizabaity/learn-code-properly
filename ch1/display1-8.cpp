/* Using your text editor, enter (that is, type in) the C++ program shown in 
Display 1.8. Be certain to type the first line exactly as shown in Display 1.8. 
In particular, be sure that the first line begins at the left-hand end of the 
line with no space before or after the # symbol. Compile and run the 
program. If the compiler gives you an error message, correct the program 
and recompile the program. Do this until the compiler gives no error 
messages. Then run your program. */

#include <iostream>
/*
syntax error in directive:
display1-8.cpp:9:21: fatal error:  iostream: No such fileor directory
 #include < iostream>
                     ^
compilation terminated.

display1-8.cpp:9:10: error: #include expects "FILENAME" or <FILENAME>
 #include iostream>
          ^~~~~~~~
display1-8.cpp: In function 'int main()':
display1-8.cpp:20:5: error: 'cout' was not declared in this scope
     cout << "Press return after entering a number.\n";
     ^~~~
display1-8.cpp:22:5: error: 'cin' was not declared in this scope
     cin >> favNumber1;
     ^~~
*/
using namespace std;
int main() {
/*
Error message after omitting `int` in int main:
None, the program still run normally.

Error message after getting a typo in `main`:
c:/mingw/bin/../lib/gcc/mingw32/6.3.0/../../../libmingw32.a(main.o):(.text.startup+0xa0): undefined reference to `WinMain@16'
collect2.exe: error: ld returned 1 exit status

Error message after omitting one of the curve `(`:
display1-8.cpp:29:9: error: expected initializer before ')' token
 int main) {
         ^
Syntax error when omitting both `()`:
'main' cannot be used as a global variable name or given C language linkageC/C++(3148)
*/
    int favNumber1, favNumber2;
    cout << "Press return after entering a number.\n";
    cout << "Enter your first and second favorite number:\n";
    cin >> favNumber1;
    cin >> favNumber2;
    cout << "The result of ";
    cout << favNumber1;
    cout << " divided by ";
    cout << favNumber2;
    cout << " is ";
    cout << favNumber1 / favNumber2;
    cout << "\n";

    int numberOfPods, peasPerPod, totalPeas;
    cout << "Enter the number of pods:\n";
    cin >> numberOfPods;
    cout << "Enter the number of peas in a pod:\n";
    cin >> peasPerPod;
    totalPeas = numberOfPods * peasPerPod;
    cout << "If you have ";
    cout << numberOfPods;
    cout << " pea pods \n";
    cout << "and ";
    cout << peasPerPod;
    cout << " peas in each pod, then\n";
    cout << "you have ";
    cout << totalPeas;
    cout << " peas in all the pods.\n";
    return 0;
}

/*
Error after omitting both the `()`:
display1-8.cpp:29:5: error: cannot declare '::main' to bea global variable
 int main {
     ^~~~
display1-8.cpp:43:5: error: expected primary-expression before 'int'
     int favNumber1, favNumber2;
     ^~~
display1-8.cpp:43:5: error: expected '}' before 'int'
display1-8.cpp:44:5: error: 'cout' does not name a type
     cout << "Press return after entering a number.\n";
     ^~~~
display1-8.cpp:45:5: error: 'cout' does not name a type
     cout << "Enter your first and second favorite number:\n";
     ^~~~
display1-8.cpp:46:5: error: 'cin' does not name a type
     cin >> favNumber1;
     ^~~
display1-8.cpp:47:5: error: 'cin' does not name a type
     cin >> favNumber2;
     ^~~
display1-8.cpp:48:5: error: 'cout' does not name a type
     cout << "The result of ";
     ^~~~
display1-8.cpp:49:5: error: 'cout' does not name a type
     cout << favNumber1;
     ^~~~
display1-8.cpp:50:5: error: 'cout' does not name a type
     cout << " divided by ";
     ^~~~
display1-8.cpp:51:5: error: 'cout' does not name a type
     cout << favNumber2;
     ^~~~
display1-8.cpp:52:5: error: 'cout' does not name a type
     cout << " is ";
     ^~~~
display1-8.cpp:53:5: error: 'cout' does not name a type
     cout << favNumber1 / favNumber2;
     ^~~~
display1-8.cpp:54:5: error: 'cout' does not name a type
     cout << "\n";
     ^~~~
display1-8.cpp:57:5: error: 'cout' does not name a type
     cout << "Enter the number of pods:\n";
     ^~~~
display1-8.cpp:58:5: error: 'cin' does not name a type
     cin >> numberOfPods;
     ^~~
display1-8.cpp:59:5: error: 'cout' does not name a type
     cout << "Enter the number of peas in a pod:\n";
     ^~~~
display1-8.cpp:60:5: error: 'cin' does not name a type
     cin >> peasPerPod;
     ^~~
display1-8.cpp:61:5: error: 'totalPeas' does not name a type
     totalPeas = numberOfPods * peasPerPod;
     ^~~~~~~~~
display1-8.cpp:62:5: error: 'cout' does not name a type
     cout << "If you have ";
     ^~~~
display1-8.cpp:63:5: error: 'cout' does not name a type
     cout << numberOfPods;
     ^~~~
display1-8.cpp:64:5: error: 'cout' does not name a type
     cout << " pea pods \n";
     ^~~~
display1-8.cpp:65:5: error: 'cout' does not name a type
     cout << "and ";
     ^~~~
display1-8.cpp:66:5: error: 'cout' does not name a type
     cout << peasPerPod;
     ^~~~
display1-8.cpp:67:5: error: 'cout' does not name a type
     cout << " peas in each pod, then\n";
     ^~~~
display1-8.cpp:68:5: error: 'cout' does not name a type
     cout << "you have ";
     ^~~~
display1-8.cpp:69:5: error: 'cout' does not name a type
     cout << totalPeas;
     ^~~~
display1-8.cpp:70:5: error: 'cout' does not name a type
     cout << " peas in all the pods.\n";
     ^~~~
display1-8.cpp:71:5: error: expected unqualified-id before 'return'
     return 0;
     ^~~~~~
display1-8.cpp:72:1: error: expected declaration before '}' token
 }
 ^
*/