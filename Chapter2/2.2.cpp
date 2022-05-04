#include<iostream>
using namespace std;
long longConvertMa(long); 

int main() {
    cout << "input a distance: " ;
    long distance;
    cin >> distance;
    cout << "output: " << longConvertMa(distance) << " ma" << endl;
    return 0;
}

long longConvertMa(long n) {
    return 220 * n;
}