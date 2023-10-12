public class Main {
    public static void main(String[] args) {
        int[] myArray = {1, 2, 3, 4, 5};

        myArray[2] = 10;

        for (int element : myArray){
            System.out.print(element + " ");
        }
    }
}