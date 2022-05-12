#include<iostream>
using namespace std;
const int inch_per_feet = 12; 
const double meters_per_inch = 0.0254;
const double bounds_per_kg = 2.2;
int main() {
    cout << "First, enter feet of your height:_\b";
    int ht_feet;
    cin >> ht_feet;
    cout << "Second, enter inches of your height:_\b";
    int ht_inch;
    cin >> ht_inch;
    cout << "Finally, enter your weight in bounds:_\b";
    int weight_bounds;
    cin >> weight_bounds;
    cout << endl;
    int total_inches = ht_feet * inch_per_feet + ht_inch;
    double meters = total_inches * meters_per_inch;
    double kg = weight_bounds / bounds_per_kg;
    double BMI = kg / meters*meters;
    cout << "Your BMI is: " << BMI << endl;
    return 0;
}