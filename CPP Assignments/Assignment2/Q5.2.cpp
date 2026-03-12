/* 

Q1. When does the compiler generate a default constructor?
Answer=
The compiler automatically generates a default constructor when:

A class does not define any constructor.

The object of that class is created.

Example:

class Test {
public:
    int x;
};

When we create an object:

Test t1;

The compiler automatically creates a default constructor like this internally:

Test() { }

This constructor initializes the object with default values.

Q2. When does the compiler NOT generate a default constructor?
Answer=

The compiler does not generate a default constructor when:

The programmer already defines any constructor (like a parameterized constructor).

Example:

class Test {
public:
    Test(int x) { }
};

Now if we try:

Test t1;

It will give a compile-time error because no default constructor exists.

To fix it, we must define one explicitly:

Test() { }

Q3. Can constructors be overloaded?
Answer= 
Yes, constructors can be overloaded.

Constructor overloading means multiple constructors with different parameter lists in the same class.

Example:

class Student {
public:
    Student() { }                // Default constructor
    Student(int r) { }           // One parameter
    Student(int r, string n) { } // Two parameters
};

Here the class has three constructors, each with different parameters.

*/