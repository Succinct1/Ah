#ifndef HITBOX_H
#define HITBOX_H

#include "vec2.h"
#include <vector>

/// @brief Base class for hitboxes
/// All hitboxes are assumed to be convex and centered at the origin
/// Certain shapes require more work to calculate collisions
/// rectangle << circle < polygon
/// Could add class for elipse or static equations or other shapes
/// Position is realtive to the body's position
class hitbox
{
public:
    vec2 pos;
    bool setPos(vec2); // True if pos is changed
    vec2 getPos();
    hitbox();
    ~hitbox();
private:
};

/// @brief Vertical Rectangle hitboxes are much faster to check collisions
/// but they might cover larger areas than desired
class rectangle : public hitbox
{
public:
    vec2 tr,bl;
    rectangle();
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