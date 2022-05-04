#include<iostream>
using namespace std;
void printFirst();
void printSecond();

int main() {
    printFirst();
    printFirst();
    printSecond();
    printSecond();
    return 0;
}

void printFirst() {
    cout << "Three blind mice" << endl;
}

void printSecond() {
    cout << "See how they run"  << endl;
}