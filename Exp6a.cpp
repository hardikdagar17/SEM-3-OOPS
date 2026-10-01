#include <bits/stdc++.h>
using namespace std;

class Complex {
    int r, i;

public:
    void set(int a, int b) {
        r = a;
        i = b;
    }

    Complex operator+(Complex c) {
        Complex t;
        t.r = r + c.r;
        t.i = i + c.i;
        return t;
    }

    void display() {
        cout << r << "+" << i << "i";
    }
};

int main() {
    Complex c1, c2, c3;

    c1.set(2, 3);
    c2.set(4, 5);

    c3 = c1 + c2;

    cout << "Result = ";
    c3.display();

    return 0;
}