#include <iostream>
#include <fstream>
using namespace std;

class Student {
private:
    int roll;
    string name;
    float marks;

public:
    // Parameterized Constructor
    Student(int r, string n, float m) {
        roll = r;
        name = n;
        marks = m;
    }

    // Function to display student
    void display() {
        cout << "Roll: " << roll << " Name: " << name << " Marks: " << marks << endl;
    }

    // Function to write to file
    void writeToFile(ofstream &file) {
        file << roll << " " << name << " " << marks << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destroying student ..." << endl;
    }
};

int main() {

    // Create array of objects
    Student s[3] = {
        Student(1, "Samarth", 85),
        Student(2, "Rahul", 78),
        Student(3, "Amit", 90)
    };

    // Write to file
    ofstream fout("students.txt");

    for(int i = 0; i < 3; i++) {
        s[i].writeToFile(fout);
    }

    fout.close();

    // Read file and print contents
    ifstream fin("students.txt");

    int r;
    string n;
    float m;

    cout << "\nContents of File:\n";

    while(fin >> r >> n >> m) {
        cout << "Roll: " << r << " Name: " << n << " Marks: " << m << endl;
    }

    fin.close();

    return 0;
}