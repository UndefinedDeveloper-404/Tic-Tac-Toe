# 🎮 Tic Tac Toe – C++ Mini Game

![C++](https://img.shields.io/badge/Language-C%2B%2B-blue)
![Project](https://img.shields.io/badge/Project-Mini%20Game-green)
![Status](https://img.shields.io/badge/Status-Completed-success)

## 📌 Project Overview

**Tic Tac Toe** is a console-based two-player mini game developed using **C++**.

The project demonstrates fundamental programming concepts such as **arrays, loops, conditional statements, functions, input validation, and game logic**.

Two players take turns placing **X** and **O** on a 3×3 game board. After every move, the board is updated dynamically. The program checks for a winning combination and declares the winner. If there are no available positions and no player wins, the game can also identify a draw.

---

## 🎯 Objective

The main objective of this project is to create an interactive console-based mini game using C++ while demonstrating core programming concepts.

The project focuses on:

* Using arrays to create the game board
* Using loops for repeated operations
* Using conditional statements for game decisions
* Using functions to organize the program
* Dynamically updating the game board
* Detecting winning conditions
* Handling invalid moves
* Providing a replay option

---

## ✨ Key Features

### 🎮 Two-Player Gameplay

The game supports two players:

* **Player X**
* **Player O**

Player X starts the game, followed by Player O.

### 🧩 Dynamic Game Board

The board is displayed after every move and automatically updates the selected position.

### 🏆 Win Detection

The program checks whether a player has completed three matching symbols:

* Horizontally
* Vertically
* Diagonally

### 🤝 Draw Detection

The program checks whether all positions are occupied without a winner.

### ⚠️ Input Validation

The program prevents invalid moves such as:

* Entering a number below 1
* Entering a number above 9
* Selecting an already occupied position
* Entering invalid input

### 🔄 Replay Option

After a game ends, the player can choose to start another game using the replay option.

---

## 🛠️ Technologies Used

| Technology             | Purpose                   |
| ---------------------- | ------------------------- |
| C++                    | Main programming language |
| Arrays                 | Store the game board      |
| Loops                  | Repeat game operations    |
| Conditional Statements | Implement game logic      |
| Functions              | Organize the program      |
| Console                | User interaction          |

---

## 📂 Project Structure

```text
Tic-Tac-Toe/
│
├── main.cpp
├── README.md
│
└── screenshots/
    ├── game-start.png
    ├── game-play.png
    └── player-win.png
```

---

# 🎮 How to Play

## Step 1 – Start the Game

Run the program.

The game displays a 3×3 board with positions numbered from 1 to 9.

```text
       TIC TAC TOE
   -----------------
   | 1 | 2 | 3 |
   -----------------
   | 4 | 5 | 6 |
   -----------------
   | 7 | 8 | 9 |
   -----------------
```

---

## Step 2 – Enter a Position

Player X starts the game.

For example:

```text
Player X, enter your position (1-9): 1
```

The selected position will be replaced with `X`.

---

## Step 3 – Player O's Turn

After Player X makes a move, Player O gets the next turn.

For example:

```text
Player O, enter your position (1-9): 5
```

The selected position will be replaced with `O`.

---

## Step 4 – Continue the Game

Players continue taking turns until:

* Player X wins
* Player O wins
* The board becomes full and the game is a draw

---

# 🔢 Board Position Reference

The following numbering system is used to select positions:

```text
   -----------------
   | 1 | 2 | 3 |
   -----------------
   | 4 | 5 | 6 |
   -----------------
   | 7 | 8 | 9 |
   -----------------
```

Examples:

| Number | Position      |
| ------ | ------------- |
| 1      | Top-left      |
| 2      | Top-center    |
| 3      | Top-right     |
| 4      | Middle-left   |
| 5      | Center        |
| 6      | Middle-right  |
| 7      | Bottom-left   |
| 8      | Bottom-center |
| 9      | Bottom-right  |

---

# 🧠 Game Logic

## 1. Game Board

A two-dimensional character array is used to store the game board.

```cpp
char board[3][3];
```

The initial board is:

```cpp
char board[3][3] =
{
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'}
};
```

When a player selects a position, the number is replaced with `X` or `O`.

---

## 2. Display Board

The `displayBoard()` function displays the current game board after every move.

```cpp
displayBoard(board);
```

This provides a dynamic view of the current game state.

---

## 3. Win Detection

The `checkWin()` function checks all possible winning combinations.

### Horizontal Win

```text
X | X | X
---------
O | O | 6
---------
7 | 8 | 9
```

### Vertical Win

```text
X | O | 3
---------
X | O | 6
---------
X | 8 | 9
```

### Diagonal Win

```text
X | O | 3
---------
O | X | 6
---------
7 | 8 | X
```

If any of these combinations occur, the corresponding player wins.

---

## 4. Draw Detection

The `checkDraw()` function checks whether all positions on the board have been occupied.

If the board is full and neither player has won, the program displays:

```text
=================================
          GAME DRAW!
=================================
```

---

## 5. Player Switching

After every valid move, the program changes the current player.

```cpp
if (currentPlayer == 'X')
{
    currentPlayer = 'O';
}
else
{
    currentPlayer = 'X';
}
```

This allows the players to take turns automatically.

---

# ⚠️ Input Validation

The program validates player input before placing a symbol.

### Invalid Position

If the player enters a number outside the range 1–9:

```text
Player X, enter your position (1-9): 12

Invalid position! Choose a number from 1 to 9.
```

### Occupied Position

If the selected position is already occupied:

```text
Player O, enter your position (1-9): 5

Position already occupied! Try another position.
```

This prevents players from overwriting existing moves.

---

# 🔄 Replay Functionality

When the game finishes, the program asks:

```text
Do you want to play again? (Y/N):
```

If the player enters:

```text
Y
```

a new game starts.

If the player enters:

```text
N
```

the program exits.

This provides replay functionality without requiring the user to restart the program manually.

---

# 📸 Screenshots

## 1. Game Start and Player X Move

This screenshot shows the successful launch of the Tic Tac Toe game, the initial 3×3 board, and Player X making the first move.

![Game Start and Player X Move](screenshots/game-start.png)

---

## 2. Dynamic Board Update

This screenshot demonstrates the dynamic updating of the board after Player X and Player O make their moves.

![Dynamic Board Update](screenshots/game-play.png)

---

## 3. Player X Wins and Replay Option

This screenshot demonstrates the win detection feature. Player X completes a winning combination, and the program displays the winner and provides the replay option.

![Player X Wins and Replay](screenshots/player-win.png)

---

# 🧪 Testing

The game was tested using different scenarios to verify that the required functionality works correctly.

| Test Case         | Action                         | Expected Result           | Status   |
| ----------------- | ------------------------------ | ------------------------- | -------- |
| Game Start        | Run the program                | Board is displayed        | ✅ Passed |
| Player X Move     | Enter a valid position         | X is placed               | ✅ Passed |
| Player O Move     | Enter a valid position         | O is placed               | ✅ Passed |
| Board Update      | Make multiple moves            | Board updates dynamically | ✅ Passed |
| Win Detection     | Complete a winning combination | Winner is displayed       | ✅ Passed |
| Invalid Position  | Enter number outside 1–9       | Error message displayed   | ✅ Passed |
| Occupied Position | Select an occupied position    | Error message displayed   | ✅ Passed |
| Replay            | Enter Y after game             | New game starts           | ✅ Passed |
| Exit              | Enter N after game             | Program exits             | ✅ Passed |

---

# 💻 Source Code

The complete source code is available in:

```text
main.cpp
```

The program is organized into the following functions:

```text
displayBoard()
checkWin()
checkDraw()
playGame()
main()
```

Using separate functions makes the program easier to understand, maintain, and debug.

---

# ▶️ How to Compile and Run

## Using g++

### Compile

```bash
g++ main.cpp -o tic_tac_toe
```

### Run on Windows

```bash
tic_tac_toe.exe
```

### Run on Linux/macOS

```bash
./tic_tac_toe
```

---

# 💻 Running in Visual Studio Code

1. Open **Visual Studio Code**.
2. Open the `Tic-Tac-Toe` project folder.
3. Open `main.cpp`.
4. Make sure a C++ compiler is installed.
5. Open the VS Code terminal.
6. Compile the program.
7. Run the generated executable.
8. Test the game features.

---

# 📚 C++ Concepts Demonstrated

## Arrays

A two-dimensional array is used for the game board.

```cpp
char board[3][3];
```

## Loops

Loops are used to:

* Display the board
* Check rows
* Check columns
* Check board positions
* Repeat gameplay

## Conditional Statements

`if`, `else if`, and `else` statements are used for:

* Win detection
* Draw detection
* Input validation
* Player switching

## Functions

Functions are used to divide the program into smaller logical components.

```text
displayBoard()
checkWin()
checkDraw()
playGame()
```

## Input Handling

The program accepts user input through the console and validates the selected position.

---

# 🧪 Expected Program Flow

```text
Start
  │
  ▼
Display Game Board
  │
  ▼
Player X Enters Position
  │
  ▼
Validate Input
  │
  ├── Invalid ──► Ask Again
  │
  ▼
Update Board
  │
  ▼
Check Winner
  │
  ├── Yes ──► Display Winner
  │
  ▼
Check Draw
  │
  ├── Yes ──► Display Draw
  │
  ▼
Switch Player
  │
  ▼
Display Updated Board
  │
  ▼
Continue Game
```

---

# 📊 Expected Outcome

The completed Tic Tac Toe application provides an interactive console-based gaming experience.

The application successfully demonstrates:

* Dynamic board display
* Two-player gameplay
* Array implementation
* Loop implementation
* Conditional logic
* Function-based programming
* Win detection
* Draw detection
* Input validation
* Replay functionality

Therefore, the project meets the requirements of the **C++ Mini Game Project**.

---

# 🚀 Future Enhancements

The project can be extended in the future with additional features such as:

* 🤖 Single-player mode with AI
* 🎚️ Easy, Medium, and Hard difficulty levels
* 🏆 Scoreboard
* 👤 Custom player names
* 🎨 Colored console interface
* 🔊 Sound effects
* 📊 Game statistics
* 🖥️ Graphical user interface
* 🌐 Online multiplayer mode

---

# 🎓 Learning Outcomes

This project helped demonstrate practical understanding of:

* C++ programming fundamentals
* Two-dimensional arrays
* Loops
* Conditional statements
* Functions
* Input validation
* Game-state management
* Logical problem solving
* Debugging
* Testing
* Project documentation

---

# 👨‍💻 Project Information

| Category                    | Details            |
| --------------------------- | ------------------ |
| **Project Name**            | Tic Tac Toe        |
| **Project Type**            | Mini Game          |
| **Programming Language**    | C++                |
| **Application Type**        | Console-Based      |
| **Players**                 | Two Players        |
| **Board Size**              | 3 × 3              |
| **Development Environment** | Visual Studio Code |
| **Status**                  | Completed          |

---

# 📄 License

This project is created for **educational purposes** as part of a C++ Mini Game Project.
