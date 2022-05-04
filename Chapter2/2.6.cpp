#include<iostream>
using namespace std;
double lToA(double);

int main () {
    cout << "Enter the number of light years: ";
    double lightYears;
    cin >> lightYears;
    cout << lightYears << " lightYears == " << lToA(lightYears) 
        << " astronomical units." << endl;
    return 0;
}

double lToA(double lightYears) {
    return 63240 * lightYears;
}