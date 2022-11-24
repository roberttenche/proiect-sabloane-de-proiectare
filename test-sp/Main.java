/*

    O firma e organizata in departamente, fiecare departament avand angajati din 3 categorii :
        Manager, Programator si Tester

    Firma si departamentul au ca si atribut nume, iar angajatii au nume, salar.

    Construiti structura necesara pentru a putea adauga la o firma departamente, subdepartamente, etc... si angajati

    Realizati o operatie de calculare a salarului platit pentru fiecare categorie de angajati, precum si totalul tuturor angajatilor.

 */

public class Main {
    public static void main(String[] args) {
        Firma nokia = new Firma("Nokia");
        Departament d = new Departament("5G");
        d.add(new Manager("Sefu'", 10000));
        d.add(new Programator("Cel Main bun", 15000));
        d.add(new Programator("Cel bun", 12000));
        d.add(new Tester("Tester", 8000));

        nokia.add(d);

        nokia.print();

        Visitor calculSalar = new ConcreteVisitor();
        d.accept(calculSalar);
        calculSalar.print();

    }
}