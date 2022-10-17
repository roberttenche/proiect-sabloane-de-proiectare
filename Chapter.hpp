#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "SubChapter.hpp"

class Chapter
{
public:
  Chapter(std::string name);
  virtual ~Chapter();

  size_t createSubChapter(std::string name);
  SubChapter& get_sub_chapter(size_t index_sub_chapter);

  friend std::ostream& operator<<(std::ostream& out, const Chapter& chapter);

private:
  std::string name;
  std::vector<SubChapter> sub_chapters;
};
