public class Main {
    public static class Person {
        public String name;
        public int age;
    }
    
    public static void main(String[] args) {
        // Declare an array of custom class objects
        Person[] people = new Person[3];

        // Initialize the objects
        people[0] = new Person();
        people[0].name = "Alice";
        people[0].age = 25;

        people[1] = new Person();
        people[1].name = "Bob";
        people[1].age = 30;

        people[2] = new Person();
        people[2].name = "Charlie";
        people[2].age = 35;

        // Access and modify elements
        people[1].age = 31;

        // Accessing elements using a loop
        for (Person person : people) {
            System.out.println("Name: " + person.name + ", Age: " + person.age);
        }
    }
}