# C++ OOP Fundamentals

## Overview
A collection of small C++ programs from coursework, each focused on demonstrating one core object-oriented or language concept: classes and encapsulation, inheritance, templates, recursion, and the standard `vector` container. Each topic is a separate, independently compilable mini-project rather than one large program.

## Features / Topics Covered
- **Classes** — a `Rectangle` class (width/height with input validation) and a `Car` class (maker/model/color) demonstrating encapsulation with getters/setters
- **Inheritance** — a `Person` base class with a `Student` subclass that adds academic fields and extends `display()`, plus a separate `Employee` class
- **Templates** — a generic function template that finds the minimum element of an array for any comparable type
- **Recursion** — a simple recursive function that repeats a string a given number of times
- **Vectors** — a working demo of `std::vector` (resizing, `push_back`, indexing), alongside the commented-out notes taken while learning the container's API

## Technologies Used
- **C++** (classes, constructors, inheritance, function templates, `std::vector`, recursion)
- Originally built as individual Visual Studio console projects; reorganized here as standalone, topic-grouped source files

## How to Run
Each topic is self-contained. Compile the files in its folder together, e.g.:
```bash
# Classes (rectangle example)
g++ classes/rectangle/rectangle.cpp classes/rectangle/main.cpp -o rectangle_demo

# Inheritance
g++ inheritance/main.cpp -o inheritance_demo

# Templates
g++ templates/find_min_template.cpp -o template_demo

# Recursion
g++ recursion/repeat_string.cpp -o recursion_demo

# Vectors
g++ vectors/vectors_demo.cpp -o vectors_demo
```

## Project Structure
```
cpp-oop-fundamentals/
├── classes/
│   ├── rectangle/     # Rectangle class with input validation + main.cpp demo
│   └── car/            # Car class (maker/model/color) + main.cpp demo
├── inheritance/
│   ├── person.h          # base class
│   ├── student.h          # inherits Person, adds level/GPA/major
│   ├── employee.h          # separate class demonstrating constructor/destructor output
│   └── main.cpp              # demo program
├── templates/
│   └── find_min_template.cpp   # generic getmin<T>(arr, size) function
├── recursion/
│   └── repeat_string.cpp         # recursive string repeater
└── vectors/
    └── vectors_demo.cpp            # std::vector usage + learning notes
```

## What I Learned
- Encapsulating data with private members and public getter/setter methods
- Using inheritance to extend a base class's fields and behavior, and calling a base class's method from an overriding one (`person::display()`)
- Writing a generic function with C++ templates
- Recursive problem solving with a clear base case
- Working with `std::vector` as a dynamically-sized alternative to raw arrays

## Notes
This is coursework/practice code rather than a finished application — a couple of the exercises have known rough edges kept intentionally as-found:
- `templates/find_min_template.cpp` has a logic bug in its nested loop (it can return before scanning the full array), so it does not always report the true minimum.
- `classes/rectangle/rectangle.h` and a couple of other files have a harmless stray semicolon after some `#include` lines (a common early C++ typo — it doesn't affect compilation, just untidy style).
