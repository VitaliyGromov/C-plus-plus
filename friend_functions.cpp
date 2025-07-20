#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Car; // Объявляем прототип класса Car. Так как Person использует Car в дружественном методе

class Person {
    private:
        short age;
        string name;
    public:
        Person(short age, string name) {
            this->age = age;
            this->name = name;
        }
        // Указываем функцию в классе Person
        friend void car_info(Car &car, Person &person);
};

class Car {
    private:
        string name;
    public:
        Car(string name) {
            this->name = name;
        }
        // Указывваем функцио в классе Car
        friend void car_info(Car &car, Person &person);
};


// Сам дружественный метод, у которого есть доступ к приватным полям
void car_info(Car &car, Person &person) {
    cout << "Person name is: " << person.name << " has car with name: " << car.name << endl;
}

int main() {
    Person person(23, "Abobiy");
    Car car("BMW");

    car_info(car, person);
    return 0;
}