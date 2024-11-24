/*#include <iostream>
#include <string>
#include "author.cpp"
#include "author.h"
using namespace std;

class Article{
    private:
    string title;
    Author author;
    int publicationYear;
    string journal;
    public:
    Article()
    : title(""), author(Author()), publicationYear(0),journal(""){};
    Article(string articleTitle, Author articleAuthor, int publicationYear, string journalName)
    : title(articleTitle), author(articleAuthor), publicationYear(publicationYear), journal(journalName){};
    Article(Article &other)
    : title(other.title), author(other.author), publicationYear(other.publicationYear), journal(other.journal){};
    string getJournal(){
        return journal;
    }
    int getPublicationYear(){
        return publicationYear;
    }
    Author getAuthor(){
        return author;
    }
    string getTitle(){
        return title;
    }
    void displayInfo(){
        cout << "skibidi mostek" << "\n";
    }
    
};
//#endif
#include "article.h"
#include "author.h"
#include <iostream>

Article::Article() 
    : title(""), author(""), publicationYear(0), journal("") {}

Article::Article(std::string articleTitle, Author articleAuthor, int publicationYear, std::string journalName)
    : title(articleTitle), author(articleAuthor), publicationYear(publicationYear), journal(journalName) {}

Article::Article(const Article &other)
    : title(other.title), author(other.author), publicationYear(other.publicationYear), journal(other.journal) {}

std::string Article::getJournal() {
    return journal;
}

int Article::getPublicationYear() {
    return publicationYear;
}

Author Article::getAuthor() {
    return author;
}

std::string Article::getTitle() {
    return title;
}

void Article::displayInfo() {
    std::cout << "Title: " << title << "\n";
    author.print();
    std::cout << "Year: " << publicationYear << ", Journal: " << journal << "\n";
}*/
#include "article.h"
#include "author.h"
#include <iostream>

Article::Article() : title(""), author(Author()), publicationYear(0), journal("") {}

Article::Article(const string &articleTitle, const Author &articleAuthor, int year, const string &journalName)
        : title(articleTitle), author(articleAuthor), publicationYear(year), journal(journalName) {}

Article::Article(const Article &other)
        : title(other.title), author(other.author), publicationYear(other.publicationYear), journal(other.journal) {}

void Article::displayInfo() const{
    std::cout << "Article: " << title << " by " << author.toString() << " (" << publicationYear << ") - " << journal << endl;
}

const string &Article::getTitle() const {
    return title;
}

const Author &Article::getAuthor() const {
    return author;
}

int Article::getPublicationYear() const {
    return publicationYear;
}

const string &Article::getJournal() const {
    return journal;
}//kot