#include <iostream>
#include <string>
#include "author.cpp"
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
    Article(string articleTitle, Author articleAuthor, int publicationYear, string journalName){};
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
        reurn Author;
    }
    string getTitle(){
        return title;
    }
    void displayInfo(){
        cout << "skibidi mostek" << "\n";
    }
    
};
#endif