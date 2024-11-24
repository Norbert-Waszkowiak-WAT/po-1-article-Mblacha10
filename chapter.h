/*#ifndef CHAPTER_H
#define CHAPTER_H

#include <string>
#include "author.h"
#include "article.h"

using namespace std;

class Chapter {
private:
    string title;
    Author author;
    int chapterNumber;

public:
    const std::string& getTitle() const;
    const Author& getAuthor() const;
    int getChapterNumber() const;

    Chapter();

    Chapter(std::string chapterTitle, Author chapterAuthor, int chapterName);

    Chapter(const Chapter &other);

    Chapter(const Article &article);

    void displayInfo() const;
};

#endif*/
#ifndef CHAPTER_H
#define CHAPTER_H

#include <string>
#include "author.h"
#include "article.h"

using namespace std;

class Chapter {
private:
    string title;
    Author author;
    int chapterNumber;

public:
    const string &getTitle() const;

    const Author &getAuthor() const;

    int getChapterNumber() const;

    Chapter();

    Chapter(const string &chapterTitle, const Author &chapterAuthor, int number);

    Chapter(const Chapter &other);

    Chapter(const Article &article);

    void displayInfo() const;
};

#endif//I throw away my humanity JOJO!!!