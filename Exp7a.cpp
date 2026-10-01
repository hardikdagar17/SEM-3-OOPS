#include <bits/stdc++.h>
using namespace std;

class Person {
protected:
    string name;

public:
    void getInfo() {
        cin >> name;
    }
};

class Student : public Person {
protected:
    int roll;

public:
    void getInfo() {
        Person::getInfo();
        cin >> roll;
    }
};

class Result : public Student {
    float marks;

public:
    void getInfo() {
        Student::getInfo();
        cin >> marks;
    }

    void display() {
        cout << name << " " << roll << " " << marks;
    }
};

int main() {
    Result r;
    r.getInfo();
    r.display();

    return 0;
}