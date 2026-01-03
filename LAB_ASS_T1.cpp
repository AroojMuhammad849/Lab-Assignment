#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int *p1 = &a, *p2 = &b;

    // Swapping using pointers
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    cout << "After swap: a = " << a << ", b = " << b << endl;

    int n;
    cout << "Enter array size: ";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array elements:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    delete[] arr;
    return 0;
}