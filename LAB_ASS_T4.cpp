#include <iostream>
using namespace std;

class Circle {
    float radius;

public:
    Circle(float r) {
        radius = r;
    }

    float area() {
        return 3.14 * radius * radius;
    }
};

int main() {
    Circle c(5);
    cout << "Area of circle: " << c.area();
    return 0;
}