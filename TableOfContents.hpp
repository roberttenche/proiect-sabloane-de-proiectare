#pragma once

#include "Element.hpp"

class TableOfContents : public Element
{
public:
  TableOfContents() {}
  virtual ~TableOfContents() {}

  void add(const Element& element);
  void remove(const Element& element);
  Element& get(size_t index_element);

  void write(std::ostream& out);

private:
  std::string text = "Something";
};
