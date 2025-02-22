#include <iostream>
#include <cmath>

class vec2 {
public:
    int x;
    int y;

    // Constructor
    vec2(int x = 0, int y = 0) : x(x), y(y) {}

    // Addition Operator
    vec2 operator+(const vec2& other) const {
        return vec2(x + other.x, y + other.y);
    }

    // Addition Assignment Operator
    vec2& operator+=(const vec2& other) {
        x += other.x;
        y += other.y;
        return *this;
    }

    // Subtraction Operator
    vec2 operator-(const vec2& other) const {
        return vec2(x - other.x, y - other.y);
    }

    // Subtraction Assignment Operator
    vec2& operator-=(const vec2& other) {
        x -= other.x;
        y -= other.y;
        return *this;
    }

    // Scalar Multiplication
    vec2 operator*(int scalar) const {
        return vec2(x * scalar, y * scalar);
    }

    // Scalar Multiplication Assignment
    vec2& operator*=(int scalar) {
        x *= scalar;
        y *= scalar;
        return *this;
    }

    // Equality Operator
    bool operator==(const vec2& other) const {
        return (x == other.x && y == other.y);
    }

    // Inequality Operator
    bool operator!=(const vec2& other) const {
        return !(*this == other);
    }

    // Display Function (for debugging)
    void print() const {
        std::cout << "vec2(" << x << ", " << y << ")" << std::endl;
    }

    // Cross Product (2D cross product returns a scalar)
    int crossProduct(const vec2& other) const {
        return (x * other.y - y * other.x);
    }

    // Dot Product
    int dotProduct(const vec2& other) const {
        return (x * other.x + y * other.y);
    }

    // Normalize 
    vec2 Normalize() const {
        double magnitude = std::sqrt(x * x + y * y);
        if (magnitude == 0) return vec2(0, 0);
        return vec2(static_cast<int>(x / magnitude), static_cast<int>(y / magnitude));
    }

};
