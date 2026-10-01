#include <bits/stdc++.h>
using namespace std;

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int main() {
    int a, b;
    double x, y;

    cin >> a >> b >> x >> y;

    cout << add(a, b) << endl;
    cout << add(x, y) << endl;

    return 0;
}