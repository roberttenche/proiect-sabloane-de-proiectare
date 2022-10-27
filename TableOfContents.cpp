#include "TableOfContents.hpp"

void TableOfContents::add(const Element&)
{
  throw "Not Allowed!";
}
void TableOfContents::remove(const Element&)
{
  throw "Not Allowed!";
}
Element& TableOfContents::get(size_t)
{
  throw "Not Allowed!";
}

void TableOfContents::write(std::ostream& out)
{
  out << "TableOfContents: " << this->text;
}
