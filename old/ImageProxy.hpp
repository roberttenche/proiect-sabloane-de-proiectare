#pragma once

#include "Element.hpp"
#include "Picture.hpp"
#include "Image.hpp"

class ImageProxy : public Element, public Picture
{
public:
  ImageProxy(std::string description);
  virtual ~ImageProxy();

  void add(const Element& element);
  void remove(const Element& element);
  Element& get(size_t index_element);

  std::string url();
  std::string dim();
  std::string content();

  void write(std::ostream& out);

private:
  std::string description;
  Image* img;
};

