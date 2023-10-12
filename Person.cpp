#include <iostream>
#include <vector>
using namespace std;

class Person{
public:
    std::string name;
    int age;
    
    Person(std::string name, int age) : name(name), age(age) {}
};

int main(){
    vector<Person> people;

    people.push_back(Person("Alice", 25));
    people.push_back(Person("Bob", 30));
    people.push_back(Person("Charlie", 35));

    people[1].age = 31;

    for (const Person& person : people) {
        cout << "Name: " << person.name << ", Age: " << person.age << endl;
    }
    
    return 0;
}