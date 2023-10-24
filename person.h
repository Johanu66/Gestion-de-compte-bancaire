#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include "gender.h"

class Person{
  public:
    Person(std::string first_name, std::string last_name, Gender gender, int age);
    std::string firstName() const;
    std::string lastName() const;
    int gender() const;
    int age() const;
  private:
    std::string _first_name;
    std::string _last_name;
    Gender _gender;
    int _age;
};

#endif