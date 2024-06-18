#include<iostream>
#include<string>
#include"Person.h"

Person::Person(std::string _name, int _age, std::string _gender)
{
    name = _name;
    age = _age;
    gender = _gender;
}

std::string Person::getName()
{
    return this->name;
}

std::string Person::getGender()
{
    return this->gender;
}

int Person::getAge()
{
    return this->age;
}

void Person::setName(std::string _name)
{
    this->name = _name;
}

void Person::setAge(int _age)
{
    this->age = _age;
}

void Person::setGender(std::string _gender)
{
    this->gender = _gender;
}

void Person::display()
{
    std::cout << "\nName: " << name;
    std::cout << "\nGender: " << gender;
    std::cout << "\nAge: " << age;
}





