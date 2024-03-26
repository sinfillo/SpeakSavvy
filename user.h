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
public:

    User(BooksMap *bookRep);

    ~User();

    std::vector<Book> getCollectionBooks();

    std::vector<Book> getLibraryBooks();

    void addBookToCollection(int bookId);
};

#endif  // USER_H
