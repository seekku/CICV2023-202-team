// Authors: 
// date:

#include "public_object/obstacle.h";

void Obstacle::set_sl_boundary(const path::SLBoundary& sl_boundary) {
  sl_boundary_.min_s = sl_boundary.min_s;
  sl_boundary_.max_s = sl_boundary.max_s;
  sl_boundary_.min_l = sl_boundary.min_l;
  sl_boundary_.max_l = sl_boundary.max_l;
}