#pragma once

#include <iostream>
#include <string>

#include "Author.hpp"
#include "Section.hpp"

class Book : public Section
{
public:
  Book(std::string title);
  virtual ~Book() {}

  void add_author(const Author& author);

  void add(const Element& element);
  void remove(const Element& element);

  Element& get(size_t index_element);

  void write(std::ostream& out);

private:
  const Author* author;

};
