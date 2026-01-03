#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("students.txt");

    file << "Ali 85 A\n";
    file << "Sara 78 B\n";
    file << "Ahmed 92 A\n";
    file.close();

    ifstream readFile("students.txt");
    string line;

    cout << "Student Records:\n";
    while (getline(readFile, line)) {
        cout << line << endl;
    }
    readFile.close();

    return 0;
}