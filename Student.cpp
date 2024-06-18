#include"Student.h"

Student::Student(std::string _name, int _age, std::string _gender, std::string _ID, std::string _classID): Person(_name, _age, _gender)
{
    ID = _ID;
    classID = _classID;
}

std::string Student::getID()
{
    return ID;
}

std::string Student::getClassID()
{
    return classID;
}

void Student::setID(std::string _ID)
{
    ID = _ID;
}

void Student::setClassID(std::string _classID)
{
    classID = _classID;
}

void Student::display()
{
    Person::display();
    std::cout << "\nID: " << ID;
    std::cout << "\nclassID:  " << classID;
}