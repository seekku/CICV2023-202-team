// Authors: 
// date:

#pragma once;

namespace path {

struct SLBoundary {
  double center_s() { return (min_s + max_s) / 2.0; }
  double center_l() { return (min_l + max_l) / 2.0; }

  double min_s = 0.0;
  double max_s = 0.0;
  double min_l = 0.0;
  double max_l = 0.0;
};

}  // namespace path