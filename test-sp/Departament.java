import java.util.ArrayList;
import java.util.List;

public class Departament implements Entity{
    public Object accept;
    List<Angajat> angajatList;
    private final String nume;
    public Departament(String nume) {
        this.nume = nume;
        this.angajatList = new ArrayList<>();
    }

    public void add(Angajat angajat) {
        this.angajatList.add(angajat);
    }

    @Override
    public void print() {
        System.out.println("Departament: " + this.nume);
        for( Angajat a : angajatList) {
            System.out.print("    ");
            a.print();
        }
    }

    @Override
    public void add(Entity a) {

    }

    @Override
    public void remove(Entity a) {

    }

    @Override
    public Entity get(int a) {
        return null;
    }

    @Override
    public void accept(Visitor visitor) {
        visitor.visitDepartament(this);
        for(Angajat a : angajatList) {
            a.accept(visitor);
        }
    }
}
