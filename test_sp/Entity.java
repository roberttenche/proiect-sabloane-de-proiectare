package test_sp;
public interface Entity {
    void print();

    void add(Entity e);

    void remove(Entity e);

    Entity get(int idx);

    void accept(Visitor visitor);
}
