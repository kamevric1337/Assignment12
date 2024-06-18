#pragma once
#include"Person.h"
#include<iostream>
#include<string>

class Student: public Person{
    std::string ID;
    std::string classID;

public:
    Student(std::string _name, int _age, std::string _gender, std::string ID, std::string classID);
    std::string getID();
    std::string getClassID();
    void setID(std::string);
    void setClassID(std::string);
    void display();
};