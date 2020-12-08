// #include preprocessor drive + iostream header file for inputs/outputs.
#include <iostream>
#include <ctime>

void PrintIntroduction(int Difficulty)
{
    std::cout << "\n\nYou are in the O'Riley Gang, breaking into the St. Dennison Bank's Level " << Difficulty << " Vault.\n" ;
    std::cout << "You will need to enter the correct codes to break in and move on to the next safe!\n";
    std::cout << "Mess up the increasingly difficult safes, and you'll have to restart!!\n";    
}

bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);
    
    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

   
    // Print sum and product to the terminal.
    std::cout << "\nThere are 3 numbers in the code\n";
    std::cout << "The codes add up to: " << CodeSum << "\n"; 
    std::cout << "The codes multiply to: " << CodeProduct << "\n";
    
    
    // Have User enter 3 number combination and display answer.
    int GuessA, GuessB, GuessC;
    std::cout << "Enter the three number combination: \n";
    std::cin >> GuessA >> GuessB >> GuessC;
     
    
    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // Check if the player's guess is correct.
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
       std::cout << "\nYou got some money, but it ain't enough! On to the next one... \n";
       return true; 
    }
    else
    {
        std::cout << "\nThe Sheriff got yeh... break out and try again!";
        return false;
    }
}





// Displays program output and enters a new line. 
int main()
{
    srand(time(NULL)); // Create new random sequence based on time of day.
    
    int LevelDifficulty = 1;
    const int MaxDifficulty = 5;
    
    while (LevelDifficulty <= MaxDifficulty) // Loop game until all levels are completed.
    {
       
        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear();
        std::cin.ignore();

        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
        
    }
    std::cout << "$$ Congrats! You made it out of the bank with all that sweet, sweet gold! $$\n";
    return 0;
}
