#pragma once

#include "Element.hpp"

#include <string>

class Table : public Element
{
public:
  Table(std::string name);
  virtual ~Table() {}

  void add(const Element& element);
  void remove(const Element& element);
  Element& get(size_t index_element);

  void write(std::ostream& out);

private:
  std::string name;
};
