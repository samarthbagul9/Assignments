#include <iostream>
using namespace std;

int main() {

    // Allocate memory for 5 integers
    int *arr = new int[5];

    // Take input from user
    cout << "Enter 5 integers:" << endl;
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    // Print the values
    cout << "You entered:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Deallocate memory
    delete[] arr;

    return 0;
}