#include <iostream>
using namespace std;

// Swap by Value
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// Swap by Address (Pointer)
void swapByAddress(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Swap by Reference
void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {

    int x = 10, y = 20;

    cout << "Original Values: x = " << x << ", y = " << y << endl;

    // Swap by Value
    swapByValue(x, y);
    cout << "After swapByValue: x = " << x << ", y = " << y << endl;

    // Swap by Address
    swapByAddress(&x, &y);
    cout << "After swapByAddress: x = " << x << ", y = " << y << endl;

    // Swap by Reference
    swapByReference(x, y);
    cout << "After swapByReference: x = " << x << ", y = " << y << endl;

    return 0;
}