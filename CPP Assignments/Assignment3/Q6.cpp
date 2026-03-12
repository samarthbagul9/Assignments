#include <iostream>
using namespace std;

class Vector {
private:
    int *arr;
    int size;

public:
    // Constructor
    Vector(int s) {
        size = s;
        arr = new int[size];
    }

    // Function to initialize values
    void setValues() {
        cout << "Enter " << size << " elements:\n";
        for(int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    // Overload [] operator
    int& operator[](int index) {
        return arr[index];
    }

    // Overload () operator to compute sum
    int operator()() {
        int sum = 0;
        for(int i = 0; i < size; i++) {
            sum += arr[i];
        }
        return sum;
    }

    // Destructor
    ~Vector() {
        delete[] arr;
    }
};

int main() {

    Vector v(5);

    v.setValues();

    // Modify element using []
    v[2] = 50;

    cout << "\nElement at index 2 changed to 50\n";

    // Print sum using ()
    cout << "Sum of elements = " << v() << endl;

    return 0;
}