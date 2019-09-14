// This program calculates a person's height in feet (') and inches (").
#include <iostream>

int main(){
  int height_input;
  int height_feet;
  int height_inches;

  std::cout << "Please enter the person's height in inches: ";
  std::cin >> height_input;

  height_feet = height_input / 12; // gives the feet without any decimals as theyare both integers
  height_inches = height_input % 12; // gets the remainder of height as inches

  std::cout << "That person is " << height_feet << '\'' << height_inches << '\"' << std::endl;

  return 0;
}
