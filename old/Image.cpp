#include "Image.hpp"

#include<chrono>
#include<thread>

Image::Image(std::string description)
{
  this->description = description;
  std::this_thread::sleep_for(std::chrono::seconds(1));
}

void Image::add(const Element&)
{
  throw "Not Allowed!";
}

void Image::remove(const Element&)
{
  throw "Not Allowed!";
}

Element& Image::get(size_t)
{
  throw "Not Allowed!";
}

std::string Image::url()
{
  return "Image::url not implemented";
}

std::string Image::dim()
{
  return "Image::dim not implemented";
}

std::string Image::content()
{
  return "Image::content not implemented";
}

void Image::write(std::ostream& out)
{
  out << "Image: " << this->description;
}