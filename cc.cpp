#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int rollNumber;

public:
    void setStudentDetails(string n, int r) {
        name = n;
        rollNumber = r;
    }

    void displayStudentDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};

class SportsPlayer {
protected:
    string sportName;
    int ranking;

public:
    void setSportsDetails(string s, int rank) {
        sportName = s;
        ranking = rank;
    }

    void displaySportsDetails() {
        cout << "Sport Name: " << sportName << endl;
        cout << "Ranking: " << ranking << endl;
    }
};

class SportStudent : public Student, public SportsPlayer {
public:
    void displayDetails() {
        displayStudentDetails();
        displaySportsDetails();
    }
};

int main() {
    SportStudent ss;

    ss.setStudentDetails("Bhuwan Goyal", 183);
    ss.setSportsDetails("Cricket", 1);

    cout << "---- Sport Student Details ----" << endl;
    ss.displayDetails();

    return 0;
      
}