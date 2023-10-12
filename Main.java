public class Main {
    public static void main(String[] args) {
        int[] source = {1, 2, 3, 4, 5};
        int[] destination = new int[source.length];
    
        System.arraycopy(source, 0, destination, 0, source.length);
    
        for (int element : destination) {
            System.out.print(element + " ");
        }
    }
}