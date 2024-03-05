#include <iostream>
#include <iomanip>

int main() {
  int x = 927;
  std::cout << x << std::endl; // Prints 927
  std::cout << std::hex << x << std::endl;
  std::cout << 7777 << std::endl; // prints 1e61
  // Using an IO manipulator on a stream mutates that stream
  // That mutation stays, so subsequent writes of ints to cout
  // are still printing in hex.
  std::cout << std::dec;
  std::cout << 7777 << std::endl;; // prints 7777
}
