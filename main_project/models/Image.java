package main_project.models;

import main_project.models.interfaces.Picture;

import java.util.concurrent.TimeUnit;

public class Image implements Picture {

    private final String bytes;

    public Image(String bytes) {
        super();
        this.bytes = bytes;
        try {
            TimeUnit.SECONDS.sleep(1);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }

    @Override
    public String url() {
        return null;
    }

    @Override
    public String dim() {
        return null;
    }

    @Override
    public String content() {
        return null;
    }
}
