package models;

import interfaces.Element;

import java.util.ArrayList;
import java.util.List;

public class Book extends Section {
    private Author autor;

    public Book(String title) {
        super(title);
    }

    public int addContent(Element e) {
        this.elements.add(e);
        return this.elements.size() - 1;
    }

    public void print() {
        System.out.println("Book: " + this.title);

        autor.print();

        for (Element e : this.elements)
            e.print();
    }

    public void addAuthor(Author autor) {
        this.autor = autor;
    }
}
