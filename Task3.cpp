#include <iostream>

int main() {
  int celsius;

  // Get input for celsius temperature
  std::cout << "Enter temparature in celsius: ";
  std::cin >> celsius;

  // Validate input
  if (!(std::cin)) {
    std::cerr << "Please enter a valid integer" << std::endl;
    return 1;
  }

  // Calculate and output fahrenheit
  float fahrenheit = celsius * 1.8 + 32;

  std::cout << celsius << "° C = " << fahrenheit << "° F" << std::endl;
  return 0;
}








