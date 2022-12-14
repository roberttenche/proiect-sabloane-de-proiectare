#include "Book.hpp"

#include "Author.hpp"

#include <vector>

Book::Book(std::string title)
{
  this->title = title;
}

void Book::add_author(const Author& auth)
{
  this->author = &auth;
}

void Book::add(const Element& element)
{

  this->children.push_back(&element);
}

void Book::remove(const Element& element)
{
  throw "Not implemented.";
}

Element& Book::get(size_t index_element)
{
  throw "Not implemented.";
}

void Book::write(std::ostream& out)
{
  out << "Book: " << this->title << std::endl;
  
  if (this->author != nullptr) out << *this->author << std::endl;
  else out << "Author: null" << std::endl;

  for (auto child : this->children)
  {
    out << *((Element*)child) << std::endl;
  }
}
