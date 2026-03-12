/* 
Q1. Why must const members be initialized in an initializer list?
Answer=

If we try to assign a value to a const variable inside the constructor body, the program will give a compile-time error.

Example:

class Test {
    const int x;
public:
    Test(int a) {
        x = a;   // Error
    }
};


Q2. Why is an initializer list faster than assignment? 
Answer=

Initializer list is faster because:

It directly initializes the variable once.

Assignment first creates the variable with a default value, then changes it later.

Example:

Using initializer list (efficient)

Employee(int id) : employeeId(id) {}

Using assignment (less efficient)

Employee(int id) {
    employeeId = id;
}

In the second case:

Variable is created with default value.

Then value is assigned again.

So two operations occur, making it slightly slower.

Q3. Why is an initializer list faster than assignment?
Answer= 

Initializer list is faster because:

It directly initializes the variable once.

Assignment first creates the variable with a default value, then changes it later.

Example:

Using initializer list (efficient)

Employee(int id) : employeeId(id) {}

Using assignment (less efficient)

Employee(int id) {
    employeeId = id;
}

In the second case:

Variable is created with default value.

Then value is assigned again.


*/