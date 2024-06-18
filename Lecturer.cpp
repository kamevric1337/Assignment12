#include"Lecturer.h"

Lecturer::Lecturer(std::string _name, int _age, std::string _gender, std::string _ID, std::string _classID): Person(_name, _age, _gender)
{
    telNumber = _ID;
    Faculty = _classID;
}

std::string Lecturer::getTelNumber()
{
    return telNumber;
}

std::string Lecturer::getFaculty()
{
    return Faculty;
}

void Lecturer::setTelNumber(std::string _ID)
{
    telNumber = _ID;
}

void Lecturer::setFaculty(std::string _classID)
{
    Faculty = _classID;
}

void Lecturer::display()
{
    Person::display();
    std::cout << "\nTelephone number: " << telNumber;
    std::cout << "\nFaculty:  " << Faculty;
}