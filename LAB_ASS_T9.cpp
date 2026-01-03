#include <iostream>
using namespace std;

class Rectangle {
    float length, width;

public:
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    float area() {
        return length * width;
    }

    float perimeter() {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle r(5, 3);
    cout << "Area: " << r.area() << endl;
    cout << "Perimeter: " << r.perimeter();
    return 0;
}