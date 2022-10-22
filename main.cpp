#include "Author.hpp"
#include "Book.hpp"
#include "Paragraph.hpp"

#include <iostream>

int main(int argc, char* argv[])
{

  Book noapte_buna("Noapte buna, copii!");

  Author rp_gheo("Radu Pavel Gheo");

  noapte_buna.add_author(rp_gheo);

  Section cap1("Capitolul 1");
  Section cap11("Capitolul 1.1");
  Section cap111("Capitolul 1.1.1");
  Section cap1111("Capitolul 1.1.1.1");

  noapte_buna.add(*(new Paragraph("Multumesc celor care...")));
  noapte_buna.add(cap1);

  cap1.add(*(new Paragraph("Moto capitol")));
  cap1.add(cap11);

  cap11.add(*(new Paragraph("Text from subchapter 1.1")));
  cap11.add(cap111);

  cap111.add(*(new Paragraph("Text from subchapter 1.1.1")));
  cap111.add(cap1111);

  cap1111.add(*(new Paragraph("Text from subchapter 1.1.1.1")));

  std::cout << noapte_buna << std::endl;

  return 0;
}
