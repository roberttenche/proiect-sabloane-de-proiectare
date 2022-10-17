#pragma once

#include <iostream>
#include <string>

enum class ElementType
{
  BaseElement,
  Image,
  Paragraph,
  Table
};

class Element
{
public:
  Element();
  virtual ~Element();
  friend std::ostream& operator<<(std::ostream& out, Element& element);
  virtual void write(std::ostream& out);
  

protected:
  virtual ElementType type();
  
};
