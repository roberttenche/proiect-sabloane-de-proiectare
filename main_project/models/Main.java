package main_project.models;

public class Main {
    public static void main(String[] args) {
        Book myBook = new Book("My Book");
        Author me = new Author("Myself");
        myBook.addAuthor(me);

        DocumentManager.getInstance().setBook(myBook);

        Paragraph p1 = new Paragraph("Paragraph1");
        Paragraph p2 = new Paragraph("Paragraph2");
        Paragraph p3 = new Paragraph("Paragraph3");
        Paragraph p4 = new Paragraph("Paragraph4");

        myBook.addContent(p1);
        myBook.addContent(p2);
        myBook.addContent(p3);
        myBook.addContent(p4);

        DocumentManager.getInstance().getBook().print();
    }
}
