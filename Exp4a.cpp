#include <iostream>
using namespace std;
class Test {
private:
    int value;
    static int count;
public:
    Test(int x) {
        value = x;
        count++;
    }
    friend void display(Test t);
};
int Test::count = 0;
void display(Test t) {
    cout << "Value = " << t.value << endl;
    cout << "Count = " << Test::count << endl;
}
int main() {
    Test t1(10);
    Test t2(20);
    display(t1);
    return 0;
}