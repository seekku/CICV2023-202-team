// Authors: 
// date:

#pragma once;

#include "public_object/sl_boundary.h";
#include "public_object/decision.h";

class Obstacle {
public:
  int id() const { return id_; }

  void set_id(int id) { id_ = id; }
  void set_sl_boundary(const path::SLBoundary& sl_boundary);
  void set_decision();

private:
  path::SLBoundary sl_boundary_;
  path::Decision decision_;
  int id_ = 0;
};