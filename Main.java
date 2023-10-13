import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        List<Integer> arrayList = new ArrayList<>(Arrays.asList(1, 2, 3, 4, 5));

        // Convert 'arrayList' to an array
        Integer[] arr = arrayList.toArray(new Integer[0]);

        // Print the array
        for (Integer value : arr) {
            System.out.print(value + " ");
        }
    }
}