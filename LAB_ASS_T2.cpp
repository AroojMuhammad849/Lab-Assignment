#include <iostream>
using namespace std;

struct Employee {
    string name;
    int id;
    float salary;
};

int main() {
    Employee e;

    cout << "Enter name: ";
    cin >> e.name;
    cout << "Enter ID: ";
    cin >> e.id;
    cout << "Enter salary: ";
    cin >> e.salary;

    cout << "\nEmployee Details:\n";
    cout << "Name: " << e.name << endl;
    cout << "ID: " << e.id << endl;
    cout << "Salary: " << e.salary << endl;

    return 0;
}