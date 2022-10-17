#include "Table.hpp"

Table::Table(std::string name)
{
  this->name = name;
}

void Table::write(std::ostream& out)
{
  out << "Table: " << this->name;
}

Table::~Table()
{
}
