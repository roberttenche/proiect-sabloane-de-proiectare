#pragma once

#include "Element.hpp"
#include "AlignStrategy.hpp"

#include <iostream>

class Paragraph : public Element
{
public:
  Paragraph(std::string text);
  virtual ~Paragraph() {}

  void add(const Element& element);
  void remove(const Element& element);
  Element& get(size_t index_element);

  void set_alignment(const AlignStrategy& alignment);

  void write(std::ostream& out);

private:
  std::string text;
  std::string alignment = "None"; // temporary
  
};
