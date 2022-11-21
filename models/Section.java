package models;

import interfaces.Element;

import java.util.ArrayList;
import java.util.List;

public class Section implements Element {

    protected final String title;
    protected final List<Element> elements;

    public Section(String title) {
        this.title = title;
        this.elements = new ArrayList<>();
    }

    @Override
    public void print() {
        System.out.println("Section: " + title);
        for ( Element e : elements)
            e.print();
    }

    @Override
    public void add(Element e) {
        this.elements.add(e);
    }

    @Override
    public void remove(Element e) {
        this.elements.remove(e);
    }

    @Override
    public Element get(int idx) {
        return this.elements.get(idx);
    }
}
