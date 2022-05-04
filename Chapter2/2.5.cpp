#include<iostream>
using namespace std;
double celToF(double);

int main () {
    cout << "Please enter a Celsius value: ";
    int celsius;
    cin >> celsius;
    cout << celsius << " degrees Celsius is " << celToF(celsius) 
        << " dgrees Fahrenheit." << endl;
    return 0;
}

double celToF(double celsius) {
    return 1.8 * celsius + 32.0;
}