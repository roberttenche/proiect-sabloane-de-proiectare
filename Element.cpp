#include "Element.hpp"

#include "Paragraph.hpp"

Element::Element()
{
}

Element::~Element()
{
}

ElementType Element::type()
{
  return ElementType::BaseElement;
}

void Element::write(std::ostream& out)
{
  out << "Element: BaseElement";
}

std::ostream& operator<<(std::ostream& out, Element& element)
{
  element.write(out);
  return out;
}
