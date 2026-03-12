#include <iostream>
using namespace std;

// Custom Exception Class
class DivideByZero {};

// Function with exception specification
int divide(int a, int b) throw(DivideByZero) {

    if(b == 0)
        throw DivideByZero();

    return a / b;
}

int main() {

    int x, y;

    cout << "Enter two integers: ";
    cin >> x >> y;

    try {

        try {
            int result = divide(x, y);
            cout << "Result = " << result << endl;
        }

        catch(DivideByZero) {
            cout << "Inside inner catch" << endl;
            throw; // rethrow exception
        }

    }

    catch(DivideByZero) {
        cout << "Handled in outer catch" << endl;
    }

    return 0;
}