#include <iostream>
using namespace std;

int main() {

    int x = 10, y = 20, z = 30;

    // Create pointers
    int *px = &x;
    int *py = &y;
    int *pz = &z;

    cout << "Before Swap:" << endl;
    cout << "x = " << *px << " y = " << *py << " z = " << *pz << endl;

    cout << "Addresses:" << endl;
    cout << "px = " << px << endl;
    cout << "py = " << py << endl;
    cout << "pz = " << pz << endl;

    // Swap values of x and z using pointers
    int temp = *px;
    *px = *pz;
    *pz = temp;

    cout << "\nAfter Swap:" << endl;
    cout << "x = " << *px << " y = " << *py << " z = " << *pz << endl;

    cout << "Addresses (unchanged):" << endl;
    cout << "px = " << px << endl;
    cout << "py = " << py << endl;
    cout << "pz = " << pz << endl;

    return 0;
}