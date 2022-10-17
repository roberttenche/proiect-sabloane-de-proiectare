#include "Paragraph.hpp"

Paragraph::Paragraph(std::string text)
{
  this->text = text;
}

Paragraph::~Paragraph()
{
}

void Paragraph::write(std::ostream& out)
{
  out << "Paragraph: " << this->text;
}

ElementType Paragraph::type()
{
  return ElementType::Paragraph;
}
