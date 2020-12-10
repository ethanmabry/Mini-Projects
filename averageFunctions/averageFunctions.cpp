#include <iostream>
#include <cmath>

// Define average() here:
double average(double num1, double num2) {

return (num1 + num2) / 2;
}

int main() {
  
  std::cout << average(42.0, 24.0) << std::endl;
  std::cout << average(1.0, 2.0) << std::endl;
  
}
