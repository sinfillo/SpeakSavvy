#pragma once

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <utility>

struct Book {
private:
  int id;
  std::string name_;
  std::string author_;
  std::string path_ = "";

public:
  Book() {}

  Book(int id, std::string name, std::string author, std::string path = "")
      : id(id), name_(std::move(name)), author_(std::move(author)),
        path_(std::move(path)) {}

  std::string getPath() const {
    std::cout << path_ << std::endl;
    return path_;
  }

  [[nodiscard]] int getId() const { return id; }

  std::string getName() { return name_; }

  std::string getAuthor() { return author_; }

  std::string getText() {
    std::ifstream file(path_);
    if (!file.good())
      return "File Not found";
    std::stringstream buf;
    buf << file.rdbuf();
    std::string text(buf.str());
    file.close();
    return text;
  }
};
