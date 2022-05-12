#include<iostream>
using namespace std;
const int seconds_per_minutes = 60;
const int minutes_per_hour = 60;
const int hours_per_day = 24;
int main() {
    long seconds;
    cout << "Enter the number of seconds: ";
    cin >> seconds;
    int days = seconds / seconds_per_minutes / minutes_per_hour / hours_per_day;
    int hours = seconds / seconds_per_minutes / minutes_per_hour % hours_per_day;
    int minutes = seconds / seconds_per_minutes % minutes_per_hour;
    int sec = seconds % seconds_per_minutes;
    cout << seconds << " seconds = " << days << " days, " << hours << " hours, "
    << minutes << " minutes, " << sec << " seconds." << endl;
    return 0; 
}