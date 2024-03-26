#ifndef BOOKSMAP_H
#define BOOKSMAP_H

#include <filesystem>
#include "book.h"
#include "dbmap.h"

struct BooksMap {
private:
    dbMap* manager_;
    std::string tableName_;
    std::filesystem::path pathToBooks_;

public:
    BooksMap(dbMap* m, std::string tableName = "collection");

    std::vector<Book> getAllBooks();

    void addBook(int id,
                 const std::string &bookName,
                 const std::string &author,
                 const std::string &filename);

    void addAndSaveBook(int id,
                        const std::string &bookName,
                        const std::string &author,
                        const std::string &text);

    void deleteBookById(int id);

    Book getBookById(int id,  std::string tableName);
    Book getLibBookById(int id);

    void clear();
};

#endif  // BOOKSMAP_H
