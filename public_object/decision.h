// Authors: 
// date:

#pragma once;

namespace path {

enum class DecisionType {
  LeftNudge = 0,
  RightNudge = 1,
  Ignore = 2,
};

class Decision {
public:
  void SetDecisionType(DecisionType& decision_type);

private:
  DecisionType decision_type_;

};

}  // namespace path