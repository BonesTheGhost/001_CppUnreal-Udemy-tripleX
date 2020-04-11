//Pre-processor directive.
#include <iostream>
#include <ctime>

void PrintIntroduction(int Difficulty)
{
  //Expression Statements: Welcome Player.
  std::cout << std::endl;
  std::cout << "\n\n You enter an ancient [Level " << Difficulty << "] magical ruin. Dust motes drift on gentle currents. \n";
  std::cout << "In front of you is a slab of thick stone with dust-filled etchings. \n";
  std::cout << "The etchings appear to be runic numbers on a stone door. Enter the correct code to continue. \n\n";
}

bool PlayGame(int Difficulty) 
{
  PrintIntroduction(Difficulty);
  
  //Declaration Statements: set up the game variables.
  //The "+Difficulty" adds a range of increase to make difficulty more dynamic based
  // on the rand() functions rolls.
  int FirstCode = rand() % Difficulty + Difficulty;
  int SecondCode = rand() % Difficulty + Difficulty;
  int ThirdCode = rand() % Difficulty + Difficulty;
  int CodeSum = FirstCode + SecondCode + ThirdCode;
  int CodeProduct = FirstCode * SecondCode * ThirdCode;

  //Expression Statements: give the instructions.
  std::cout << "+ There are 3 numbers in the code." << std::endl;
  std::cout << "+ The codes add up to: " << CodeSum << std::endl;
  std::cout << "+ The codes multiply to give: " << CodeProduct << std::endl;

  //Prompts for guesses and will return the SUM & PRODUCT of those guesses.
  int FirstPlayerGuess, SecondPlayerGuess, ThirdPlayerGuess;
  std::cout << std::endl;
  std::cout << "Please enter your three guesses: ";
  std::cin >> FirstPlayerGuess >> SecondPlayerGuess >> ThirdPlayerGuess;
  std::cout << "You guessed: " << FirstPlayerGuess << " " << SecondPlayerGuess << " " << ThirdPlayerGuess << std::endl;

  int GuessSum = FirstPlayerGuess + SecondPlayerGuess + ThirdPlayerGuess;
  int GuessProduct = FirstPlayerGuess * SecondPlayerGuess * ThirdPlayerGuess;

  if (GuessSum == CodeSum && GuessProduct == CodeProduct)
  {
    std::cout << "The runes glow slightly and the door opens!! \n";
    std::cout << "YOU WIN!";
    return true;
  }
  else 
  {
    std::cout << "\n A crackling sound is heard and some dust falls down... \n";
    std::cout << "The door is permanently sealed now. YOU LOSE! \n";
    return false;
  }
}

//Required Main function.
int main()
{
  srand(time(NULL)); // create a new random sequence based on time of day.

  //The Game Difficulty!
  int LevelDifficulty = 1;
  //The Maximum difficulty.
  int const MaxDifficulty = 10;


  while (LevelDifficulty <= MaxDifficulty && LevelDifficulty != 0)
{
  bool bLevelComplete = PlayGame(LevelDifficulty);
  std::cin.clear(); //Clears any errors
  std::cin.ignore(); //Discards the buffer

  if (bLevelComplete)
  {
    ++LevelDifficulty;
  }
  else
  {
    //Puts the LevelDifficulty outside of the range
    // of MaxLevel therby negating the while loop.
    LevelDifficulty = 0;
  }
  
}

if (LevelDifficulty > MaxDifficulty)
{
  //Game Winning Message
  std::cout << "\n\n  |||/\\/\\/\\+-+-+- You have retrieved the gift of the well!! -+-+-+/\\/\\/\\||| \n\n";
}

  std::cout << std::endl;
  system("pause");
  //Return statement for completing the function.
  return 0;
}
