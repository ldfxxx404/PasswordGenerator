#include "pwgFN.h"
#include <cstdlib>
#include <ctime>
#include <string>

std::string PassGen::Gen(int passwordLenght) {
  int randomNumber;
  std::string password;
  std::srand(std::time(0));
  for (int i = 0; i < passwordLenght; i++) {
    randomNumber = std::rand() % 94 + 33;
    password += (char)randomNumber;
  }

  return password;
}
