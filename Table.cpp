#include "Table.hpp"

Table::Table(std::string name)
{
  this->name = name;
}

void Table::add(const Element&)
{
  throw "Not Allowed!";
}

void Table::remove(const Element&)
{
  throw "Not Allowed!";
}

Element& Table::get(size_t)
{
  throw "Not Allowed!";
}

void Table::write(std::ostream& out)
{
  out << "Table: " << this->name;
}
