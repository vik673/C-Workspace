#include <iostream>

// interfaces are typically defined using abstract classes. An abstract class is a class that has at least one pure virtual function. 
// Pure virtual functions are functions that are declared in a base class but are meant to be overridden in derived classes. 

// Define an interface using an abstract class
class IShape {
    public:
        // Pure virtual function
        virtual void draw() = 0;
        virtual double area() = 0;
        virtual ~IShape() {} // Virtual destructor
};

// Implement the interface in a derived class
class Circle : public IShape {
    private:
        double radius;
    public:
        Circle(double r) : radius(r) {}
        void draw() override {
            std::cout << "Drawing a circle with radius " << radius << std::endl;
        }
        double area() override {
            return 3.14159 * radius * radius;
        }
};
    
class Rectangle : public IShape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    void draw() override {
        std::cout << "Drawing a rectangle with width " << width << " and height " << height << std::endl;
    }
    double area() override {
        return width * height;
    }
};

int main() {
    IShape* shapes[2];
    shapes[0] = new Circle(5.0);
    shapes[1] = new Rectangle(4.0, 6.0);

    for (int i = 0; i < 2; ++i) {
        shapes[i]->draw();
        std::cout << "Area: " << shapes[i]->area() << std::endl;
        delete shapes[i];
    }

    return 0;
}