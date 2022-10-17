#include "Image.hpp"

Image::Image(std::string description)
{
  this->description = description;
}

void Image::write(std::ostream& out)
{
  out << "Image: " << this->description;
}

Image::~Image()
{

}