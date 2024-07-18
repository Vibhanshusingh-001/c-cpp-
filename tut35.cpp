#include <iostream>
// Class definition
class Car {
private:
    std::string brand;
    std::string model;
    int year;

public:
    // Constructor with parameters
    Car(std::string b, std::string m, int y) {
        brand = b;
        model = m;
        year = y;
        std::cout << "Constructor called!" << std::endl;
    }

    // Member function to display car information
    void displayInfo() {
        std::cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << std::endl;
    }

    // Destructor
    ~Car() {
        std::cout << "Destructor called!" << std::endl;
    }
};
int main() {
    // Creating an object of the Car class using the constructor
    Car myCar("Toyota", "Camry", 2022);

    // Calling a member function to display car information
    myCar.displayInfo();

    // The destructor will be automatically called when the object goes out of scope

    return 0;
}
