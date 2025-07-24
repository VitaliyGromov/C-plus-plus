#include <iostream>
#include <string>

class Product {
public:
    std::string name;
    double price;

    Product(const std::string& n, double p) : name(n), price(p) {}

    void print() {
        std::cout << "Product: " << name << ", Price: " << price << std::endl;
    }
};

int main() {
    Product products[3] = {
        {"Apple", 1.5},
        {"Banana", 0.75},
        {"Orange", 1.0}
    };

    // Вывод информации о каждом продукте
    for (int i = 0; i < 3; ++i) {
        products[i].print();
    }

    // Поиск продукта по имени
    std::string searchName = "Banana";
    for (int i = 0; i < 3; ++i) {
        if (products[i].name == searchName) {
            std::cout << "Found: ";
            products[i].print();
            break;
        }
    }

    return 0;
}

