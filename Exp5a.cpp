#include <iostream>
using namespace std;
class Student {
private:
    int rollNo;
    string name;
public:
    void input() {
        cin >> rollNo >> name;
    }
    void display() {
        cout << rollNo << " " << name << endl;
    }
};
int main() {
    Student s[2];
    Student *p = s;
    for (int i = 0; i < 2; i++)
        p[i].input();
    for (int i = 0; i < 2; i++)
        (p + i)->display();
    return 0;
}