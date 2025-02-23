#ifndef VEC2_H
#define VEC2_H

#include <cmath>
#include <iostream>

class vec2 {
public:
    int x;
    int y;
    vec2(int x = 0, int y = 0);

    vec2 operator+(const vec2& other) const;
    vec2& operator+=(const vec2& other);
    vec2 operator-(const vec2& other) const;
    vec2& operator-=(const vec2& other);
    vec2 operator*(int scalar) const;
    vec2& operator*=(int scalar);
    vec2 operator/(int scalar);
    bool operator==(const vec2& other) const;
    bool operator!=(const vec2& other) const;


    void print() const;
    int crossProduct(const vec2& other) const;
    int dotProduct(const vec2& other) const;
    vec2 Normalize() const;
};

#endif // VEC2_H