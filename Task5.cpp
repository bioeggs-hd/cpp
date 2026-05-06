#include <iostream>

int main() {
  // Choices
  bool a = false;
  bool b = false;
  book c = false;
  bool d = false;

  // Ask for options
  std::cout << "What foods do you like? Please enter all letters that correspond (lowercase), type \"end\" to finalize your choices"
    << "\na: Pizza"
    << "\nb: Apples"
    << "\nc: Spaghetti"
    << "\nd: Ice Cream"
    << std::endl;

  bool finished = false;
  while (finished == false) {
    std::string answer;
    std::cin >> answer;

    if (!(std::cin)) {
      std::cerr << "Please enter a valid string" << std::endl;
      return 1;
    }

    // Output answers
    switch (answer) {
      case "end":
        finished = true;
        break;
      case "a":
        a = true;
      case "b":
        b = true;
      case "c":
        c = true;
      case "d":
        d = true;
    }
  }

  if (a == true) {
    std::cout << "You chose a, Pizza is my favorite food as well!" << std::endl;
  }
  if (b == true) {
    std::cout << "You chose b, apples are super healthy!" << std::endl;
  }
  if (c == true) {
    std::cout << "You chose c, Spaghetti is a tasty Italian dish!" << std::endl;
  }
  if (d == true) {
    std::cout << "You chose d, ice cream is super refreshing on a hot day!" << std::endl;
  }

  return 0;
}
