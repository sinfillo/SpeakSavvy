#include "user.h"
#include "booksmap.h"
#include "dbmap.h"

User::User(BooksMap *bookMap) : bookMap_(bookMap) {}

User::~User() {}

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
  bookMap_->addAndSaveBook(book.getId() + 1, book.getName() + "_COLLECTION",
                           book.getAuthor(), book.getText());
}

bool User::isAuthorized() { return isAuth_; }

void User::init(std::string label, std::string password) {
  login_ = label;
  password_ = password;
  isAuth_ = true;
}

void User::exit() {
  login_ = "EXITED_STATUS";
  password_ = "NO_PASSWORD";
  isAuth_ = false;
}
