#pragma once
#include<string>


class Person{
    std::string name;
    int age;
    std::string gender;
public:
    Person(std::string, int, std::string);
    std::string getName();
    int getAge();
    std::string getGender();
    void setName(std::string);
    void setAge(int);
    void setGender(std::string);
    void display();

};