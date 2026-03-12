#include <iostream>
#include <iomanip>
using namespace std;

// Function to find absolute value
int absolute(int n) {
    return (n < 0) ? -n : n;
}

// Function to clamp value between lo and hi
int clamp(int val, int lo, int hi) {
    return (val < lo) ? lo : (val > hi) ? hi : val;
}

int main() {

    int val[] = {-15, 0, 25, -3};
    int lo[]  = {-10, -10, -10, 0};
    int hi[]  = {10, 10, 10, 5};

    cout << left << setw(8) << "val"
         << setw(8) << "lo"
         << setw(8) << "hi"
         << setw(15) << "absolute(val)"
         << "clamp(val,lo,hi)" << endl;

    for(int i = 0; i < 4; i++) {
        cout << left << setw(8) << val[i]
             << setw(8) << lo[i]
             << setw(8) << hi[i]
             << setw(15) << absolute(val[i])
             << clamp(val[i], lo[i], hi[i]) << endl;
    }

    return 0;
}