#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

    // Allocate memory using malloc
    int *arr = (int*) malloc(5 * sizeof(int));

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

    // Free allocated memory
    free(arr);

    return 0;
}