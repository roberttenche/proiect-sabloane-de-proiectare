#include "Element.hpp"

#include "Paragraph.hpp"

void Element::add(const Element& element)
{
  throw "Not implemented.";
}

void Element::remove(const Element& element)
{
  throw "Not implemented.";
}

Element& Element::get(size_t index_element)
{
  throw "Not implemented.";
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
