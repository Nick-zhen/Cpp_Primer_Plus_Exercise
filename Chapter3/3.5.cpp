#include<iostream>
using namespace std;
int main() {
    cout << "Enter the world's population: ";
    long long popu_world;
    cin >> popu_world;

    cout << "Enter the population of the US: ";
    long long popu_US;
    cin >> popu_US;

    double percent = (double) popu_US / popu_world * 100;
    cout << "The population of the US is " << percent << "% of the world population\n";
    return 0;
}