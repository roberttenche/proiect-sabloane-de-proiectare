#include "Paragraph.hpp"

#include "AlignLeft.hpp"
#include "AlignRight.hpp"

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

void Paragraph::set_alignment(const AlignStrategy& alignment)
{
  if (dynamic_cast<AlignLeft*>((AlignStrategy*)&alignment)) this->alignment = "LeftAlignment";
  else if (dynamic_cast<AlignRight*>((AlignStrategy*)&alignment)) this->alignment = "RightAlignment";
}

void Paragraph::write(std::ostream& out)
{
  out << "Paragraph: " << this->text << " Alignment: " << this->alignment;
}
