#include <bits/stdc++.h>
using namespace std;

class Number {
    int n;

public:
    Number(int x) {
        n = x;
    }

    operator int() {
        return n;
    }

    void display() {
        cout << "Number = " << n << endl;
    }
};

int main() {
    int x = 10;

    Number n = x;

    n.display();

    int y = n;

    cout << "Basic type = " << y;

    return 0;
}