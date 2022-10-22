#pragma once

#include "Element.hpp"

#include <iostream>
#include <string>

class Image : public Element
{
public:
  Image(std::string description);
  virtual ~Image() {}

  void add(const Element& element);
  void remove(const Element& element);
  Element& get(size_t index_element);

  void write(std::ostream& out);

private:
  std::string description;
};
