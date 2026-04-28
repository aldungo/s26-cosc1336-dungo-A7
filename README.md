# Assignment 7: Car Class

**Course:** COSC 1336 - C++ Programming I  
**Assignment Type:** Core Programming Skills - Classes & Objects

---

## 🎯 Learning Objectives

By completing this assignment, you will demonstrate your ability to:

- Define a **class** with private member variables and public member functions
- Write a **constructor** that initializes an object's state at creation
- Implement **accessor functions** (getters) to safely expose private data
- Use **mutator-style methods** to modify an object's state
- Instantiate a class and interact with it through its public interface in `main`
- Write clean, well-documented code that models a real-world object

---

## 📝 The Problem

You need to model a car in software. A car has some fixed properties (its year and make) and one property that changes over time — its speed.

### Your Task

Write a `Car` class and a demonstration program that:

1. **Defines** the `Car` class with the required member variables and functions
2. **Creates** a `Car` object using the constructor
3. **Accelerates** the car five times, displaying the speed after each call
4. **Brakes** the car five times, displaying the speed after each call

---

## 🔢 Class Specification

### Member Variables

| Variable | Type | Description |
|----------|------|-------------|
| `yearModel` | `int` | The car's year model |
| `make` | `string` | The make (manufacturer) of the car |
| `speed` | `int` | The car's current speed |

### Constructor

- Accepts the car's **year model** and **make** as arguments
- Assigns those arguments to `yearModel` and `make`
- Initializes `speed` to **zero**

### Member Functions

| Function | Description |
|----------|-------------|
| `getYearModel()` | Returns the value of `yearModel` |
| `getMake()` | Returns the value of `make` |
| `getSpeed()` | Returns the value of `speed` |
| `accelerate()` | Adds **5** to `speed` each time it is called |
| `brake()` | Subtracts **5** from `speed` each time it is called |

---

## 💡 Example Program Run

```
Accelerating...
Speed: 5
Speed: 10
Speed: 15
Speed: 20
Speed: 25

Braking...
Speed: 20
Speed: 15
Speed: 10
Speed: 5
Speed: 0
```

*(The exact formatting is up to you — what matters is that the speeds are correct and displayed after each call.)*

---

## 🛠️ Implementation Guide

### Step 1: Understand the Problem

Before writing any code, make sure you understand:

- **What is a class?** A class is a blueprint for creating objects. It bundles related data (member variables) and behavior (member functions) together.
- **Why private member variables?** Keeping `yearModel`, `make`, and `speed` private means outside code cannot change them directly — it must go through the class's public functions. This is called **encapsulation**.
- **What does the constructor do?** It runs automatically when an object is created and sets the initial state. Here, speed always starts at zero, while year and make come from the caller.

**Think about this:** Why should `speed` never go below zero? Could `brake()` cause that, and does the assignment require you to guard against it?

---

### Step 2: Set Up Your Development Environment

1. Open your GitHub Codespace for this assignment
2. Locate the starter file: `a7main.cpp`
3. Open the terminal in VS Code

---

### Step 3: Plan Your Solution

Create a design document (pseudocode or flowchart) that outlines your approach. Your design should address:

**Part A: The Class Definition**
- What access specifier (`private`/`public`) belongs to each member?
- Where does the constructor's initialization list or body go?
- What type does each accessor return?

**Part B: `accelerate()` and `brake()`**
- These functions modify `speed` — should they return a value or be `void`?
- What is the simplest body for each?

**Part C: The Demonstration in `main`**
- How will you create the `Car` object? What year and make will you use?
- What loop (or repeated calls) will you use for the five accelerations and five brakes?
- How will you retrieve and display the speed after each call?

---

### Step 4: Write Your Code

Open `a7main.cpp` and implement your solution following this structure:

#### Include Necessary Libraries

Think about what you need:
- Input and output operations
- String support for the `make` member variable

#### Define the `Car` Class

```
class Car
{
private:
    int yearModel;
    string make;
    int speed;

public:
    Car(int year, string carMake);   // constructor
    int getYearModel();
    string getMake();
    int getSpeed();
    void accelerate();
    void brake();
};
```

Implement each function either **inline** inside the class body or **outside** using the scope resolution operator (`::`). Either approach is acceptable.

#### In `main`: Create and Drive the Car

- Instantiate a `Car` object with your chosen year and make
- Call `accelerate()` five times; after each call, print the current speed
- Call `brake()` five times; after each call, print the current speed

---

### Step 5: Compile and Test

#### Compile Your Program

In the terminal, compile with:
```bash
g++ a7main.cpp -o a7main
```

**If compilation fails:**
- Read error messages carefully — they tell you what's wrong
- Check for common issues:
  - Missing semicolons (especially the one after the closing `}` of the class)
  - Forgotten `#include <string>` or `using namespace std;`
  - Scope resolution errors when defining functions outside the class
  - Mismatched braces `{}`

#### Run Your Program

```bash
./a7main
```

#### Test Thoroughly

Use these checks to verify your program works correctly:

| Check | What to Verify |
|-------|----------------|
| Constructor sets speed to 0 | Print `getSpeed()` before any calls — should be `0` |
| `accelerate()` adds 5 each time | Speeds after 5 calls should be 5, 10, 15, 20, 25 |
| `brake()` subtracts 5 each time | Speeds after 5 calls should be 20, 15, 10, 5, 0 |
| Accessors return correct values | `getYearModel()` and `getMake()` match what you passed to the constructor |

---

### Step 6: Document Your Work

#### Take Screenshots

Capture clear screenshots showing:
1. ✅ Your program compiling without errors
2. ✅ A complete program run with all ten speed outputs visible
3. ✅ Your complete code in the editor

Save screenshots as PNG or JPG files.

#### Create a Design Document

Submit either:
- **Pseudocode:** Write your algorithm in plain English with proper structure
- **Flowchart:** Draw a visual representation of your program's logic

**What to include:**
- The class layout (member variables and their access levels)
- What the constructor does
- How `accelerate()` and `brake()` modify `speed`
- The flow of `main` — creating the object, the acceleration loop, and the braking loop

**Tools for flowcharts:**
- [Draw.io](https://draw.io) (free, online)
- Microsoft Word/PowerPoint (shapes feature)
- Google Drawings
- Hand-drawn and scanned/photographed

---

## 📤 Submission Checklist

Before submitting, verify you have:

- [ ] **Source Code:** `a7main.cpp` — complete, commented, properly formatted
- [ ] **`Car` class:** All three member variables, constructor, three accessors, `accelerate()`, and `brake()` implemented
- [ ] **Correct behavior:** Speed increases by 5 per `accelerate()` call and decreases by 5 per `brake()` call
- [ ] **Screenshots:** Full program run showing all speed outputs
- [ ] **Design Document:** Pseudocode or flowchart (PDF, image, or Word doc)

---

## 🎯 Grading Rubric

### Correctness (60 points)

| Criteria | Points |
|----------|--------|
| Program compiles without errors | 10 |
| `Car` class defined with correct member variables and access specifiers | 10 |
| Constructor correctly initializes `yearModel`, `make`, and `speed` | 10 |
| `accelerate()` and `brake()` update `speed` by the correct amount | 15 |
| Accessor functions return the correct values | 10 |
| `main` demonstrates the class with 5 accelerations and 5 brakes, displaying speed each time | 5 |

### Code Quality (20 points)

| Criteria | Points |
|----------|--------|
| Clean, readable code with meaningful variable names | 5 |
| Proper indentation and formatting | 5 |
| Appropriate comments explaining logic | 5 |
| Efficient solution (no unnecessary complexity) | 5 |

### Design Document (15 points)

| Criteria | Points |
|----------|--------|
| Clear representation of algorithm/logic | 7 |
| Proper notation and structure | 5 |
| Shows understanding of the problem | 3 |

### Testing & Documentation (5 points)

| Criteria | Points |
|----------|--------|
| Screenshots show the program running correctly | 3 |
| All required materials submitted | 2 |

**Total: 100 points**

---

## 💡 Helpful Hints

### What Is a Class?

A class groups related **data** and **behavior** into a single unit. The data are the member variables; the behavior is defined by the member functions. When you create an object from a class, that object gets its own copy of every member variable.

```cpp
class Car
{
private:
    int yearModel;
    string make;
    int speed;
public:
    Car(int year, string carMake);
    // ... more functions
};
```

### Why the Semicolon After the Class Closing Brace?

Unlike a function, a class definition ends with `};` — the semicolon is required. Forgetting it is one of the most common beginner mistakes and produces confusing error messages.

### Scope Resolution When Defining Functions Outside the Class

If you define member functions outside the class body, prefix them with `ClassName::`:

```cpp
void Car::accelerate()
{
    speed += 5;
}
```

### Common Mistakes to Avoid

❌ **Mistake:** Making member variables `public`  
✅ **Correct:** Keep `yearModel`, `make`, and `speed` `private` — expose them only through accessor functions

❌ **Mistake:** Forgetting to initialize `speed` to zero in the constructor  
✅ **Correct:** Always assign `speed = 0;` (or use an initializer list) in the constructor body

❌ **Mistake:** Forgetting the semicolon after the closing `}` of the class definition  
✅ **Correct:** End the class with `};`

---

*Good luck — and remember, every real program you'll ever write uses classes like this one.*

---

## ❓ Troubleshooting

### Compilation Errors

**Problem:** `error: call of overloaded 'calcCharges(...)' is ambiguous`  
**Solution:** Your two function signatures are too similar — make sure the parameter lists are clearly different

**Problem:** `error: 'calcCharges' was not declared in this scope`  
**Solution:** Add a function prototype above `main` for each version of `calcCharges`

**Problem:** `error: expected ';' before...`  
**Solution:** You're missing a semicolon somewhere above the error line

**Problem:** Lots of errors about `cin` and `cout`  
**Solution:** Make sure you have `#include <iostream>` and `using namespace std;`

### Logic Errors

**Problem:** Inpatient total is wrong  
**Solution:** Double-check that you're multiplying days by the daily rate *before* adding the other charges

**Problem:** Negative input is accepted  
**Solution:** Make sure your validation condition is `< 0`, not `<= 0`

**Problem:** Wrong function is being called  
**Solution:** Verify that the arguments you're passing match the intended overload's parameter types and count
