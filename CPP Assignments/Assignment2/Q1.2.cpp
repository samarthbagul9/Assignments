/* Q1. Why must initialization happen before assignment?

Initialization happens when an object is created, while assignment happens after the object is already created.

Initialization: Gives the variable its first value at the time of creation.

Assignment: Changes the value after the variable already exists.

--initialized during creation, such as:

const variables

reference variables

class objects with constructors

Example:

int a = 10;   // Initialization
a = 20;       // Assignment 



Q2. When is initialization preferred over assignment?

Answer = Initialization is preferred when:

Creating objects

It ensures the object starts with valid values.

Using constructors

Constructors initialize class members when the object is created.

For better performance

Initialization avoids creating an empty variable and then changing it later.

For const and reference variables

These cannot be assigned later, so they must be initialized.

Example:

Box b1(2,3,4);   // Initialization using constructor
b1.setDimensions(5,6,7);   // Assignment later

 Initialization → first value during creation
 Assignment → change value after creation










*/