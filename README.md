# LightUpTheNewWorld : Chapter 1 Basic Array

## How to run

### C++
```shell
g++ Main.cpp -o main
.\main
```

### Java
```shell
javac Main.java
java Main
```

### TypeScript
```shell
ts-node Main.ts
```

### Python
```shell
python Main.py
```

## Array basics in C++, Java, TypeScript, Python
```cpp
#include <iostream>
using namespace std;

int main(){
    int myArray[5] = {1, 2, 3, 4, 5};

    myArray[2] = 10;

    for (int element : myArray) {
        cout << element << " ";
    }

    return 0;
}
```

```java
public class Main {
    public static void main(String[] args) {
        int[] myArray = {1, 2, 3, 4, 5};

        myArray[2] = 10;

        for (int element : myArray){
            System.out.print(element + " ");
        }
    }
}
```

```TypeScript
let myArray: number[] = [1, 2, 3, 4, 5];

myArray[2] = 10;

for (let lelment of myArray){
    console.log(lelment);
}
```

```python
myArray = [1, 2, 3, 4, 5]

myArray[2] = 10

for element in myArray:
    print(element, end=" ")
```

<details>
<summary>Output : </summary>

```
1 2 10 4 5
```

</details>

## Array with class in C++, Java, TypeScript, Python
```CPP
#include <iostream>
#include <string>

class Person{

public:
    std::string name;
    int age;
};

int main(){
    Person people[3];

    people[0].name = "Alice";
    people[0].age = 25;

    people[1].name = "Bob";
    people[1].age = 30;

    people[2].name = "Charlie";
    people[2].age = 35;

    people[1].age = 31;

    for (const Person& person : people) {
        std::cout << "Name: " << person.name << ", Age: " << person.age << std::endl;
    }
    
    return 0;
}
```

```java
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
```

```TypeScript
class Person {
    name: string;
    age: number;
    
    constructor(name: string, age: number) {
        this.name = name;
        this.age = age;
    }
}

// Declare an array of custom class objects
let people: Person[] = [];

// Initialize the objects
people.push({name: "Alice", age: 25});
people.push({name: "Bob", age: 30});
people.push({name: "Charlie", age: 35});

// Access and modify elements
people[1].age = 31;

// Accessing elements using a loop
for (let person of people) {
    console.log(`Name:  ${person.name}, Age: ${person.age}`);
}
```

```python
class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

# Declare an array of custom class objects
people = []

# Initialize the objects
people.append(Person("Alice",25))
people.append(Person("Bob", 30))
people.append(Person("Charlie", 35))

# Access and modify elements
people[1].age = 31

# Accessing elements using a loop
for person in people:
    print(f"Name:  {person.name}, Age: {person.age}")
```

---

## Makes C and Java look more compact. (similar to TypeScript and Python)
The following C and Java languages do not use basic Arrays, but use additional tools. This will be in other future lessons.
```C++
#include <iostream>
#include <vector>

class Person{
public:
    std::string name;
    int age;
    
    Person(std::string name, int age) : name(name), age(age) {}
};

int main(){
    std::vector<Person> people;

    people.push_back(Person("Alice", 25));
    people.push_back(Person("Bob", 30));
    people.push_back(Person("Charlie", 35));

    people[1].age = 31;

    for (const Person& person : people) {
        std::cout << "Name: " << person.name << ", Age: " << person.age << std::endl;
    }
    
    return 0;
}
```

```java
import java.util.ArrayList;

public class Main {
    public static class Person {
        public String name;
        public int age;

        public Person(String name, int age) {
            this.name = name;
            this.age = age;
        } 
    }
    
    public static void main(String[] args) {
        // Declare an array of custom class objects
        ArrayList<Person> people = new ArrayList<>();

        // Initialize the objects
        people.add(new Person("Alice", 25));
        people.add(new Person("Bob", 30));
        people.add(new Person("Charlie", 35));

        // Access and modify elements
        people.get(1).age = 31;

        // Accessing elements using a loop
        for (Person person : people) {
            System.out.println("Name: " + person.name + ", Age: " + person.age);
        }
    }
}
```

---