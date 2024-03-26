#include "booksmap.h"

#include <sstream>

BooksMap::BooksMap(dbMap* m, std::string tableName): manager_(m), tableName_(tableName),
    pathToBooks_("/tmp/" + tableName_) {
    std::filesystem::create_directories(pathToBooks_);
}

void BooksMap::addBook(int id,
                      const std::string &bookName,
                      const std::string &author,
                      const std::string &filename) {
    std::ifstream file(filename);
    if (!file.good())
        throw std::runtime_error("File of book is bad");

    std::filesystem::path pathToBook = std::filesystem::absolute(filename);

    manager_->map_[tableName_][id] = {bookName, author, pathToBook.string()};
}


void BooksMap::addAndSaveBook(int id,
                             const std::string &bookName,
                             const std::string &author,
                             const std::string &text) {
    std::string filename =
        std::to_string(id) + "_" + bookName + "_" + author + ".txt";
    std::filesystem::path folder(pathToBooks_ / filename);
    std::cout << "Saving book to: " + folder.string() << std::endl;

    std::ofstream file(folder, std::ios::out);
    if (!file.good())
        throw std::runtime_error("Can't open/create file to save book");
    file << text;

    this->addBook(id, bookName, author, folder);
}

void BooksMap::deleteBookById(int id) {
    manager_->map_[tableName_].erase(id);
}

Book BooksMap::getBookById(int id, std::string tableName = "library") {
    return Book{id, manager_->map_[tableName][id][0],
                manager_->map_[tableName][id][1], manager_->map_[tableName][id][2]};
}

std::vector<Book> BooksMap::getAllBooks() {

    std::vector<Book> books;
    for(const auto& elem: manager_->map_[tableName_]) {
        books.emplace_back(
            elem.first, elem.second[0],
            elem.second[1], elem.second[2]);
    }
    return books;
}

void BooksMap::clear() {
    std::filesystem::remove_all(pathToBooks_);
    std::filesystem::create_directories(pathToBooks_);

    manager_->map_[tableName_].clear();

    std::cout << "All books deleted" << std::endl;
}