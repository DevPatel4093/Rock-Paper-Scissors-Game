# 🎮 Rock Paper Scissors Game (C++)

A simple **console-based Rock–Paper–Scissors game** developed in **C++**.  
The game allows a user to play against the computer, which makes random choices.  
The program is beginner-friendly and demonstrates basic C++ concepts such as functions, conditionals, loops, and random number generation.

---

## 📌 Features
- Interactive console-based gameplay
- Clear and user-friendly text UI
- Option to play multiple rounds

---

## 🛠 Technologies Used
- **Language:** C++
- **Compiler:** GCC (via MSYS2)
- **Platform:** Windows
- **Editor (optional):** VS Code / Notepad++

---

## 📂 Project Structure
Rock-Paper-Scissors-Game-main/
├── r-p-s.cpp // Simple Code without Emojis
├── rock-paper-scissor.cpp // Code with Emojis
├── output.exe
└── README.md

🎯 Game Rules
r → Rock
p → Paper
s → Scissors

## Winning Conditions
1. Rock beats Scissors
2. Scissors beats Paper
3. Paper beats Rock

<img src="https://upload.wikimedia.org/wikipedia/commons/thumb/6/67/Rock-paper-scissors.svg/1200px-Rock-paper-scissors.svg.png" width = "600" height = "600"/>

Image Credits : Wiki Pedia


**Possible cases** -  

* if (player == rock) and (computer == paper); computer wins
* if (player == paper) and (computer == paper); tie
* if (player == scissors) and (computer == paper); player wins

* if (player == rock) and (computer == rock); tie
* if (player == paper) and (computer == rock); player wins
* if (player == scissors) and (computer == rock); computer wins

* if (player == rock) and (computer == scissors); player wins
* if (player == paper) and (computer == scissors); computer wins
* if (player == scissors) and (computer == scissors); tie


## Algorithm

1. The computer will choose a random choice between "Rock", "Paper" and "Scissor".
    Logic -
    = We will generate a random number between 1 - 100; if the number is in between
    = less than 33    --> Computer will choose Rock
    = 33 - 66         --> Computer will choose Paper
    = greater than 66 --> Computer will choose Scissor  

2. User Input will be taken.
3. Input will be compared with computers choice.
4. According to rules, one of them will win.

## 👤 Author
**Dev Patel**