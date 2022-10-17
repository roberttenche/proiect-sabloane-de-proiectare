#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "Author.hpp"
#include "Chapter.hpp"

class Book
{
public:
  Book(std::string title);
  virtual ~Book();

  void add_author(const Author& author);

  size_t create_chapter(std::string chapter_name);
  Chapter& get_chapter(size_t index_chapter);

  friend std::ostream& operator<<(std::ostream& out, const Book& book);

private:
  std::vector<Chapter> chapters;
  std::string title;
  const Author* author;
};
