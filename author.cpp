#ifndef UNTITLED1_AUTHOR_H
#define UNTITLED1_AUTHOR_H
#include <iostream>
#include <string>
using namespace std;

class Author{
    private:
    std::string name;
    std::string surname;
    public:
    Author():
    name(name), surname(surname);
    Author(std::string name, std::string surname)
        :name(name), surname(surname){};
    
    std::string getName(){
        return name;
    };
    std::string getSurname(){
        return surname;
    };
    void print(){
        std::cout << name << " " << surname << "\n";
    };
    std::string toString(){
        return name + " " + surname;
    };
};