#pragma once

#include "Element.hpp"

#include <string>
#include <vector>

class Section : public Element
{
public:
  Section() {}
  Section(std::string title);
  virtual ~Section() {}

  void add(const Element& element);
  void remove(const Element& element);
  Element& get(size_t index_element);

  void write(std::ostream& out);

protected:
  std::string title;
  std::vector<const Element*> children;
};

