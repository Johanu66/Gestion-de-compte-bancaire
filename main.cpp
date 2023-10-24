#include <iostream>
#include "person.h"

int main(){
  Person me("Johanu", "GANDONOU", Masculin, 55);
  std::cout << me.firstName() << " " << me.lastName() << std::endl << "Sexe: " << me.gender() << std::endl << "Age: " << me.age() << std::endl;
  return 0;
}