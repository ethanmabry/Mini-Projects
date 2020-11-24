#include <iostream>
#include <cstdlib>
int main()
{
std::cout << "MAJESTIC BALL OF FORTUNE AND DOOM\n";

srand(time(NULL));
int answer = std::rand() % 11;


if (answer == 0)
{
  std::cout << "It is certain.\n";
}

else if (answer == 1 )
{
  std::cout << "Maybe.\n";
}

else if (answer == 2)
{
  std::cout << "Oh yeah!\n";
}

else if (answer == 3)
{
  std::cout << "Try again buddy.\n";
}

else if (answer == 4)
{
  std::cout << "Hmm...sure. We'll go with that.\n";
}

else if (answer == 5)
{
  std::cout << "Yes.\n";
}

else if (answer == 6)
{
  std::cout << "C++ isn't so bad. So I say yes.\n";
}

else if (answer == 7)
{
  std::cout << "Nah. Sorry.\n";
}

else if (answer == 8)
{
  std::cout << "Most definitely. Without a doubt. Totally! You get the point. (It's a yeah yo.)\n";
}

else if (answer == 9)
{
  std::cout << "No yet again.\n";
}

else if (answer == 10)
{
  std::cout << "Hello World! Ugh stop making me say that. No.\n";
}
else
{
  std::cout << "Very doubtful.\n";
}
}
