#include "Section.hpp"

Section::Section(std::string title)
{
  this->title = title;
}

void Section::add(const Element& element)
{
  this->children.push_back(&element);
}

void Section::remove(const Element& element)
{
  throw "Not Implemented!";
}

Element& Section::get(size_t index_element)
{
  throw "Not Implemented!";
}

void Section::write(std::ostream& out)
{
  out << "Section: " << this->title << std::endl;
  for (auto child : this->children)
  {
    out << *((Element*)child) << std::endl;
  }
}