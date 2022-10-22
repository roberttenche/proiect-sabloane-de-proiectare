#pragma once

#include "Element.hpp"

#include <iostream>

class Paragraph : public Element
{
public:
  Paragraph(std::string text);
  virtual ~Paragraph() {}

  void add(const Element& element);
  void remove(const Element& element);
  Element& get(size_t index_element);

  void write(std::ostream& out);

private:
  std::string text;
  
};
