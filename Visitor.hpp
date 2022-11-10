#pragma once

#include "Book.hpp"

class Visitor
{
public:
  void visit_book(Book book);
  /*void visit_section(Section section);
  void visit_table_of_contents(TableOfContents table_of_contents);
  void visit_paragraph(Paragraph paragraph);
  void visit_image(Image image);
  void visit_image_proxy(ImageProxy image_proxy);
  void visit_table(Table table);*/

};

