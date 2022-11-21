#pragma once

#include <iostream>
#include <string>

class Author
{
public:
  Author(std::string name);
  virtual ~Author();
  friend std::ostream& operator<<(std::ostream& out, const Author& author);

private:
  std::string name;
};
