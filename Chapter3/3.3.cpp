#include<iostream>
using namespace std;
const double degrees_per_minutes = 1.0/60;
const double degrees_per_seconds = 1.0/3600;
int main() {
    cout << "Enter a latitude in degree minutes, and seconds: " << endl;
    cout << "First, enter the degrees: _\b";
    int degrees;
    cin >> degrees;

    cout << "Next, enter the minutes of arc: _\b";
    int minutes;
    cin >> minutes;

    cout << "Finally, enter the seconds of arc: _\b";
    int seconds;
    cin >> seconds;

    double total_degrees = degrees + minutes * degrees_per_minutes + seconds * degrees_per_seconds;
    cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds"
    << " = " << total_degrees << " degrees" << endl;
    return 0;
}