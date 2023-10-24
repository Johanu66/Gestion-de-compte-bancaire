#include "person.h"

Person::Person(std::string first_name, std::string last_name, Gender gender, int age):
_first_name(first_name), _last_name(last_name), _gender(gender), _age(age){}

std::string Person::firstName(){
  return _first_name;
}

std::string Person::lastName(){
  return _last_name;
}

int Person::gender(){
  return _gender;
}

int Person::age(){
  return _age;
}