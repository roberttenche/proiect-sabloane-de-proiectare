#include "Table.hpp"

Table::Table(std::string name)
{
  this->name = name;
}

void Table::add(const Element& element)
{
  throw "Not Allowed!";
}

void Table::remove(const Element& element)
{
  throw "Not Allowed!";
}

Element& Table::get(size_t index_element)
{
  throw "Not Allowed!";
}

void Table::write(std::ostream& out)
{
  out << "Table: " << this->name;
}
