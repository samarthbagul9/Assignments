#include <iostream>
using namespace std;

int main() {

    int num = 10;          // Integer variable

    int *ptr = &num;       // Pointer pointing to num
    int &ref = num;        // Reference to num

    cout << "Initial value of num: " << num << endl;

    // Modify using pointer
    *ptr = 20;
    cout << "After modifying using pointer: " << num << endl;

    // Modify using reference
    ref = 30;
    cout << "After modifying using reference: " << num << endl;

    return 0;
}