// Little Mac Weight Program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <istream>

  int main()
  {
    int planet = 0;
    int earthweight = 0;
    std::cout << "Enter your earthweight in pounds. \n";
    std::cin >> earthweight;

    
    std::cout << "Choose from this list what planet you want to fight on by inputting the correlating number: \n";
    std::cout << "1. Venus \n" << "2. Mars \n" << "3. Jupiter \n" << "4. Saturn \n" << "5. Uranus \n" << "6. Neptune \n";
    std::cin >> planet;

    switch (planet)
    {
    case 1:
    {
        std::cout << "Venus Selected. \n";
        std::cout << "Relative Gravity is 1.17. \n";
        std::cout << "Continue? \n";
        std::string answer;
        std::cin >> answer;

        if (answer == "Yes")
        {
            int planetWeight = (earthweight * 1.17);
            std::cout << "Your weight on Venus is: " << planetWeight << ".\n";
            std::cout << "Good luck! ";
            break;
        }
        else
        {
            std::cout << "Okay. No problem. Back to the main menu. ";
            return main();
        }
    }
    case 2:
    {
        std::cout << "Mars Selected. \n";
        std::cout << "Relative Gravity is 0.39. \n";
        std::cout << "Continue? \n";
        std::string answer;
        std::cin >> answer;

        if (answer == "Yes")
        {
            int planetWeight = (earthweight * 0.39);
            std::cout << "Your weight on Mars is: " << planetWeight << ".\n";
            std::cout << " Good luck! ";
            break;
        }
        else
        {
            std::cout << "Okay. No problem. Back to the main menu. ";
            return main();
        }
    }
    case 3:
    {
        std::cout << "Jupiter Selected. \n";
        std::cout << "Relative Gravity is 2.65. \n";
        std::cout << "Continue? \n";
        std::string answer;
        std::cin >> answer;

        if (answer == "Yes")
        {
            int planetWeight = (earthweight * 2.65);
            std::cout << "Your weight on Jupiter is: " << planetWeight << ".\n";
            std::cout << " Good luck! ";
            break;
        }
        else
        {
            std::cout << "Okay. No problem. Back to the main menu. ";
            return main();
    }

    }
    case 4:
    {
        std::cout << "Saturn Selected. \n";
        std::cout << "Relative Gravity is 1.17. \n";
        std::cout << "Continue? \n";
        std::string answer;
        std::cin >> answer;

        if (answer == "Yes")
        {
            int planetWeight = (earthweight * 1.17);
            std::cout << "Your weight on Saturn is: " << planetWeight << ".\n";
            std::cout << " Good luck! ";
            break;
        }
        else
        {
            std::cout << "Okay. No problem. Back to the main menu. ";
            return main();
        }
    }
    case 5:
    {
        std::cout << "Uranus Selected. \n";
        std::cout << "Relative Gravity is 1.05. \n";
        std::cout << " Continue? \n";
        std::string answer;
        std::cin >> answer;

        if (answer == "Yes")
        {
            int planetWeight = (earthweight * 1.05);
            std::cout << "Your weight on Uranus is: " << planetWeight << ".\n";
            std::cout << " Good luck! ";
            break;
        }
        else
        {
            std::cout << "Okay. No problem. Back to the main menu. ";
            return main();
        }
    }
    case 6:
    {
        std::cout << "Neptune Selected. \n";
        std::cout << "Relative Gravity is 1.23. \n";
        std::cout << " Continue? \n";
        std::string answer;
        std::cin >> answer;

        if (answer == "Yes")
        {
            int planetWeight = (earthweight * 1.23);
            std::cout << "Your weight on Neptune is: " << planetWeight << ".\n";
            std::cout << " Good luck! ";
            break;
        }
        else
        {
            std::cout << "Okay. No problem. Back to the main menu. ";
            return main();
        }
    }
    }
}
