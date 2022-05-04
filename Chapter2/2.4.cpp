#include<iostream>
using namespace std;
int ageToMonth(int);

int main() {
    cout << "input ur age: ";
    int age;
    cin >> age;
    cout << ageToMonth(age) << " months" << endl;
    return 0;
}

int ageToMonth(int age) {
    return 12 * age;
}