# CPP-Module-01
This module is designed to help you understand the memory allocation, reference, pointers to members and the usage of the switch in CPP.

# Exercise 02 Notes :

```cpp
#include <iostream>
using namespace std;

int main() {
    string str = "HI THIS IS BRAIN";
    string* stringPTR = &str;
    string& stringREF = str;

    cout << "Memory address of the string variable: " << &str << endl;
    cout << "Memory address held by stringPTR: " << stringPTR << endl;
    cout << "Memory address held by stringREF: " << &stringREF << endl;

    cout << "Value of the string variable: " << str << endl;
    cout << "Value pointed to by stringPTR: " << *stringPTR << endl;
    cout << "Value pointed to by stringREF: " << stringREF << endl;

    return 0;
}
```

- We define a string variable `str` and initialize it with the value "HI THIS IS BRAIN".
- `stringPTR` is a pointer to the string, and we initialize it with the memory address of `str` using the `&` operator.
- `stringREF` is a reference to the string, and we initialize it to `str` directly.
- The memory addresses of `str`, `stringPTR`, and `stringREF` are printed using the address-of operator `&`.
- The values of `str`, `*stringPTR` (value pointed by `stringPTR`), and `stringREF` are printed.


# Exercise 03 Notes:

### Pointers and References

Pointers:
- Pointers are variables that store memory addresses.
- They are denoted by the asterisk (*) symbol when declaring the pointer type.
- Pointers can be assigned the address of another object or null (nullptr) if they don't currently point to any valid memory location.
- Pointers can be reassigned to point to different objects throughout their lifetime.
- Dereferencing a pointer (using the asterisk (*) operator) allows access to the value stored at the memory address it points to.
- Pointers can be explicitly modified to point to a different object or memory location.
- Pointers can be used for dynamic memory allocation and deallocation using `new` and `delete` operators.

References:
- References are aliases or alternative names for existing objects.
- They are declared by using an ampersand (&) symbol after the type name.
- References must be initialized when declared and cannot be null.
- Once a reference is bound to an object, it cannot be changed to refer to another object.
- References provide a convenient and cleaner syntax for accessing and manipulating objects without needing to use pointer dereferencing syntax.
- They are useful when you want to pass objects to functions by reference, avoiding object copying.
- References cannot be reassigned to refer to different objects.

When to use pointers:
- When you need the flexibility to dynamically allocate and deallocate memory (e.g., using `new` and `delete`).
- When you want to represent the absence of an object by assigning null (nullptr) to the pointer.
- When you need to change the pointed object during runtime.
- When implementing data structures or algorithms that require fine-grained control over memory and object lifetimes.

When to use references:
- When you want a convenient way to access and modify an existing object without explicitly using pointer dereferencing syntax.
- When passing objects to functions, particularly large objects, to avoid the overhead of object copying.
- When implementing operator overloading to provide a more intuitive syntax.

It's worth noting that references can also be used in certain cases where pointers are used, but references offer a safer and more convenient alternative when there is no need for the flexibility provided by pointers.
