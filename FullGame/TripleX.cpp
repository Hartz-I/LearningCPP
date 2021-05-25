//preprocessor directive
#include <iostream>
#include <ctime> //to make it more random


void PrintIntroFull(int Difficulty, int GuessCount)
{

    const char *Title = R"""(
___________      .__       .__         ____  ___
\__    ___/______|__|_____ |  |   ____ \   \/  /
  |    |  \_  __ \  \____ \|  | _/ __ \ \     / 
  |    |   |  | \/  |  |_> >  |_\  ___/ /     \ 
  |____|   |__|  |__|   __/|____/\___  >___/\  \
                    |__|             \/      \_/
    )""";

    std::cout << Title << std:: endl;

    //std:: cout << "Hello World!";

    //expression statements
    // Print the welcome massages to terminal
    std:: cout << "In the land of mathlocus there lies the mythic city of zeros. You are a prisoner in the central jail of zeros living your life meditating while amending your sins. \n";
    //std:: cout << std::endl;
    std:: cout << "Though you are supposed to spend rest of your life there, the devines are pleased with your worship. So you are given an opportunity to flee the prison. what will you do? \n"; //<<std:: endl;
    std:: cout << "You choose YES! Therefore given a puzzle to solve! \n";
    std:: cout << "You are at gate " << Difficulty;
    std:: cout << ". Something is written on the wall... \n";
    std:: cout << GuessCount << " trials remaining!\n";
}

void PrintIntroCont(int Difficulty, int GuessCount)
{
    std:: cout << "\n \nYou are at gate " << Difficulty;
    std:: cout << ". Something is written on the wall... \n";
    std:: cout << GuessCount << " trials remaining! \n";
}


bool PlayGame(int Difficulty, int GuessCount) 
{

    if (Difficulty>1 || GuessCount <3)
    {
        PrintIntroCont(Difficulty, GuessCount);
    }
    else
    {
        PrintIntroFull(Difficulty, GuessCount);
    }

    //declaration statements
    //declare 3 number code
    const int CodeA = rand()%(Difficulty + 1) + Difficulty; //generates a random number from 0 to 32767
    const int CodeB = rand()%(Difficulty + 1) + Difficulty;
    const int CodeC = rand()%(Difficulty + 1) + Difficulty;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    //expression statements
    //Print CodeSum and product on the terminal
    std:: cout << std:: endl;
    std:: cout << "+ There are 3 numbers in the lock! \n"; //<< std:: endl;
    std:: cout << "+ The code add-up to: " <<CodeSum ;
    std:: cout <<"\n+ The codes multiply to give: "<< CodeProduct << std:: endl << std:: endl;

    int GuessA, GuessB, GuessC;

    //giving an input
    //store player guess
    std:: cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    //Check if the player ans is correct
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std:: cout << "You have entered the correct answer!";
        return true;
    }

    else 
    {
        if (GuessCount == 1)
        {
            std:: cout << "\nYou have failed and died! \n Starting New Game! \n \n";
        }
        else{
            std:: cout << "You have failed! Please Retry!";
        }
        return false;
    }
}

int main() 
{
    srand(time(NULL)); //create new random sequence based on time of day

    int LevelDifficulty = 1;
    int MaxDifficulty = 5;
    int GuessCount = 3;
    
    while (LevelDifficulty <= MaxDifficulty) 
    {
        //std:: cout << rand() % 9 << "\n";

        bool bLevelComplete = PlayGame(LevelDifficulty , GuessCount);
        //std:: cout << std:: endl << GuessCount << " trials remaining! \n";

        std:: cin.clear(); //clears any errors
        std:: cin.ignore(); //discards any buffer
        
        if (bLevelComplete)
        {
            ++LevelDifficulty;
            GuessCount = 3;
        }
        else
        {
            --GuessCount;
            if (GuessCount == 0)
            {
                LevelDifficulty = 1;
                GuessCount = 3;
            }
        }
    }

    std:: cout << "\n \nCongratulations! You have successfully escaped from the prison!";

    return 0; //return statement
}