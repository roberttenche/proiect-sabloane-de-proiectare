package main_project.models;

public class DocumentManager {
    private static final DocumentManager instance = new DocumentManager();

    private Book book = null;

    private DocumentManager(){
        /* Singleton */
    }

    public static DocumentManager getInstance()
    {
        return instance;
    }

    public Book getBook() {
        return book;
    }

    public void setBook(Book book) {
        instance.book = book;
    }

}
