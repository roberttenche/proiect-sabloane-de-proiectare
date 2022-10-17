#include "Book.hpp"

#include "Author.hpp"
#include "Chapter.hpp"

#include <iostream>

Book::Book(std::string title)
{
  this->title = title;
}

Book::~Book()
{
}

void Book::add_author(const Author& author)
{
  this->author = &author;
}

size_t Book::create_chapter(std::string name)
{
  this->chapters.push_back(Chapter(name));
  return (this->chapters.size() - 1);
}

Chapter& Book::get_chapter(size_t index_chapter)
{
  return this->chapters[index_chapter];
}

std::ostream& operator<<(std::ostream& out, const Book& book)
{
  out << "Book: " << book.title << std::endl
      << *book.author << std::endl;

  for (auto chapter : book.chapters)
    out << chapter << std::endl;

  return out;
}
