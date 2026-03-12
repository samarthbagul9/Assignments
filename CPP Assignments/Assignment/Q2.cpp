#include <iostream>
using namespace std;

int main() {

    cout << "Size of short int: " << sizeof(short int) << " bytes" << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of long int: " << sizeof(long int) << " bytes" << endl;
    cout << "Size of long long int: " << sizeof(long long int) << " bytes" << endl;
    cout << "Size of unsigned int: " << sizeof(unsigned int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "Size of long double: " << sizeof(long double) << " bytes" << endl;
    cout << "Size of char: " << sizeof(char) << " byte" << endl;

    return 0;
}

/*
Answer:

1. On most machines:
   - int and unsigned int have the same size (usually 4 bytes).

2. unsigned int does NOT have a different size than int.
   - Both typically occupy 4 bytes.
   - The difference is only in the range of values (unsigned cannot store negative numbers).
*/