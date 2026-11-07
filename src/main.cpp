#include <iostream>

#include "TerminalTextLocationLib.h"
#include "TextColorTerminalLib.h"

int main() {
  initialize();
  moveTo(5, 20);
  selectColor(YELLOW);
  std::cout << "Menu" << std::endl;
  moveTo(6, 20);

  std::cout << "1. Option 1" << std::endl;
  moveTo(7, 20);

  std::cout << "2. Option 2" << std::endl;
  moveTo(8, 20);
  std::cout << "3. Option 3" << std::endl;
  moveTo(9, 20);

  std::cout << "Exit..." << std::endl;
  //   std::cout << "Back to normal color!" << std::endl;

  return 0;
}
