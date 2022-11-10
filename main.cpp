#include "Author.hpp"
#include "Book.hpp"
#include "Paragraph.hpp"
#include "ImageProxy.hpp"
#include "AlignLeft.hpp"
#include "AlignRight.hpp"

#include <iostream>
#include <chrono>

int main()
{

  Section cap1("Capitol 1");
  Paragraph p1("Paragraf 1");
  Paragraph p2("Paragraf 2");
  Paragraph p3("Paragraf 3");
  Paragraph p4("Paragraf 4");
  cap1.add(p1);
  cap1.add(p2);
  cap1.add(p3);
  cap1.add(p4);

  p1.set_alignment(*new AlignLeft());

  std::cout << cap1 << std::endl;

  return 0;
}
