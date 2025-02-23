#ifndef HITBOX_H
#define HITBOX_H

#include "vec2.h"
#include <vector>

/// @brief Base class for hitboxes
/// All hitboxes are assumed to be convex and centered at the origin
/// Certain shapes require more work to calculate collisions
/// rectangle << circle < polygon
/// Could add class for elipse or static equations or other shapes
class hitbox
{
public:
    hitbox();
    ~hitbox();
private:
};

/// @brief Rectangle hitbox
/// Size is the width and height of the rectangle
/// Delta is the distance from the center to the edge
/// Size can be negative though it may have unintended results
class rectangle : public hitbox
{
public:
    vec2* points[4];
    rectangle(int width = 0, int height = 0): points{new vec2(-width/2, -height/2), new vec2(width/2, -height/2), new vec2(width/2, height/2), new vec2(-width/2, height/2)}{};
    ~rectangle();
};

/// @brief Circle hitbox
/// Radius is the distance from the center to the edge
class circle : public hitbox
{
public:
    int radius;
    circle(int radius = 0): radius(radius){}
    ~circle();
};

/// @brief Polygon hitbox
/// Points are the vertices of the polygon
/// Points are assumed to be in order
/// Points are assumed to be convex
class polygon : public hitbox
{
public:
    std::vector<vec2> points;
    polygon(std::vector<vec2> points = {vec2(0,0)} ): points(points){};
    ~polygon();
};

#endif // HITBOX_H