# 🐚 MyShell - Custom Linux Shell in C

Welcome to **MyShell**, a custom command-line shell written in **C** for Operating System course learning and practical application. This project simulates how basic shell environments like `bash` or `zsh` work under the hood by manually implementing process control, system calls, and command parsing in a clean and modular codebase.

---

## 📌 Table of Contents

- [🎯 Features](#-features)
- [🛠️ Technologies Used](#️-technologies-used)
- [📁 Project Structure](#-project-structure)
- [🚀 How to Run](#-how-to-run)
- [📸 Demo](#-demo)
- [📖 Concepts Implemented](#-concepts-implemented)
- [📚 Future Improvements](#-future-improvements)
- [🧠 Learnings](#-learnings)
- [📄 License](#-license)

---

## 🎯 Features

✅ Custom shell prompt (e.g., `myshell>`)  
✅ Execute system commands like `ls`, `pwd`, `echo`  
✅ Built-in commands like `cd`, `exit`  
✅ Command parsing and argument tokenization  
✅ Fork and execute external commands  
✅ Wait for foreground processes  
✅ Error handling for unknown commands  
✅ Modular, beginner-friendly code

---

## 🛠️ Technologies Used

- **Language:** C
- **Compiler:** `gcc`
- **Operating System:** Linux (recommended)
- **Concepts:** fork, execvp, wait, chdir, strtok, pipes (optional)

---

## 📁 Project Structure

```bash
myshell/
├── src/
│   ├── main.c          # Entry point and shell loop
│   ├── parser.c        # Tokenizes user input
│   ├── executor.c      # Executes parsed commands
│   ├── builtins.c      # Built-in commands like 'cd' and 'exit'
│   └── headers/
│       ├── parser.h
│       ├── executor.h
│       ├── builtins.h
├── Makefile            # Build configuration
├── README.md           # Project documentation
└── report/
    └── OS_CLI_Project_Report.pdf  # Semester report (if academic project)
```
🚀 How to Run
✅ Prerequisites
Linux OS (or WSL on Windows)

gcc compiler installed

📦 Build the Shell
bash
Copy
Edit
git clone https://github.com/yourusername/myshell.git
cd myshell
make
🧪 Run the Shell
bash
Copy
Edit
./myshell
Now type any Linux command like ls, cd, echo, etc.

📸 Demo
bash
Copy
Edit
myshell> echo Hello, World!
Hello, World!

myshell> cd ..
myshell> pwd
/home/aman

myshell> unknowncmd
myshell: command not found
📖 Concepts Implemented
Concept	System Call / Function
Process Creation	fork()
Command Execution	execvp()
Wait for Process	wait() / waitpid()
Input Parsing	fgets(), strtok()
Directory Change	chdir()
Shell Exit	exit()

📚 Future Improvements
 Background process support using &

 I/O Redirection (>, <)

 Command piping (|)

 Command history and autocomplete

 Signal handling (Ctrl+C)

🧠 Learnings
This project helped reinforce key OS concepts such as:

Process management and scheduling

System call interface

Command parsing and tokenization

File system navigation

Shell environment basics

