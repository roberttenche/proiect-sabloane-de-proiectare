#pragma once

#include "Element.hpp"
#include "Picture.hpp"

#include <iostream>
#include <string>

class Image : public Element, public Picture
{
public:
  Image(std::string description);
  virtual ~Image() {}

  void add(const Element& element);
  void remove(const Element& element);
  Element& get(size_t index_element);

  std::string url();
  std::string dim();
  std::string content();

  void write(std::ostream& out);

private:
  std::string description;
};
