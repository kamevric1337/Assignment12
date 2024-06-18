#pragma once
#include"Person.h"
#include<iostream>
#include<string>

class Lecturer: public Person{
    std::string telNumber;
    std::string Faculty;

public:
    Lecturer(std::string _name, int _age, std::string _gender, std::string ID, std::string classID);
    std::string getTelNumber();
    std::string getFaculty();
    void setTelNumber(std::string);
    void setFaculty(std::string);
    void display();
};