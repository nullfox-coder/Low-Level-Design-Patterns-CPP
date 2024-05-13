# Low Level Design Patterns CPP
 Creational Structural and Behaviour Design Patterns with C++.

# Prerequisite

## UML Arrow type
 ![alt text](https://i.stack.imgur.com/2ajCN.gif)

 ## C++ learnings
 
.cpp files: These are source files that contain the implementation of functions and classes. They are compiled by the C++ compiler and linked to create the final executable. .cpp files may include header files, but typically don't define any functions or classes that are meant to be used outside of that particular file.

.hpp files: These are header files that contain function and class declarations. They are typically included in .cpp files using the #include directive. Header files are not compiled by themselves, but rather provide declarations that the compiler needs to properly compile the implementation in .cpp files.

## Macros in c++

In C++, a macro is part of code that is expanded to its value. Macros are defined using the #define directive. They provide a way to create symbolic constants and code snippets that can be reused throughout a program. Macros are processed by the C++ preprocessor, which runs before the actual compilation. During preprocessing, macros are replaced with their corresponding values, making it an effective tool for code generation and simplification.

Syntax
The syntax for defining a macro in C++ is as follows:

```#define MACRO_NAME macro_definition```

MACRO_NAME: It is the name we give to the macro, that’s usually in uppercase to differentiate it from ordinary C++ identifiers.
macro_definition: It is the code that the preprocessor will substitute whenever the macro is used.

## Types of Macros in C++
Macros can be classified into four types in C++:

### Object-Like Macros
Define a constant for the value of PI 
```#define PI 3.14159 ```

### Function-Like Macros
Define a macro to print a value 
```#define PRINT(x) cout << "Value is: " << x ```

### Multiline Macros
Define a macro for printing a rectangle with a given width and height 
```
#define PRINT_RECTANGLE(width,  height)
    for (int i = 0; i < height; i++) {      
        for (int j = 0; j < width; j++) {      
            std::cout << "*"; 
        }                             
        std::cout << std::endl;   
    } 
```

### Chain Macros
the parent macro will be expanded first and then the child macro will be expanded.
defining first macro 
    ```#define CLERK 10``` 

defining second macro 
    ```#define WORKER CLERK```

## Directives in C++

### #ifdef

The #ifdef preprocessor directive in C++ is used to test whether a macro has been defined or not. The syntax of the #ifdef directive is as follows:

```#ifdef macro_name 
Code to be compiled if macro_name is defined 
#endif ```

### ifndef

```#ifndef macro_name_one
Code to compile 
#elif macro_name_two
Code to compile 
#endif
```

## Creational Design Patterns
For creating Classes and Objects
### Factory
### Abstract Factory
### Singleton

## Structual Design Patterns
Organises Classes to form a single structure and support functionality
### Bridge
### Adaptor
### Component

##  Behaviour Design Patterns
Interaction between the classes - how they communicate with each other.
### Interpretar
### Strategy
### Observer