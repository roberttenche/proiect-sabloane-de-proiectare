#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "Element.hpp"

class SubChapter
{
public:
  SubChapter(std::string name);
  virtual ~SubChapter();

  size_t create_new_paragraph(std::string text);
  size_t create_new_image(std::string description);
  size_t create_new_table(std::string text);

  Element get_element(size_t index_element);

  friend std::ostream& operator<<(std::ostream& out, const SubChapter& sub_chapter);

private:
  std::string name;
  std::vector<Element*> elements;
};
