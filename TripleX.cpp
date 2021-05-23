//adding liabray : collection of code written by other players
//preprocessor directive #include
#include <iostream> //header file


int main() //int means type int. int mains means the main named function returns a integer.
{ //function body
    //std::cout << "Hello World!!!" ; //std = standard ; is a name space, :: = scope operator ; whats in namespace, cout is whats defined in namespace, << output the right, "" within them string, end with ;
    
    std:: cout << "In the land of mathlocus there lies the mythic city of zeros. You are a prisoner in the central jail of zeros living your life meditating while amending your sins.";
    std:: cout << std::endl; //end line function in std namespace
    std:: cout << "Though you are supposed to spend rest of your life there, the devines are pleased with your worship. So you are given an opportunity to flee the prison. what will you do?" << std:: endl;
    std:: cout << "You choose YES! Therefore given a puzzle to solve...";

    //c = 10; can't assign before declaring

    //variable names should start with capital letters
    const int CodeA = 4; //declaring variables
    const int CodeB = 5;
    const int CodeC = 6;

    const int d = 4; //fixes a value that can't be changed
    //d = 5; won't work
    
    //assigning new value
    //a = 7 ; //= is assignment operator

    /*
    This 
    is a
    multi line
    comment
    */

    int CodeSum = CodeA + CodeB + CodeC; // - , /, * can also be used
    int CodeProduct  = CodeA * CodeB * CodeC;

    //b = 8;

    std:: cout << std::endl; //other wise goes with previous line
    //std:: cout << a;

    std:: cout << std:: endl; //or simply the \n
    //std:: cout << a + b + c;
    std:: cout << "There are three numbers in the lock! \n";
    std:: cout << "and they add up to: " << CodeSum; //using this to get new line instead of new call line

    //std:: cout << std::endl; 
    std:: cout <<"\n The codes multiply to give: "<< CodeProduct << std::endl;

    int GuessA, GuessB, GuessC;

    //giving an input
    std:: cin >> GuessA; //character input
    std:: cin >> GuessB;
    std:: cin >> GuessC;// or put all in same line

    //the input can be put in same line with space thoug with different input
    //std:: cout << "You entered: " << GuessA << GuessB << GuessC;
    //bug anything other than a number will become 0

    //this is for comparing the guesses
    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    //compare with if statements
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std:: cout << "You have entered the correct answer!";
    } else {
        std:: cout << "You have failed and died!";
    }

    return 0; //return is used as exit status
}

//int main() {return 0;}  this also work
//compiler ignores whitespace