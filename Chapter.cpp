#include "Chapter.hpp"

#include <iostream>

Chapter::Chapter(std::string name)
{
  this->name = name;
}

Chapter::~Chapter()
{
}

size_t Chapter::createSubChapter(std::string name)
{
  this->sub_chapters.push_back(SubChapter(name));
  return (this->sub_chapters.size() - 1);
}

SubChapter& Chapter::get_sub_chapter(size_t index_sub_chapter)
{
  return this->sub_chapters[index_sub_chapter];
}

std::ostream& operator<<(std::ostream& out, const Chapter& chapter)
{
  int indent_size = 2;
  out << "Chapter: " << chapter.name;
  for( auto sub_chapter : chapter.sub_chapters)
    out << std::string(indent_size, ' ') << sub_chapter << std::endl;
  return out;
}
