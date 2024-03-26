#include "user.h"
#include "booksmap.h"
#include "dbmap.h"


User::User(BooksMap *bookMap)
    : bookMap_(bookMap){}

User::~User() {
}

std::vector<Book> User::getCollectionBooks() {
    std::cout << "---- Collection cloning ----" << std::endl;
    return bookMap_->getAllBooks();
}

std::vector<Book> User::getLibraryBooks() {
    std::cout << "---- Library cloning ----" << std::endl;
    return bookMap_->getAllBooks();
}

void User::addBookToCollection(int bookId) {
    Book book = bookMap_->getBookById(bookId, "library");
    bookMap_->addAndSaveBook(book.getId() + 1, book.getName() + "_COLLECTION", book.getAuthor(), book.getText());
}
