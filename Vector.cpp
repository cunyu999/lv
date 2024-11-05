#include <iostream>  
#include <cmath>  
class Vector {  
private:  
    double x;  
    double y;  
  
public:  
    Vector(double x_val, double y_val) : x(x_val), y(y_val) {}  
    Vector addVector(const Vector& other) const {  
        return Vector(x + other.x, y + other.y);  
    }   
    void print() const {  
        std::cout << "(" << x << ", " << y << ")" << std::endl;  
    }  
    void dir() const {  
        double magnitude = std::sqrt(x * x + y * y);  
        std::cout << "Magnitude: " << magnitude << std::endl;  
    }  
};  
  
int main() {  
    Vector v1(3.0, 4.0);  
    Vector v2(1.0, 2.0);  
    std::cout << "Vector v1: ";  
    v1.print();  
    std::cout << "Vector v2: ";  
    v2.print();  
    Vector v3 = v1.addVector(v2);  
    std::cout << "Vector v3 (v1 + v2): ";  
    v3.print();  
    std::cout << "Magnitude of v3: ";  
    v3.dir();  
  
    return 0;  
}  
