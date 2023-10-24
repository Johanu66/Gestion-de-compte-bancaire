#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include "gender.h"

class Person{
  public:
    Person(std::string first_name, std::string last_name, Gender gender, int age);
    std::string firstName();
    std::string lastName();
    int gender();
    int age();
  private:
    std::string _first_name;
    std::string _last_name;
    Gender _gender;
    int _age;
};

#endif