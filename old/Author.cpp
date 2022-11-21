#include "Author.hpp"

#include <iostream>

Author::Author(std::string name)
{
  this->name = name;
}

Author::~Author()
{
}

std::ostream& operator<<(std::ostream& out, const Author& author)
{
  out << "Author: " << author.name;
  return out;
}
