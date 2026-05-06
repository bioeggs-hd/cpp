# include <iostream>

int main() {
  int num1;
  int num2;

  // Get user input for the two integers
  std::cout << "Number 1: ";
  std::cin >> num1;
  std::cout << "Number 2: ";
  std::cin >> num2;

  // Validate
  if(!(std::cin) || num1 == 0 || num2 == 0) {
    std::cerr << "Invalid input; please enter two valid integers that are not 0" << std::endl;
    return 1;
  }

  // Calculate
  int sum = num1 + num2;
  int difference = num1 - num2;
  int product = num1 * num2;
  float quotient = num1 / num2;

  // Output the results
  std::cout << "\nSum: " << sum;
  std::cout << "\nDifference: " << difference;
  std::cout << "\nProduct: " << product;
  std::cout << "\nQuotient: " << quotient << std::endl;

  return 0;
}





