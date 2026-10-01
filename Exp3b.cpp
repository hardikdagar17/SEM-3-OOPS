#include <iostream>
using namespace std;
class Demo {
private:
    int value;
public:
    Demo() {
        cout << "Default Constructor" << endl;
    }
    Demo(int x) {
        value = x;
        cout << "Parameterized Constructor: " << value << endl;
    }
    ~Demo() {
        cout << "Destructor Called" << endl;
    }
};
int main() {
    Demo d1;
    Demo d2(100);
    return 0;
}