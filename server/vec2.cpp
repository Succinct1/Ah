#include "vec2.h"

// Constructor
vec2::vec2(int x, int y) : x(x), y(y) {}

// Addition 
vec2 vec2::operator+(const vec2& other) const {
    return vec2(x + other.x, y + other.y);
}

// Addition  
vec2& vec2::operator+=(const vec2& other) {
    x += other.x;
    y += other.y;
    return *this;
}

// Subtraction 
vec2 vec2::operator-(const vec2& other) const {
    return vec2(x - other.x, y - other.y);
}

// Subtraction
vec2& vec2::operator-=(const vec2& other) {
    x -= other.x;
    y -= other.y;
    return *this;
}

// Scalar 
vec2 vec2::operator*(int scalar) const {
    return vec2(x * scalar, y * scalar);
}

// Scalar 
vec2& vec2::operator*=(int scalar) {
    x *= scalar;
    y *= scalar;
    return *this;
}

// Equality 
bool vec2::operator==(const vec2& other) const {
    return (x == other.x && y == other.y);
}

// Inequality Operator
bool vec2::operator!=(const vec2& other) const {
    return !(*this == other);
}

// Print
void vec2::print() const {
    std::cout << "vec2(" << x << ", " << y << ")" << std::endl;
}

// Cross Product
int vec2::crossProduct(const vec2& other) const {
    return (x * other.y - y * other.x);
}

// Dot Product
int vec2::dotProduct(const vec2& other) const {
    return (x * other.x + y * other.y);
}

// Normalize 
vec2 vec2::Normalize() const {
    double magnitude = std::sqrt(x * x + y * y);
    if (magnitude == 0) return vec2(0, 0);
    return vec2(static_cast<int>(x / magnitude), static_cast<int>(y / magnitude));
}
