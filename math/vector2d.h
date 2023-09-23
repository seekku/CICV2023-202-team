// Authors: 
// date:

#pragma once;

namespace math
{
  struct Vector2d {
    Vector2d(double x0, double y0) {
      x = x0;
      y = y0;
    }

    Vector2d operator+(Vector2d &p1, Vector2d &p2) {
      Vector2d p;
      p.x = p1.x + p2.x;
      p.y = p1.y + p2.y;
      return p;
    }

    Vector2d operator-(Vector2d &p1, Vector2d &p2) {
      Vector2d p;
      p.x = p1.x - p2.x;
      p.y = p1.y - p2.y;
      return p;
    }

    double x = 0.0;
    double y = 0.0;
  };
} // namespace math
