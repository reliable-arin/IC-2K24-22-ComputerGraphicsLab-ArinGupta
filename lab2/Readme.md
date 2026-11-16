# Computer Graphics Lab – Assignment 2

## Objective

To write a C++ program using the `graphics.h` library to draw straight lines using four different line drawing algorithms in a single graphics window:

1. DDA (Digital Differential Analyzer)
2. Direct (Equation / Slope-Intercept Method)
3. Parametric
4. Bresenham's Line Algorithm

---

## Technologies Used

- C++
- `graphics.h`
- `conio.h`
- GCC / MinGW
- graphicsh.online/compiler

---

## Program File

**File:** `lab2.cpp`

The program contains a `LineDrawingAlgorithms` class that encapsulates the four line drawing algorithms, along with helper functions `max()` and `round()`, and a `main()` function that initializes the graphics window, draws a rectangle, and demonstrates each algorithm.

---

## Line Drawing Algorithms

### 1. DDA Algorithm

The Digital Differential Analyzer computes the slope and step size and plots points by incrementing x and y by small floating-point steps.

### 2. Direct (Equation) Method

The line equation `y = mx + c` is used, and the y value is computed for each x value.

### 3. Parametric Method

The parametric form `P = P0 + t * ΔP` is used, where `t` varies from 0 to 1.

### 4. Bresenham's Line Algorithm

An integer-based algorithm that uses a decision parameter to choose the next pixel.

---

## Functions Used

| Function | Description |
|----------|-------------|
| `initgraph()` | Initializes the graphics mode |
| `closegraph()` | Closes the graphics mode |
| `putpixel()` | Plots a pixel at the given coordinates |
| `rectangle()` | Draws a rectangle |
| `getch()` | Waits for a key press |

### Custom Helper Functions

| Function | Description |
|----------|-------------|
| `max(int, int)` | Returns the larger of the two values |
| `round(float)` | Rounds a floating-point value to the nearest integer |

---

## Header Files Used

### graphics.h

Used for graphics-related functions such as drawing lines, rectangles, and pixels.

### conio.h

Used for the `getch()` function to pause the graphics window until a key is pressed.

---

## Output

The program displays a rectangle and draws lines using the DDA, Direct, Parametric, and Bresenham algorithms.

---

## Requirements

- C++ compiler
- GCC / MinGW
- `graphics.h` library
- `conio.h` library
- any compatible c++ IDE

---

## Learning Outcomes

After completing this assignment, the following concepts are understood:

- Line drawing algorithms (DDA, Direct, Parametric, Bresenham)
- Plotting pixels using `putpixel()`
- Coordinate system
- Graphics initialization and termination

---

## Student Details

**Name:** Arin Gupta  
**Roll Number:** IC-2K24-22 
**Course:** MCA (5 Years)  
**Subject:** Computer Graphics  
**Assignment:** Lab Assignment 2

---

## Conclusion

The program successfully demonstrates the implementation of various line drawing algorithms using C++ and the `graphics.h` library.
