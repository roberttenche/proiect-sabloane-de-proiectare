package main_project.models;

import main_project.models.interfaces.Element;

public class Paragraph implements Element {
    private final String text;

    public Paragraph(String text) {
        this.text = text;
    }

    @Override
    public void print() {
        System.out.println("Paragraph: " + text);
    }

    @Override
    public void add(Element e) {
        throw new RuntimeException("Paragraph.add not allowed");
    }

    @Override
    public void remove(Element e) {
        throw new RuntimeException("Paragraph.remove not allowed");
    }

    @Override
    public Element get(int idx) {
        throw new RuntimeException("Paragraph.get not allowed");
    }
}
