# WizardTerminal

WizardTerminal is a fun, dark-fantasy-inspired shell written in C++. It is meant to feel like a playful spellbook for the terminal, where simple commands make you feel like a wizard moving through a mysterious world of files and directories.

This project is not meant to replace a full-featured shell. It is a small, experimental project for learning, fun, and creative command-line exploration.

## What this project is

WizardTerminal gives you a tiny interactive shell with a fantasy-themed identity. The goal is to make command-line work feel more magical and memorable.

It currently supports commands such as:

- help: show available commands
- show: display the current working directory
- teleport: change to another directory
- wipe: clear the screen
- summon: create a new directory
- reborn: rename a file or directory
- bye: exit the shell

## Releases

Pre-built standalone executables are available for download:

- **Windows**: `WizardTerminal-windows-x64.exe` - Standalone executable for Windows 64-bit systems
- **Linux**: `WizardTerminal-linux-x86_64` - Standalone executable for Linux x86_64 systems

Download the appropriate executable for your platform from the [Releases](https://github.com/brijeshkumar724282-beep/Wizard-Shell/releases) page and run it directly without needing to compile.

## Requirements

You need:

- A C++ compiler such as g++
- The Boost C++ libraries

## Build and run

### Linux

Install the required tools if needed:

Ubuntu or Debian:

```bash
sudo apt update
sudo apt install g++ libboost-all-dev
```

Fedora:

```bash
sudo dnf install gcc-c++ boost-devel
```

Build and run:

```bash
g++ main.cpp -o wizard-shell
./wizard-shell
```

### macOS

If you do not already have Homebrew, install it first.

Then install the compiler and Boost:

```bash
brew install gcc boost
```

Build and run:

```bash
g++ main.cpp -o wizard-shell
./wizard-shell
```

### Windows

The easiest way is to use WSL with Ubuntu.

1. Install WSL and Ubuntu from the Microsoft Store or Windows features.
2. Open the Ubuntu terminal and run:

```bash
sudo apt update
sudo apt install g++ libboost-all-dev
```

3. Build and run:

```bash
g++ main.cpp -o wizard-shell
./wizard-shell
```

If you prefer a native Windows setup, you can use MSYS2 or MinGW and install the same build tools and Boost libraries there.

## Example usage

Once the shell is running, try:

```bash
help
show
summon castle
teleport castle
reborn castle tower
wipe
bye
```

## Notes

This is a lightweight, experimental project. It is designed for fun, practice, and exploration rather than production use.

If you want, you can also extend it with more magical features such as custom commands, color themes, spell-like names, or a more immersive fantasy interface.
