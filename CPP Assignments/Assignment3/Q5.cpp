#include <iostream>
using namespace std;

class Number;

class Inspector {
public:
    void show(Number n);
};

class Number {
private:
    int value;

public:
    Number(int v = 0) {
        value = v;
    }

    // Assignment operator
    Number& operator=(const Number &n) {
        value = n.value;
        return *this;
    }

    // Pre-increment
    Number& operator++() {
        ++value;
        return *this;
    }

    // Post-increment
    Number operator++(int) {
        Number temp = *this;
        value++;
        return temp;
    }

    // Friend function for comparison
    friend bool operator>(Number a, Number b);

    // Friend class
    friend class Inspector;
};

// Friend comparison function
bool operator>(Number a, Number b) {
    return a.value > b.value;
}

// Inspector accessing private member
void Inspector::show(Number n) {
    cout << "Value = " << n.value << endl;
}

int main() {

    Number n1(10), n2(20);
    Inspector i;

    cout << "Initial Values\n";
    i.show(n1);
    i.show(n2);

    // Pre-increment
    ++n1;
    cout << "\nAfter Pre-increment (++n1)\n";
    i.show(n1);

    // Post-increment
    n1++;
    cout << "\nAfter Post-increment (n1++)\n";
    i.show(n1);

    // Assignment
    n2 = n1;
    cout << "\nAfter Assignment (n2 = n1)\n";
    i.show(n2);

    // Comparison
    if(n1 > n2)
        cout << "\nn1 is greater\n";
    else
        cout << "\nn2 is greater or equal\n";

    return 0;
}