#include <iostream>
using namespace std;

class Student {
    string name;
    int roll;
    float marks;

public:
    void input() {
        cout << "Enter name, roll, marks: ";
        cin >> name >> roll >> marks;
    }

    void result() {
        if (marks >= 50)
            cout << "Status: Passed";
        else
            cout << "Status: Failed";
    }
};

int main() {
    Student s;
    s.input();
    s.result();
    return 0;
}