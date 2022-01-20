#include "formula.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  if (math::Formula::identity(0) == 0) {
    std::cout << "Correct result\n";
  } else {
    std::cout << "False";
  }
  return 0;
}
