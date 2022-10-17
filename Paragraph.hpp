#pragma once

#include "Element.hpp"

#include <iostream>

class Paragraph : public Element
{
public:
  Paragraph(std::string text);
  virtual ~Paragraph();
  ElementType type();
  void write(std::ostream& out);

private:
  std::string text;
  
};
