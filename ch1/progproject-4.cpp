#include <iostream>
using namespace std;

/*
Write a program that allows the user to enter a time in seconds and then 
outputs how far an object would drop if it is in freefall for that length of 
time. Assume that the object starts at rest, there is no friction or resistance 
from air, and there is a constant acceleration of 32 feet per second due to 
gravity. Use the equation:
distance = (acceleration × time^2) / 2
You should first compute the product and then divide the result by 
2. (The reason for this will be discussed later in the book.)
*/

int main() {
    int time, distance;
    int acceleration = 32;
    cout << "Enter the time (in seconds):\n";
    cin >> time;
    distance = (acceleration * (time * time)) / 2;
    cout << "For " << time << " seconds, an object would drop by " << distance << " feet";
    return 0;
}