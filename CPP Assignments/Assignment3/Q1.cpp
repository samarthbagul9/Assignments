#include <iostream>
using namespace std;

class Employee {
private:
    int id;
    string name;
    mutable int accessCount;   // mutable variable

public:

    // Parameterized constructor
    Employee(int i, string n) {
        id = i;
        name = n;
        accessCount = 0;
    }

    // User-defined copy constructor
    Employee(const Employee &e) {
        id = e.id;
        name = e.name;
        accessCount = e.accessCount;

        cout << "User-defined Copy Constructor Called\n";
    }

    // const member function
    void display() const {
        accessCount++;  // allowed because mutable

        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Access Count: " << accessCount << endl;
        cout << "----------------------" << endl;
    }
};

int main() {

    // Create object
    Employee e1(101, "Samarth");

    cout << "Calling display() on e1\n";
    e1.display();
    e1.display();
    e1.display();

    // Copy object
    cout << "\nCreating e2 = e1\n";
    Employee e2 = e1;

    cout << "\nDisplay e2\n";
    e2.display();

    cout << "\nDisplay e1 again\n";
    e1.display();

    return 0;
}