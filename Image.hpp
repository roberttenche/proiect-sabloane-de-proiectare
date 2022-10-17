#pragma once

#include "Element.hpp"

#include <iostream>
#include <string>

class Image : public Element
{
public:
  Image(std::string description);
  virtual ~Image();
  void write(std::ostream& out);

private:
  std::string description;
};
