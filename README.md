# Assignment 6: Overloaded Hospital Charges

**Course:** COSC 1336 - C++ Programming I  
**Assignment Type:** Core Programming Skills - Function Overloading & Input Validation

---

## 🎯 Learning Objectives

By completing this assignment, you will demonstrate your ability to:

- Use **function overloading** to define two functions with the same name but different parameter lists
- Collect and validate user input, rejecting negative values
- Use an `if/else` structure to branch program logic based on user input
- Return computed values from functions and display them in `main`
- Write clean, well-documented code that solves a real-world problem

---

## 📝 The Problem

A local hospital is overloaded and needs help tracking patient billing. Depending on how a patient was admitted, different charges apply.

### Your Task

Write a program that:

1. **Asks** whether the patient was admitted as an **inpatient** or an **outpatient**
2. **Collects** the appropriate charges based on admission type
3. **Calls** the correct overloaded `calcCharges` function to compute the total
4. **Displays** the total charges to the screen

---

## 🔢 Input and Output Requirements

### Inpatient Data

If the patient was admitted as an inpatient, prompt for:
- Number of days spent in the hospital
- Daily rate
- Hospital medication charges
- Charges for hospital services (lab tests, etc.)

### Outpatient Data

If the patient was admitted as an outpatient, prompt for:
- Charges for hospital services (lab tests, etc.)
- Hospital medication charges

### Input Validation

- **Do not accept negative numbers for any input.** Re-prompt the user until a valid (non-negative) value is entered.

### Output Specifications

After collecting all data, display:
- The **total charges** for the patient's stay

---

## 💡 Example Program Run

```
Is the patient an inpatient or outpatient? (I/O): I

Enter number of days in hospital: 5
Enter daily rate: $150.00
Enter hospital medication charges: $200.00
Enter charges for hospital services: $75.00

Total charges: $1025.00
```

*(The values above are examples — your output should reflect what the user actually entered.)*

---

## 🛠️ Implementation Guide

### Step 1: Understand the Problem

Before writing any code, make sure you understand:

- **What are the two patient types?** Inpatient (admitted overnight) and outpatient (treated and released the same day).
- **Why two overloaded functions?** Inpatients and outpatients have different data — function overloading lets you use the same function name (`calcCharges`) for both by giving each a different parameter list.
- **What does each function return?** The total charges as a `double`.

**Think about this:** How does the hospital arrive at a total for each type? An inpatient's bill depends partly on how many nights they stayed, while an outpatient's does not.

---

### Step 2: Set Up Your Development Environment

1. Open your GitHub Codespace for this assignment
2. Locate the starter file: `a6main.cpp`
3. Open the terminal in VS Code

---

### Step 3: Plan Your Solution

Create a design document (pseudocode or flowchart) that outlines your approach. Your design should include:

**Part A: Getting the Patient Type**
- How will you ask the user inpatient or outpatient?
- What input values are you accepting? (`'I'`/`'O'`, `1`/`2`, etc.)
- How will your `if/else` branch to the correct section?

**Part B: Collecting and Validating Input**
- What variables do you need for each patient type?
- How do you loop until the user enters a non-negative number?
- Should validation live in `main` or in a separate helper?

**Part C: The Two Overloaded Functions**
- What parameters does the inpatient version need?
- What parameters does the outpatient version need?
- What does each function calculate and return?

**Part D: Output**
- What should the final output look like?
- Does your output match the format shown in the example?

---

### Step 4: Write Your Code

Open `a6main.cpp` and implement your solution following this structure:

#### Include Necessary Libraries

Think about what you need:
- Input and output operations

#### Define the Two Overloaded Functions

Both functions should be named `calcCharges` and return a `double`.

**Inpatient version** — accepts:
- `int` days in hospital
- `double` daily rate
- `double` medication charges
- `double` services charges

**Outpatient version** — accepts:
- `double` services charges
- `double` medication charges

Place function **prototypes** above `main` and **definitions** below it (or define them above `main` — either is fine as long as the prototypes are present).

#### In `main`: Ask for Patient Type

Prompt the user and read their choice. Use an `if/else` (or `switch`) to branch into the correct section.

#### In Each Branch: Collect and Validate Input

For each value you need to collect:
- Prompt and read the value
- If the value is negative, display an error and re-prompt
- Repeat until a valid value is entered

#### Call the Correct Function and Display the Result

Pass the collected values to the appropriate `calcCharges` function, store the return value, and display it.

---

### Step 5: Compile and Test

#### Compile Your Program

In the terminal, compile with:
```bash
g++ a6main.cpp -o a6main
```

**If compilation fails:**
- Read error messages carefully — they tell you what's wrong
- Check for common issues:
  - Missing semicolons
  - Misspelled variable names
  - Forgotten `#include` statements
  - Mismatched braces `{}`

#### Run Your Program

```bash
./a6main
```

#### Test Thoroughly

Use these checks to verify your program works correctly:

| Check | What to Verify |
|-------|----------------|
| Inpatient path works | Are all four fields prompted? Is the total correct? |
| Outpatient path works | Are both fields prompted? Is the total correct? |
| Negative input rejected | Does the program re-prompt when a negative value is entered? |
| Zero is accepted | Is `0` treated as a valid (non-negative) entry? |
| Math is correct | Manually calculate the expected total and confirm it matches |

**Important:** Test both the inpatient and outpatient paths every time you make a change — a bug in one branch won't always show up when testing the other.

---

### Step 6: Document Your Work

#### Take Screenshots

Capture clear screenshots showing:
1. ✅ Your program compiling without errors
2. ✅ An inpatient test run with correct output
3. ✅ An outpatient test run with correct output
4. ✅ At least one test showing negative-input rejection
5. ✅ Your complete code in the editor

Save screenshots as PNG or JPG files.

#### Create a Design Document

Submit either:
- **Pseudocode:** Write your algorithm in plain English with proper structure
- **Flowchart:** Draw a visual representation of your program's logic

**What to include:**
- How the patient type is determined
- The branching structure for inpatient vs. outpatient
- The input-validation loop
- How each overloaded function is called and what it returns

**Tools for flowcharts:**
- [Draw.io](https://draw.io) (free, online)
- Microsoft Word/PowerPoint (shapes feature)
- Google Drawings
- Hand-drawn and scanned/photographed

---

## 📤 Submission Checklist

Before submitting, verify you have:

- [ ] **Source Code:** `a6main.cpp` - complete, commented, properly formatted
- [ ] **Two overloaded functions:** Both named `calcCharges`, each with a different parameter list
- [ ] **Input validation:** No negative values accepted for any field
- [ ] **Screenshots:** Test runs for both patient types, including negative-input rejection
- [ ] **Design Document:** Pseudocode or flowchart (PDF, image, or Word doc)

---

## 🎯 Grading Rubric

### Correctness (60 points)

| Criteria | Points |
|----------|--------|
| Program compiles without errors | 10 |
| Correctly identifies inpatient vs. outpatient and branches accordingly | 10 |
| Inpatient `calcCharges` function computes the correct total | 15 |
| Outpatient `calcCharges` function computes the correct total | 15 |
| Negative input is rejected and user is re-prompted | 10 |

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
| Screenshots show both patient-type paths running correctly | 3 |
| All required materials submitted | 2 |

**Total: 100 points**

---

## 💡 Helpful Hints

### What Is Function Overloading?

In C++, two functions can share the same name as long as their **parameter lists are different** — different number of parameters, different types, or both. The compiler picks the right version based on what arguments you pass.

```cpp
// Inpatient version
double calcCharges(int days, double dailyRate, double meds, double services);

// Outpatient version
double calcCharges(double services, double meds);
```

When you call `calcCharges(days, rate, meds, services)`, the compiler matches the four-argument call to the inpatient version automatically.

### Input Validation Loop Pattern

A reliable way to keep asking until the user enters a valid value:

```cpp
cout << "Enter daily rate: $";
cin >> dailyRate;
while (dailyRate < 0)
{
    cout << "Invalid. Please enter a non-negative value: $";
    cin >> dailyRate;
}
```

### Calculating the Inpatient Total

The inpatient total includes the room cost (days × daily rate) plus all additional charges:

```
total = (days × dailyRate) + medicationCharges + servicesCharges
```

### Calculating the Outpatient Total

The outpatient total is simply the sum of the two charges collected:

```
total = servicesCharges + medicationCharges
```

### Common Mistakes to Avoid

❌ **Mistake:** Defining two functions with the same name *and* the same parameter list  
✅ **Correct:** The two `calcCharges` functions must differ in their parameter lists

❌ **Mistake:** Forgetting function prototypes when definitions appear below `main`  
✅ **Correct:** Declare prototypes above `main` so the compiler knows each function exists before it is called

❌ **Mistake:** Accepting `0` as invalid  
✅ **Correct:** The rule is no *negative* numbers — zero is a perfectly valid charge

❌ **Mistake:** Only testing one patient type  
✅ **Correct:** Always test both the inpatient and outpatient branches

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
