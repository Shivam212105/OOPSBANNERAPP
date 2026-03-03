#include <iostream>
using namespace std;

class Person {
public:
    string name;
};

class Teacher : public Person {
public:
    string subject;
};

class Professor : public Teacher {
public:
    string dept;
    void display() {
        cout<<name<<endl<<subject<<endl<<dept;
    }
};

int main() {
    Professor p;
    p.name="Bhuwan Goyal";
    p.subject="OOps";
    p.dept="C Tech";
    p.display();
}