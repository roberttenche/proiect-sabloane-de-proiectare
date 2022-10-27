#include "Paragraph.hpp"

Paragraph::Paragraph(std::string text)
{
  this->text = text;
}

void Paragraph::add(const Element&)
{
  throw "Not Allowed!";
}

void Paragraph::remove(const Element&)
{
  throw "Not Allowed!";
}

Element& Paragraph::get(size_t)
{
  throw "Not Allowed!";
}

void Paragraph::write(std::ostream& out)
{
  out << "Paragraph: " << this->text;
}
