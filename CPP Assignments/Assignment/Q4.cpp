#include <iostream>
using namespace std;

// Function to find min and max using reference parameters
void findMinMax(int a, int b, int c, int &minVal, int &maxVal) {

    // Find minimum
    minVal = a;
    if (b < minVal)
        minVal = b;
    if (c < minVal)
        minVal = c;

    // Find maximum
    maxVal = a;
    if (b > maxVal)
        maxVal = b;
    if (c > maxVal)
        maxVal = c;
}

int main() {

    int a = 10, b = 25, c = 5;
    int lo, hi;

    // Function call
    findMinMax(a, b, c, lo, hi);

    // Printing results
    cout << "Numbers: " << a << " " << b << " " << c << endl;
    cout << "Minimum value: " << lo << endl;
    cout << "Maximum value: " << hi << endl;

    return 0;
}