#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Person; // Прототип класса Person

class Dog {
    private:
        int health = 100;
    public:
        friend class Person;
};

class Person {
    public:
        void damage(Dog &dog) {
            dog.health -= 20;
            cout << "Health: " << dog.health << endl;
        }

        void heal(Dog &dog) {
            dog.health += 10;
            cout << "Health: " << dog.health << endl;
        }

        void kill(Dog &dog) {
            dog.health = 0;
            cout << "Health: " << dog.health << endl;
        }
};

int main() {
    Dog skuby;
    Person alex;

    alex.damage(skuby);
    alex.damage(skuby);

    alex.heal(skuby);
    alex.heal(skuby);

    alex.kill(skuby);
    return 0;
}