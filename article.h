/*#ifndef ARTICLE_H
#define ARTICLE_H

#include <string>
#include "author.h"
#include "article.h"

class Article {
public:
    Article();
    Article(std::string articleTitle, Author articleAuthor, int publicationYear, std::string journalName);
    Article(const Article &other);

    std::string getJournal();
    int getPublicationYear();
    Author getAuthor() const;
    std::string getTitle() const;
    void displayInfo();

private:
    std::string title;
    Author author;
    int publicationYear;
    std::string journal;
};

#endif*/
#ifndef ARTICLE_H
#define ARTICLE_H

#include <string>
#include "author.h"

using namespace std;


class Article {
private:
    string title;
    Author author;
    int publicationYear;
    string journal;

public:
    Article();

    Article(const string &articleTitle, const Author &articleAuthor, int year, const string &journalName);

    Article(const Article &other);

    void displayInfo() const;

    const string &getTitle() const;

    const Author &getAuthor() const;

    int getPublicationYear() const;

    const string &getJournal() const;
};

#endif//mleko
