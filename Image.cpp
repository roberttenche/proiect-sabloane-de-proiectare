#include "Image.hpp"

Image::Image(std::string description)
{
  this->description = description;
}

void Image::add(const Element& element)
{
  throw "Not Allowed!";
}

void Image::remove(const Element& element)
{
  throw "Not Allowed!";
}

Element& Image::get(size_t index_element)
{
  throw "Not Allowed!";
}

void Image::write(std::ostream& out)
{
  out << "Image: " << this->description;
}