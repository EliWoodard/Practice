package Arrays;

/**
 * This is a method that uses arrays not arrayLists:
 *  List<Integer> intList = new ArrayList<>();
 *  List<String> stringList = new ArrayList<>();
 */
public class Main {
  public static void main(String args[]) {
    int[] intArray = new int[5];
    String[] stringArray = new String[5];

    for (int i = 0; i < 5; i++) {
        intArray[i] = i;
        stringArray[i] = Integer.toString(i);
    }

    for (int nums : intArray) {
        System.out.println(intArray[nums]);
    }

    System.out.println();

    for (String str : stringArray) {
        System.out.println(str);
    }
  }  
}