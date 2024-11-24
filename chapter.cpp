/*#include <iostream>
#include <string>
#include "chapter.h"


Chapter::Chapter() : title(""), author(), chapterNumber(1) {}


Chapter::Chapter(const Article& article) 
    : title(article.getTitle()), author(article.getAuthor()), chapterNumber(1) {}


Chapter::Chapter(std::string chapterTitle, Author chapterAuthor, int chapterName)
    : title(chapterTitle), author(chapterAuthor), chapterNumber(chapterName) {}


Chapter::Chapter(const Chapter &other)
    : title(other.title), author(other.author), chapterNumber(other.chapterNumber) {}


void Chapter::displayInfo() {
    std::cout << "skibidi mostek" << "\n";
}

Author Chapter::getAuthor() {
    return author;
}

std::string Chapter::getTitle() {
    return title;
}

int Chapter::getChapterNumber() {
    return chapterNumber;
}*/
#include "chapter.h"
#include <iostream>


Chapter::Chapter() : title(""), author(Author()), chapterNumber(1) {}

Chapter::Chapter(const string &chapterTitle, const Author &chapterAuthor, int number)
        : title(chapterTitle), author(chapterAuthor), chapterNumber(number) {}

Chapter::Chapter(const Chapter &other)
        : title(other.title), author(other.author), chapterNumber(other.chapterNumber) {}

Chapter::Chapter(const Article &other) : title(other.getTitle()), author(other.getAuthor()), chapterNumber(1) {}

void Chapter::displayInfo() const {
    std::cout << "Chapter " << chapterNumber <<": " << title << " by " << author.toString() << std::endl;
}

const string &Chapter::getTitle() const {
    return title;
}

const Author &Chapter::getAuthor() const {
    return author;
}

int Chapter::getChapterNumber() const {
    return chapterNumber;
}//monke
