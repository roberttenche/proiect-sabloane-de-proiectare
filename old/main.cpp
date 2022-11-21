#include "Element.hpp"

#include "Section.hpp"
#include "Paragraph.hpp"
#include "ImageProxy.hpp"
#include "Table.hpp"

#include <iostream>
#include <chrono>

int main()
{
  Section cap1("Capitolul 1");
  Paragraph p1("Paragraph 1");
  cap1.add(p1);
  Paragraph p2("Paragraph 2");
  cap1.add(p2);
  Paragraph p3("Paragraph 3");
  cap1.add(p3);
  Paragraph p4("Paragraph 4");
  cap1.add(p4);
  cap1.add(*new ImageProxy("ImageOne"));
  cap1.add(*new Image("ImageTwo"));
  cap1.add(*new Paragraph("Some text"));
  cap1.add(*new Table("Table 1"));

  /*BookStatistics stats = new BookStatistics();
  cap1.accept(stats);
  stats.printStatistics();*/

  return 0;
}
