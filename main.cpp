#include "Author.hpp"
#include "Book.hpp"
#include "SubChapter.hpp"

#include <iostream>

int main(int argc, char* argv[])
{

  Book disco_titanic("Disco Titanic");

  Author rp_gheo("Radu Pavel Gheo");

  disco_titanic.add_author(rp_gheo);

  size_t index_chapter_one = disco_titanic.create_chapter("Capitolul 1");
  Chapter& chp1 = disco_titanic.get_chapter(index_chapter_one);
  size_t index_sub_chapter_one_one = chp1.createSubChapter("Subcapitolul 1.1");
  SubChapter& sc_one_one = chp1.get_sub_chapter(index_sub_chapter_one_one);

  sc_one_one.create_new_paragraph("Paragraph1");

  sc_one_one.create_new_paragraph("Paragraph2");
  sc_one_one.create_new_paragraph("Paragraph3");
  sc_one_one.create_new_image("Image1");
  sc_one_one.create_new_paragraph("Paragraph4");
  sc_one_one.create_new_table("Table1");
  sc_one_one.create_new_paragraph("Paragraph5");

  std::cout << disco_titanic << std::endl;

  return 0;
}
