#pragma once

#include "Element.hpp"

#include <string>

class Table : public Element
{
public:
  Table(std::string name);
  virtual ~Table();
  void write(std::ostream& out);
private:
  std::string name;
};
