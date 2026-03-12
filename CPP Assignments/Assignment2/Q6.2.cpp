#include <iostream>
using namespace std;

class Employee {
private:
    const int employeeId;
    string name;
    float salary;

public:
    // Constructor using initializer list
    Employee(int id, string n, float s) : employeeId(id), name(n), salary(s) {}

    // Function to display employee details
    void displayDetails() {
        cout << "Employee ID: " << employeeId << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {

    Employee e1(101, "Samarth", 45000);

    // Calling display function
    e1.displayDetails();

    return 0;
}