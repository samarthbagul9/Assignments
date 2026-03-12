#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    float marks;

public:
    // 1. Default constructor
    Student() {
        rollNo = 0;
        name = "Not Assigned";
        marks = 0;
    }

    // 2. Parameterized constructor
    Student(int r, string n, float m) {
        rollNo = r;
        name = n;
        marks = m;
    }

    // 3. Constructor using this-> pointer
    Student(int rollNo, string name) {
        this->rollNo = rollNo;
        this->name = name;
        this->marks = 0;
    }

    // Function to print student details
    void printDetails() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
        cout << "--------------------" << endl;
    }
};

int main() {

    // Object using default constructor
    Student s1;

    // Objects using parameterized constructors
    Student s2(101, "Samarth", 85.5);
    Student s3(102, "Rahul");

    cout << "Student 1 (Default Constructor)" << endl;
    s1.printDetails();

    cout << "Student 2 (Parameterized Constructor)" << endl;
    s2.printDetails();

    cout << "Student 3 (Constructor using this->)" << endl;
    s3.printDetails();

    return 0;
}