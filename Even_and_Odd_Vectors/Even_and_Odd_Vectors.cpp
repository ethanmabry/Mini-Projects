#include <iostream>
#include <vector>

int main()
{
  int index = 0;
  int product = 1;
  int sum = 0;
  
  std::vector<int> numbers{2, 3, 4, 8, 9};
  
//cycles through vector to find even/odd numbers and does the math.
  for(index; index < numbers.size();)
  {
    if(numbers[index] % 2 == 0)
    {
     sum += numbers[index];
      index++;
    }
    else
    {
      product *= numbers[index];
      index++;
    }
  }

  //prints output and values to the terminal.
  std::cout <<"The sum of all even numbers is: "<< " " << sum << std::endl;
  std::cout <<"The product of all odd numbers is: "<< " "<< product << std::endl;
}
