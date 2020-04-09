//Pre-processor directive.
#include <iostream>

//Required Main function.
int main()
{
  //Expression Statements: Welcome Player.
  std::cout << std::endl;
  std::cout << "You enter an ancient magical ruin. Dust motes drift on gentle currents." << std::endl;
  std::cout << "In front of you is a slab of thick stone with dust-filled etchings." << std::endl;
  std::cout << "The etchings appear to be runic numbers on a stone door. Enter the correct code to continue." << std::endl;
  std::cout << std::endl;

  //Declaration Statements: set up the variable.
  int FirstCode = 2;
  int SecondCode = 2;
  int ThirdCode = 2;

  int CodeSum = FirstCode + SecondCode + ThirdCode;
  int CodeProduct = FirstCode * SecondCode * ThirdCode;

  //Expression Statements: feedback for player.
  std::cout << std::endl;
  std::cout << "+ There are 3 numbers in the code." << std::endl;
  std::cout << "+ The codes add up to: " << CodeSum << std::endl;
  std::cout << "+ The codes multiply to give: " << CodeProduct << std::endl;

  //Return statement for completing the function.
  return 0;
}
