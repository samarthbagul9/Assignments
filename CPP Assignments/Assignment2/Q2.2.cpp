/* 
Q2.2 Explain how reference variables act as aliases and how that affects swapByReference(). 
Answer=
A reference variable in C++ acts as an alias (another name) for an existing variable.
This means the reference variable does not create a new memory location. Instead, it refers to the same memory location as the original variable
int a = 10;
int &ref = a;

*/