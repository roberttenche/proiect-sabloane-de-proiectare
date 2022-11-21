#pragma once

#include <iostream>
#include <string>

class Element
{
public:
  Element() {}
  virtual ~Element() {}

  virtual void add(const Element& element) = 0;
  virtual void remove(const Element& element) = 0;
  virtual Element& get(size_t index_element) = 0;

  /// Needed for printing
  virtual void write(std::ostream& out) = 0;
  friend std::ostream& operator<<(std::ostream& out, Element& element);

protected:
  
};
