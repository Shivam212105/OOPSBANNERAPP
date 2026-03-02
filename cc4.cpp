#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int roll;
};

class Marks : virtual public Student {
public:
    int m1,m2,m3;
    int total(){ return m1+m2+m3; }
};

class Sports : virtual public Student {
public:
    int sm;
};

class Result : public Marks, public Sports {
public:
    void show() {
        int t = total()+sm;
        cout<<name<<" "<<roll<<endl;
        cout<<"Academic="<<total()<<endl;
        cout<<"Sports="<<sm<<endl;
        cout<<"Total="<<t<<endl;
        cout<<"Average="<<t/4.0;
    }
};

int main() {
    Result r;
    r.name="Bhuwan goyal"; r.roll=183;
    r.m1=80; r.m2=75; r.m3=90;
    r.sm=85;
    r.show();
    return 0;
}
