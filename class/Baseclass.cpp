#include <bits/stdc++.h>
using namespace std;

class Person {
public:
    string name;
    int age;

    void getInfo() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void setInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
public:
    int roll;

    void getInfo() {
        Person::getInfo();

        cout << "Enter roll number: ";
        cin >> roll;
    }

    void setInfo() {
        Person::setInfo();

        cout << "Roll Number: " << roll << endl;
    }
};

int main() {
    Student s;

    s.getInfo();
    cout << endl;
    cout << "OUTPUT: " << endl;
    s.setInfo();

    return 0;
}