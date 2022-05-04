#include<iostream>
using namespace std;
void printRes(int, int);
int main() {
    int hours, minutes;
    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the number of minutes: ";
    cin >> minutes;
    printRes(hours, minutes);
    return 0;
}

void printRes(int hours, int minutes) {
    cout << "Time: " << hours << ":" << minutes << endl;
}   