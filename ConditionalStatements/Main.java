package ConditionalStatements; 

public class Main {
    public static void main(String args[]) {
        int x = 5;

        int y = 100;

        while ((y % x) == 0) {
            System.out.println(y);

            if (y == 0) {
                break;
            } else if (x == y) {
                System.out.println("x equals y");
                 y = y - 5;
            } else {
                y = y - 5;
            }
        }

        System.out.println("Now the switch statement");

        y = 100;
        int condition = y % x;

        while (y != 0) {
            switch (condition) {
                case 4:
                    System.out.println("4 remainder");          
                case 3:
                    System.out.println("3 remainder");      
                case 2:
                    System.out.println("2 remainder");  
                case 1:
                    System.out.println("1 remainder");      
                default:
                    System.out.println("no remainder");
            }
            y--;
            condition = y % x;
        }
    }
}