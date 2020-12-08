#include <iostream>
#include <cstdlib>

int main()
{
	int gryffindor = 0;
	int hufflepuff = 0;
	int ravenclaw = 0;
	int slytherin = 0;

	int answer1 = 0;
	int answer2 = 0;
	int answer3 = 0;
	int answer4 = 0;

	

	std::cout << "The Sorting Hat Quiz!\n";

	int questions();
	int pointCalculator();
	int finalHouse();


	int questions();
	{
		std::cout << "Question 1) When I am dead, I want people to remember me as: \n";
		std::cout << "1) The Daring \n" << "2) The Wise \n" << "3) The Cunning \n" << "4) The Bold \n";
		std::cin >> answer1;

		std::cout << "Question 2) Dawn or Dusk? \n";
		std::cout << " 1) Dawn \n" << "2) Dusk \n";
		std::cin >> answer2;

		std::cout << "Question 3) Which instrument pleases your ear most? \n";
		std::cout << "1) The Violin \n" << "2) The Trumpet \n" << "3) The Piano \n" << "4)The Drum \n";
		std::cin >> answer3;

		std::cout << "Question 4) Which road tempts you most? \n";
		std::cout << "1) The wide, sunny street. \n" << "2) The narrow and dark alleyway lit only by lanterns. \n" << "3) The menacingly twisted path through the woods. \n" << "4) The cobbled street lining ancient buildings. \n";
		std::cin >> answer4;
	}

	int pointCalculator();
	{
		if (answer1 == 1)
		{
			gryffindor++;
		}
		else if (answer1 == 2)
		{
			ravenclaw++;
		}
		else if (answer1 == 3)
		{
			slytherin++;
		}
		else if (answer1 == 4)
		{
			hufflepuff++;
		}
		else
		{
			std::cout << "Invalid Input.\n \n";
			main();
		}

		if (answer2 == 1)
		{
			gryffindor&&ravenclaw++;
		}
		else if (answer2 == 2)
		{
			slytherin&&hufflepuff++;
		}
		else
		{
			std::cout << "Invalid Input.\n \n";
			main();
		}

		if (answer3 == 1)
		{
			slytherin++;
		}
		else if (answer3 == 2)
		{
			hufflepuff++;
		}
		else if (answer3 == 3)
		{
			ravenclaw++;
		}
		else if (answer3 == 4)
		{
			gryffindor++;
		}
		else
		{
			std::cout << "Invalid Input.\n \n";
			main();
		}
	
		if (answer4 == 1)
		{
			gryffindor++;
		}
		else if (answer4 == 2)
		{
			slytherin++;
		}
		else if (answer4 == 3)
		{
			ravenclaw++;
		}
		else if (answer4 == 4)
		{
			hufflepuff++;
		}
		else
		{
			std::cout << "Invalid Input.\n \n";
			main();
		}
	
	}

	int finalHouse();
	{
		std::string house;
		int max = 0;
		
		if (gryffindor > max)
		{
			max = gryffindor; 
			house = "Gryffindor";
		}
		if (hufflepuff > max)
		{
			max = hufflepuff;
			house = "Hufflepuff";
		}
		if (ravenclaw > max)
		{
			max = ravenclaw;
			house = "Ravenclaw";
		}
		if (slytherin > max)
		{
			max = slytherin;
			house = "Slytherin";
		}
	
		std::cout << house << "!\n";
	}
}
