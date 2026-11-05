#include "TerminalTextLocationLib.h"

#include <iostream>

#ifdef _WIN32
#include <windows.h>
#else
#include <sys/ioctl.h>
#include <unistd.h>
#endif



constexpr char ESC = 27;

void initialize() {
#ifdef _WIN32

  HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);

  DWORD mode = 0;

  if (GetConsoleMode(hOut, &mode)) {
    mode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
    SetConsoleMode(hOut, mode);
  }

#endif
}

// Move Cursor: ESC[row;colH
void moveTo(int row, int col) {
  std::cout << ESC << "[" << row << ";" << col << "H";
}

// Save Cursor Position: ESC[s
void saveCursor() { std::cout << ESC << "[s"; }

// Restore Cursor Position: ESC[u
void restoreCursor() { std::cout << ESC << "[u"; }


