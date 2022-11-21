#include "Section.hpp"

Section::Section(std::string title)
{
  this->title = title;
}

void Section::add(const Element& element)
{
  this->children.push_back(&element);
}

void Section::remove(const Element&)
{
  throw "Not Implemented!";
}

Element& Section::get(size_t)
{
  throw "Not Implemented!";
}

void Section::write(std::ostream& out)
{
  out << "Section: " << this->title << std::endl;
  for (auto child = this->children.begin(); child != this->children.end(); child++)
  {
    out << *((Element*)(*child));
    // last element does not add std::endl to std::ostream
    if (child != this->children.end() - 1) out << std::endl;
  }
}