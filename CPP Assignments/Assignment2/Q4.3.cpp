/*
Q!. Why constructors are not called when using malloc
Answer=

malloc() is a C function that only allocates raw memory.
It does not know anything about C++ classes or objects, so it does not call constructors.

Example:

MyClass *obj = (MyClass*) malloc(sizeof(MyClass));

Here:

Memory is allocated

But the constructor of MyClass is NOT executed

So the object may remain uninitialized, which can cause errors.

Q2.  Why new is preferred in C++
Answer=

new is preferred in C++ because it is object-oriented and safer.

Reasons:

It automatically calls constructors

It returns the correct data type (no casting required)

It works properly with classes and objects

It can initialize objects

Example:

MyClass *obj = new MyClass();

Here:

Memory is allocated

Constructor is automatically called

Q4. Why malloc Cannot Initialize Complex Types
Answer = 

Complex types include:

Classes

Objects with constructors

Objects with private members

These types require constructors to initialize data members.

Since malloc() only allocates memory and does not call constructors, it cannot properly initialize complex types.

Example:

class Test {
public:
    Test() {
        cout << "Constructor called";
    }
};

Using malloc:

Test *t = (Test*) malloc(sizeof(Test));

Result:

Memory allocated

Constructor NOT called

Using new:

Test *t = new Test();

Result:

Memory allocated

Constructor called correctly



*/