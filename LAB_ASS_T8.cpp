#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("product.txt");
    file << "Laptop 5 80000\n";
    file.close();

    ifstream readFile("product.txt");
    string name;
    int quantity;
    float price;

    readFile >> name >> quantity >> price;

    cout << "Product Name: " << name << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Price: " << price << endl;

    readFile.close();
    return 0;
}