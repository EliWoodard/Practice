package IterationStatements;

public class Main {
    public static void main(String args[]) {
        int i = 0;

        for (i = 0; i < 5; i++) {
            System.out.println("i is: " + i);
        }

        i = 0;
        System.out.println();

        while (i < 5) {
            System.out.println("i is: " + i);
            i++;
        }
    }
}