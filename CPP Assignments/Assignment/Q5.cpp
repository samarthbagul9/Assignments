#include <iostream>
using namespace std;

// Function using call by reference
void doubleIt(int &n) {
    n = n * 2;
    cout << "Inside doubleIt: " << n << endl;
}

int main() {
    int num = 7;

    doubleIt(num);

    cout << "In main after call: " << num << endl;

    return 0;
}