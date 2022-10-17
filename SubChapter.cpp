#include "SubChapter.hpp"

#include "Paragraph.hpp"
#include "Image.hpp"
#include "Table.hpp"

SubChapter::SubChapter(std::string name)
{
  this->name = name;
}

SubChapter::~SubChapter()
{
}

size_t SubChapter::create_new_paragraph(std::string text)
{
  this->elements.push_back(new Paragraph(text));
  return (elements.size() - 1);
}
size_t SubChapter::create_new_image(std::string description)
{
   elements.push_back(new Image(description));
   return (elements.size()-1);
}
size_t SubChapter::create_new_table(std::string text)
{
   elements.push_back(new Table(text));
   return (elements.size()-1);
}

Element SubChapter::get_element(size_t index_element)
{
  return Element();
}

std::ostream& operator<<(std::ostream& out, const SubChapter& sub_chapter)
{
  size_t indent_size = 2;
  out << "Subchapter: " << sub_chapter.name << std::endl;
  for (auto elem : sub_chapter.elements)
  {
    out << std::string(indent_size, ' ') << *elem << std::endl;
  }
  return out;
}
