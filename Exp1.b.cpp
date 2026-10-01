#include <iostream>
using namespace std;

void callByValue(int x) {
    x = 20;
}

void callByReference(int &x) {
    x = 30;
}

void callByAddress(int *x) {
    *x = 40;
}

int main() {
    int a = 10;

    cout << "Initial value: " << a << endl;

    callByValue(a);
    cout << "After Call by Value: " << a << endl;

    callByReference(a);
    cout << "After Call by Reference: " << a << endl;

    callByAddress(&a);
    cout << "After Call by Address: " << a << endl;

    return 0;
}