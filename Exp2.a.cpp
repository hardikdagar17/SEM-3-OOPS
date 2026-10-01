#include <iostream>
using namespace std;
inline int square(int x) {
    return x * x;
}
int add(int a, int b = 10) {
    return a + b;
}
int add(int a, int b, int c) {
    return a + b + c;
}
int main() {
    int a = 5, b = 10, c = 15;
    cout << "Square: " << square(a) << endl;
    cout << "Addition with default argument: " << add(a) << endl;
    cout << "Addition using function overloading: " << add(a, b, c) << endl;
    return 0;
}
