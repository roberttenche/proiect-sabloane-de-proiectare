package main_project.models.interfaces;

public interface Element {

    void print();

    void add(Element e);

    void remove(Element e);

    Element get(int idx);

}
