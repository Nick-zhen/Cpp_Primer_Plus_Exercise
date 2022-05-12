#include<iostream>
using namespace std;
int main() {
    cout << "Enter the gasoline consumption in European style(Liters per 100 Km): ";
    double Euro_style;
    cin >> Euro_style;
    cout << "European style " << Euro_style << " L/100Km = " << 62.12 * 3.785 / Euro_style << " mpg\n";
    return 0;
}