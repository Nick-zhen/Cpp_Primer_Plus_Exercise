#include<iostream>
using namespace std;
const int inch_per_feet = 12; // 1英尺 == 12 英寸， 1 feet == 12 inches
int main() {
    cout <<  "Enter ur height in inches: ___\b\b\b"; // '\b' 表示退格字符
    int ht_inch;
    cin >> ht_inch;
    int ht_feet = ht_inch / inch_per_feet;
    int md_inch = ht_inch % inch_per_feet;
    cout << "ur height is " << ht_feet << " feets " << md_inch << " inches\n";
    return 0;
}