#include <iostream>
using namespace std;

int main() {
    float m1, m2, m3, m4, m5;
    float total, percentage;
    string grade;

    // Input marks
    cout << "Enter marks of 5 subjects: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    // Calculate total
    total = m1 + m2 + m3 + m4 + m5;

    // Calculate percentage
    percentage = total / 5;

    // Determine grade using ternary operator
    grade = (percentage >= 75) ? "A" :
            (percentage >= 60) ? "B" :
            (percentage >= 45) ? "C" : "Fail";

    // Output
    cout << "\nMarks of Subjects:\n";
    cout << "Subject 1: " << m1 << endl;
    cout << "Subject 2: " << m2 << endl;
    cout << "Subject 3: " << m3 << endl;
    cout << "Subject 4: " << m4 << endl;
    cout << "Subject 5: " << m5 << endl;

    cout << "\nTotal Marks = " << total << endl;
    cout << "Percentage = " << percentage << "%" << endl;
    cout << "Grade = " << grade << endl;

    return 0;
}