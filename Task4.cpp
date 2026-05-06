#include <iostream>

int main() {
  int number;

  // Get input for the number
  std::cout << "Please enter your number: ";
  std::cin >> number;

  // Validate input
  if (!(std::cin)) {
    std::cerr << "Please enter a valid integer" << std::endl;
    return 1;
  }

  // Print whether the number is odd or even
  if (number % 2 == 0) {
    // Even
    std::cout << number << " is even";
  } else {
    // Odd
    std::cout << number << " is odd";
  }
  
  std::cout << std::endl;
  return 0;
}
