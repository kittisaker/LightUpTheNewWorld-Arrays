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
