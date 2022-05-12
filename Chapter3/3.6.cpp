#include<iostream>
using namespace std;
int main() {
    double miles, gasoline;
    cout << "Enter the miles of distance you have driven: ";
    cin >> miles;

    cout << "Enter the gallons of gasoline you have used: ";
    cin >> gasoline;

    cout << "you can run " << miles / gasoline << " miles per gasoline\n";
    return 0;
}