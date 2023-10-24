#include <iostream>
#include "person.h"
#include "transaction.h"
#include "date.h"

int main(){
  Person me("Johanu", "GANDONOU", Masculin, 55);
  std::cout << me.firstName() << " " << me.lastName() << std::endl << "Sexe: " << me.gender() << std::endl << "Age: " << me.age() << std::endl << std::endl;

  Date d1(11, 25);
  Transaction transaction(25000, d1, Depot, "Frais d'etude");
  std::cout << "Montant: " << transaction.amount() << std::endl << "Date: " << toString(transaction.date()) << std::endl << "Type: " << transaction.type() << std::endl << "Motif: " << transaction.motive() << std::endl;
  return 0;
}