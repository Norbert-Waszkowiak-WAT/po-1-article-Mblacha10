/*#ifndef AUTHOR_H
#define AUTHOR_H

#include <string>

class Author {
public:
    Author();
    Author(std::string firstName = "", std::string lastName = "");
    std::string getName() const;
    std::string getSurname() const;
    void print() const;
    std::string toString() const;

private:
    std::string name;
    std::string surname;
};

#endif // AUTHOR_H*/
//
// Created by nwaszkowiak on 07.11.23.
//

#ifndef UNTITLED1_AUTHOR_H
#define UNTITLED1_AUTHOR_H

#include <string>

using namespace std;

class Author {
private:
    string name;
    string surname;
public:
    Author() = default;

    Author(const string& name, const string& surname);

    void print();

    string toString() const;

    const string &getName() const;

    const string &getSurname() const;
};


#endif //sigma kamil
