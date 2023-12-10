#include <iostream>
#include <string>

int main() {

  int value_a, value_b;
  std::string unit_a, unit_b;
  while (std::cin >> value_a >> unit_a >> value_b >> unit_b) {
    int a_in_mm;
    int b_in_mm;
    
    if (unit_a == "mm") {
      a_in_mm = value_a;
    } else if (unit_a == "cm") {
      a_in_mm = value_a * 10;
    } else if (unit_a == "m") {
      a_in_mm = value_a * 1000;
    } else if (unit_a == "km") {
      a_in_mm = value_a * 1000 * 1000;
    } else {
      std::cout << "Error!!!";
    }

    if (unit_b == "mm") {
      b_in_mm = value_b;
    } else if (unit_b == "cm") {
      b_in_mm = value_b * 10;
    } else if (unit_b == "m") {
      b_in_mm = value_b * 1000;
    } else if (unit_b == "km") {
      b_in_mm = value_b * 1000 * 1000;
    } else {
      std::cout << "Error!!!";
    }

    std::string comparison{" is the same as "};
    if (a_in_mm > b_in_mm) {
      comparison = " is larger than ";
    } else if (a_in_mm < b_in_mm) {
      comparison = " is smaller than ";
    }
    std::cout << value_a << unit_a << comparison << value_b << unit_b << std::endl;
  }
}
