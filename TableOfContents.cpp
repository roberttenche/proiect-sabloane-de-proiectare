#include "TableOfContents.hpp"

void TableOfContents::add(const Element& element)
{
  throw "Not Allowed!";
}
void TableOfContents::remove(const Element& element)
{
  throw "Not Allowed!";
}
Element& TableOfContents::get(size_t index_element)
{
  throw "Not Allowed!";
}

void TableOfContents::write(std::ostream& out)
{
  out << "TableOfContents: " << this->text;
}
