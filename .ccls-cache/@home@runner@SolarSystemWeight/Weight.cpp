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
  int planet;

  //ask the user for their weight and gives them a list of planets
  std::cout << "Enter your weight in pounds below \n";
  std::cin >> weight;
  std::cout << "\nHeres a list of planets:\n";
  std::cout << " 1.Mercury\n 2.Venus\n 3.Earth\n 4.Mars\n 5.Jupiter\n 6.Saturn\n 7.Uranus\n 8.Neptune \n 9.Pluto\n 10.All";
  std::cout << "\nEnter the number 1-10 planet you want to know your weight on:\n";
  std::cin >> planet;

  //caculates the weight for each planet in the solar system based on the number entern and diplays thiert weight
  switch(planet)
  {
    //mecury
    case 1:
      mercury = weight*.38;
      std::cout << "Your weight on Mercury is: " << mercury << "lbs \n";
      break;
    //venus
    case 2:
      venus = weight*.91;
      std::cout << "Your weight on Venus is: " << venus << "lbs \n";
      break;
    //earth
    case 3:
      earth = weight;
      std::cout << "Your weight on Earth is: " << earth << "lbs \n";
      break;
    //mars
    case 4:
      mars = weight*.38;
      std::cout << "Your weight on Mars is: " << mars << "lbs \n";
      break;
    //jupiter
    case 5:
      jupiter = weight*2.4;
      std::cout << "Your weight on Jupiter is: " << jupiter << "lbs \n";
      break;
    //saturn
    case 6:
      saturn = weight*1.08;
      std::cout << "Your weight on Saturn is: " << saturn << "lbs \n";
      break;
    //uranus
    case 7:
      uranus = weight*.86;
      std::cout << "Your weight on Uranus is: " << uranus << "lbs \n";
      break;
    //neptune
    case 8:
      neptune = weight*1.1;
      std::cout << "Your weight on Neptune is: " << neptune << "lbs \n";
      break;
    //pluto
    case 9:
      pluto = weight*.083;
      std::cout << "Your weight on Pluto is: " << pluto << "lbs \n";
      break;
    case 10:
      mercury = weight*.38;
      std::cout << "\nYour weight on Mercury is: " << mercury << "lbs \n";
      venus = weight*.91;
      std::cout << "Your weight on Venus is: " << venus << "lbs \n";
      earth = weight;
      std::cout << "Your weight on Earth is: " << earth << "lbs \n";
      mars = weight*.38;
      std::cout << "Your weight on Mars is: " << mars << "lbs \n";
      jupiter = weight*2.4;
      std::cout << "Your weight on Jupiter is: " << jupiter << "lbs \n";
      saturn = weight*1.08;
      std::cout << "Your weight on Saturn is: " << saturn << "lbs \n";
      uranus = weight*.86;
      std::cout << "Your weight on Uranus is: " << uranus << "lbs \n";
      neptune = weight*1.1;
      std::cout << "Your weight on Neptune is: " << neptune << "lbs \n";
      pluto = weight*.083;
      std::cout << "Your weight on Pluto is: " << pluto << "lbs \n";
      break;
    //Errors
    default:
    std::cout << "It seems yoou entered an invalind number \n";
  }
 
}
