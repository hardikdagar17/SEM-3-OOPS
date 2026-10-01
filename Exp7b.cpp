#include <bits/stdc++.h>
using namespace std;

class Base {
public:
    void display() {
        cout << "Base Class";
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "Derived Class";
    }
};

int main() {
    Derived d;
    d.display();

    return 0;
}