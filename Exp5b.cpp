#include <bits/stdc++.h>
using namespace std;

class Demo {
public:
    void show() {
        cout << "Smart Pointer Demo" << endl;
    }
};

int main() {
    unique_ptr<Demo> p1 = make_unique<Demo>();

    p1->show();

    shared_ptr<Demo> p2 = make_shared<Demo>();
    shared_ptr<Demo> p3 = p2;

    cout << "Count = " << p2.use_count() << endl;

    return 0;
}