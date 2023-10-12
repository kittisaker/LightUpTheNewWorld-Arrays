import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        Integer[] arr = {1, 2, 3, 4, 5};

        List<Integer> arrayList = new ArrayList<>(Arrays.asList(arr));
    
        for(int value : arrayList){
            System.out.print(value + " ");
        }
    }
}