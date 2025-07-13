# Dice Simulator Dungeons & Dragons Style
A modular C++ program that simulates Dungeons and Dragons style dice rolls using object-oriented design.

---

### Author

**Sauel Almonte**  
[LinkedIn Profile](https://www.linkedin.com/in/sauel-almonte)

---

### Also Available In

Check out the **Java version of this project**:  
[Dice Simulator Dungeons & Dragons Style (Java)](https://github.com/yourusername/java-dice-simulator-dnd)

---

## Features

- Simulates two types of dice:
    - **6-sided die**
    - **12-sided die**
- Rolls each die up to **5 times** per simulation
- Clean modular structure:
    - **Header file:** Die class specification
    - **Implementation file:** Die class logic
    - **Main program:** Dice rolling simulation
- Random number generation using `cstdlib` and `ctime`

---

## Project Structure

```
/dice-simulator-dnd
  ├── Die.h          # Die class specification (header)
  ├── Die.cpp        # Die class implementation
  ├── main.cpp       # Program simulation logic
  ├── .gitignore     # Git ignore rules
  └── README.md      # Project documentation
```

---

## Build & Run Instructions

### Prerequisites
- A C++ compiler (e.g., `g++`, `clang++`, or MSVC)
- C++17 standard or later
- An IDE or editor of your choice:
    - **JetBrains CLion**
    - **Visual Studio Code (VSCode)**
    - **Visual Studio** (Windows)
    - Or a terminal/command prompt

---

### Option 1: Compile & Run via Terminal
```text
g++ -std=c++17 -o dice_simulator Die.cpp main.cpp
./dice_simulator
```

---

### Option 2: Using JetBrains CLion
1. Open **CLion**.
2. Select **Open** and navigate to the project directory.
3. CLion auto-detects the **CMakeLists.txt** or prompts to configure CMake.
4. Click **Build** or press `Shift + F9` to compile.
5. Press **Run** or `Shift + F10` to execute the program.

---

### Option 3: Using Visual Studio Code
1. Install the **C/C++ Extension Pack**.
2. Open the project folder in **VSCode**.
3. Optionally configure **`tasks.json`** to automate compilation, or compile directly in the terminal:
```text
g++ -std=c++17 -o dice_simulator Die.cpp main.cpp
./dice_simulator
```

---

### Option 4: Using Visual Studio (Windows)
1. Create a **New Console App Project**.
2. Add `Die.h`, `Die.cpp`, and `main.cpp` to the project.
3. Configure the project to use the **C++17 standard** via Project Properties.
4. Build and run the solution.

---

## Example Output
```text
This simulates the rolling of a 6 sided die and a 12 sided die.
Initial value of the dice:
3 9
Rolling the dice 5 times.
4 4
1 2
4 10
6 12
3 9
```

---

## License

This project is licensed under the **MIT License**.  
You are free to use, modify, and distribute this software with proper attribution.

### Disclaimer
This project is provided **"as is"** without any warranties or guarantees of any kind, either express or implied.  
The author is not responsible for any damages or issues that may arise from using or modifying this code.  
Use at your own discretion.
