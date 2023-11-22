package HashMaps;
    
import java.util.HashMap;

public class Main {

    public static void main(String args[]) {
        HashMap<Integer, String> map = new HashMap<Integer, String>();

        map.put(0, "Winter");
        String Season = map.get(0);
        map.remove(0);
        int size = map.size();

        System.out.println("The season is: " + Season + "\nSize of map: " + size);
        map.put(0, "Winter");
        map.put(1, "Fall");

        size = map.size();
        map.clear();
        int clearSize = map.size();

        System.out.println("Size: " + size + "\nNew Size: " + clearSize);

    }
}