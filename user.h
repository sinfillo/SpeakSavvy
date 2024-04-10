#ifndef USER_H
#define USER_H

#define CPPHTTPLIB_OPENSSL_SUPPORT

#include <queue>

#include "book.h"
#include "word.h"
#include "dbmap.h"
#include "booksmap.h"

struct User {
private:
    BooksMap *bookMap_;
    bool isAuth_ = false;
public:
    std::string login_ = "default";
    std::string password_ = "default";
    User(BooksMap *bookRep);

    ~User();

    std::vector<Book> getCollectionBooks();

    std::vector<Book> getLibraryBooks();

    bool isAuthorized();

    void init(std::string login, std::string password);

    void exit();

    void addBookToCollection(int bookId);
};

#endif  // USER_H
