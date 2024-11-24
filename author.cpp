/*#ifndef UNTITLED1_AUTHOR_H
#define UNTITLED1_AUTHOR_H
#include <iostream>
#include <string>
#include "author.h"
using namespace std;

class Author{
    private:
    string name;
    string surname;
    public:
    Author():
    name(""), surname(""){};
    uthor(string name, string surname)
        :name(name), surname(surname){};
    
    string getName(){
        return name;
    };
    string getSurname(){
        return surname;
    };
    void print(){
        cout << name << " " << surname << "\n";
    };
    string toString(){
        return name + " " + sAurname;
    };
};
#include "author.h"
#include <iostream>

Author::Author():
    name(""), surname(""){};

Author::Author(std::string firstName, std::string lastName)
    : name(firstName), surname(lastName) {}

std::string Author::getName() const {
    return name;
}

std::string Author::getSurname() const {
    return surname;
}

void Author::print() const {
    std::cout << name << " " << surname << "\n";
}

std::string Author::toString() const {
    return name + " " + surname;
}*/
//
// Created by nwaszkowiak on 07.11.23.
//

#include <iostream>
#include "author.h"

Author::Author(const string& name, const string& surname)
        : name(name), surname(surname) {}

void Author::print() {
    std::cout << name << " " << surname << std::endl;
}

string Author::toString() const{
    return name + " " + surname;;
}

const string &Author::getName() const {
    return name;
}

const string &Author::getSurname() const {
    return surname;
}//freak ahhh
