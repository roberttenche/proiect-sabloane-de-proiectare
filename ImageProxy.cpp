#include "ImageProxy.hpp"

#include<chrono>
#include<thread>

ImageProxy::ImageProxy(std::string description)
{
  this->description = description;
}

ImageProxy::~ImageProxy() {
  delete this->img;
}

void ImageProxy::add(const Element& element)
{
  throw "Not Allowed!";
}

void ImageProxy::remove(const Element& element)
{
  throw "Not Allowed!";
}

Element& ImageProxy::get(size_t index_element)
{
  throw "Not Allowed!";
}

std::string ImageProxy::url()
{
  return "ImageProxy::url not implemented";
}

std::string ImageProxy::dim()
{
  return "ImageProxy::dim not implemented";
}

std::string ImageProxy::content()
{
  return "ImageProxy::content not implemented";
}

void ImageProxy::write(std::ostream& out)
{
  this->img = new Image(this->description);
  out << *this->img;
}
