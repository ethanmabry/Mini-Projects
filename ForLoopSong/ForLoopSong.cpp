#include <iostream>

int main() {

  // decrementing for loop to continually use up all beer bottles.
  for (int bottles = 99; bottles > 0; bottles--)
{
  std::cout << bottles << " " << "bottles of beer on the wall!" << std::endl;
  std::cout << "Take one down and pass it around.." << std::endl;
  std::cout << bottles-1 << " " << "bottles of beer on the wall!" << std::endl;
  std::cout << "\n";
  
}
  
  
  
