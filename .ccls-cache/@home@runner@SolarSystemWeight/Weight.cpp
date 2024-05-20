#include <iostream>

int main()
{
  //variables for weight on each planet in the solar system
  double weight;
  double mercury;
  double venus;
  double earth;
  double mars;
  double jupiter;
  double saturn;
  double uranus;
  double neptune;
  double pluto;

  //ask the user for their weight
  std::cout << "Enter your weight in pounds below \n";
  std::cin >> weight;

  //caculates the weight for each planet in the solar system
  mercury = weight*.38;
  venus = weight*.91;
  earth = weight;
  mars = weight*.38;
  jupiter = weight*2.4;
  saturn = weight*1.08;
  uranus = weight*.86;
  neptune = weight*1.1;
  pluto = weight*.083;

  //Diplays User weight across the solar system
  std::cout << "\nYour weight on Mercury is: " << mercury << "lbs \n";
  std::cout << "Your weight on Venus is: " << venus << "lbs \n";
  std::cout << "Your weight on Earth is: " << earth << "lbs \n";
  std::cout << "Your weight on Mars is: " << mars << "lbs \n";
  std::cout << "Your weight on Jupiter is: " << jupiter << "lbs \n";
  std::cout << "Your weight on Saturn is: " << saturn << "lbs \n";
  std::cout << "Your weight on Uranus is: " << uranus << "lbs \n";
  std::cout << "Your weight on Neptune is: " << neptune << "lbs \n";
  std::cout << "Your weight on Pluto is: " << pluto << "lbs \n";
}
