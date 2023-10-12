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