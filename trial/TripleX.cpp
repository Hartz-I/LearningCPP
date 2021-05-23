//preprocessor directive
#include <iostream>

int main() 
{
    //std:: cout << "Hello World!";

    //expression statements
    // Print the welcome massages to terminal
    std:: cout << "In the land of mathlocus there lies the mythic city of zeros. You are a prisoner in the central jail of zeros living your life meditating while amending your sins. \n";
    //std:: cout << std::endl;
    std:: cout << "Though you are supposed to spend rest of your life there, the devines are pleased with your worship. So you are given an opportunity to flee the prison. what will you do? \n"; //<<std:: endl;

    //declaration statements
    //declare 3 number code
    const int CodeA = 4;
    const int CodeB = 5;
    const int CodeC = 6;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    //expression statements
    //Print CodeSum and product on the terminal
    std:: cout << std:: endl;
    std:: cout << "+ There are 3 numbers in the lock! \n"; //<< std:: endl;
    std:: cout << "+ The code add-up to: " <<CodeSum ;
    std:: cout <<"\n+ The codes multiply to give: "<< CodeProduct << std:: endl;

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
    }

    else 
    {
        std:: cout << "You have failed and died!";
    }

    return 0; //return statement
}