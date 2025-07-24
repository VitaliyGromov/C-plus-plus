// Пример статического полиморфизма 

#include <iostream>

class Math {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Math math;
    std::cout << math.add(5, 3) << std::endl;       // Вызов int add(int, int)
    std::cout << math.add(2.5, 1.5) << std::endl; // Вызов double add(double, double)
    return 0;
}


// А вот и динамический полиморфизм
#include <iostream>

class Shape {
public:
    virtual double getArea() {
        return 0.0;
    }
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double getArea() override {
        return 3.14 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double width;
    double height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double getArea() override {
        return width * height;
    }
};

int main() {
    Shape* shape1 = new Circle(5.0);
    Shape* shape2 = new Rectangle(4.0, 6.0);

    std::cout << "Area of circle: " << shape1->getArea() << std::endl;
    std::cout << "Area of rectangle: " << shape2->getArea() << std::endl;

    delete shape1;
    delete shape2;
    return 0;
}
