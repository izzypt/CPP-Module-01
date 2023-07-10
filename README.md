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

# Exercise 04 Notes:

A brief introduction to the basics of `std::fstream` in C++, including how to include the necessary headers, open a file, read from a file, and write to a file.

1. Including the necessary headers:
To use `std::fstream`, you need to include the `<fstream>` header file:

```cpp
#include <fstream>
```

2. Opening a file:
To open a file for reading, writing, or both, you can create an instance of `std::ifstream`, `std::ofstream`, or `std::fstream`, respectively. Then, you can use the `open()` member function to open the file:

```cpp
#include <fstream>

int main() {
    std::ifstream inputFile;
    inputFile.open("input.txt"); // Open the file for reading

    std::ofstream outputFile;
    outputFile.open("output.txt"); // Open the file for writing

    std::fstream file;
    file.open("data.txt", std::ios::in | std::ios::out); // Open the file for reading and writing

    // ...

    return 0;
}
```

3. Reading from a file:
To read from a file, you can use the `>>` operator or the `getline()` function to extract data from the file stream:

```cpp
#include <fstream>
#include <iostream>
#include <string>

int main() {
    std::ifstream file("data.txt"); // Open the file for reading

    if (file.is_open()) {
        int number;
        file >> number; // Read an integer from the file

        std::string line;
        std::getline(file, line); // Read a line from the file

        // Process the read data
        std::cout << "Number: " << number << std::endl;
        std::cout << "Line: " << line << std::endl;

        file.close();
    }
    else {
        // Failed to open the file
        // Handle the error accordingly
    }

    return 0;
}
```

4. Writing to a file:
To write to a file, you can use the `<<` operator or the `write()` function to insert data into the file stream:

```cpp
#include <fstream>

int main() {
    std::ofstream file("output.txt"); // Open the file for writing

    if (file.is_open()) {
        int number = 42;
        file << number << std::endl; // Write an integer to the file

        std::string line = "Hello, World!";
        file.write(line.c_str(), line.size()); // Write a string to the file

        file.close();
    }
    else {
        // Failed to open the file
        // Handle the error accordingly
    }

    return 0;
}
```

These examples demonstrate the basic usage of `std::fstream` for file input and output operations in C++. Remember to handle any potential errors when opening or operating on files and to close the file when you're done working with it using the `close()` member function.

# Exercise 05 Notes

In C++, there are several ways to use pointers to member functions. Here are the main ways to work with pointers to member functions:

1. <ins>Function Pointers to Static Member Functions</ins>:

   C++ allows you to declare function pointers that point to static member functions. Static member functions are associated with the class itself rather than specific instances of the class. The syntax for declaring a function pointer to a static member function is as follows:
   
   ```cpp
   returnType (*functionPointer)(arguments);
   ```
   
   Here's an example:
   
   ```cpp
   class MyClass {
   public:
       static void staticMemberFunction(int arg) {
           // Code here
       }
   };

   int main() {
       void (*functionPtr)(int) = &MyClass::staticMemberFunction;
       // Use functionPtr to call staticMemberFunction

       return 0;
   }
   ```

2. <ins>Pointers to Non-Static Member Functions</ins>:
   
   Pointers to non-static member functions in C++ are a bit more complex than function pointers to static member functions. Since non-static member functions are associated with specific instances of a class, you need an instance (object) of the class to call the member function via the pointer. The syntax for declaring a pointer to a non-static member function is as follows:

   ```cpp
   returnType (className::*functionPointer)(arguments);
   ```

   Here's an example:

   ```cpp
   class MyClass {
   public:
       void memberFunction(int arg) {
           // Code here
       }
   };

   int main() {
       void (MyClass::*functionPtr)(int) = &MyClass::memberFunction;
       MyClass obj;
       // Call memberFunction using the object and functionPtr
       (obj.*functionPtr)(42);

       return 0;
   }
   ```

3. <ins>std::function with Member Functions</ins>:

   The C++ Standard Library provides `std::function`, which is a general-purpose polymorphic function wrapper. It can be used to store and invoke member functions. `std::function` provides more flexibility and type safety compared to function pointers. Here's an example:

   ```cpp
   #include <iostream>
   #include <functional>

   class MyClass {
   public:
       void memberFunction(int arg) {
           // Code here
           std::cout << "Member function called with argument: " << arg << std::endl;
       }
   };

   int main() {
       MyClass obj;
       std::function<void(MyClass*, int)> functionWrapper = &MyClass::memberFunction;
       functionWrapper(&obj, 42);  // Call memberFunction via the functionWrapper

       return 0;
   }
   ```

   In this example, `std::function` is used to store a member function pointer along with the object pointer (`MyClass*`). The stored function can then be invoked later by calling `functionWrapper(&obj, 42)`.

These are the main ways to work with pointers to member functions in C++. Depending on your requirements and use case, you can choose the appropriate method that suits your needs.
