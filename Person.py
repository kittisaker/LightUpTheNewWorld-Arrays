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