#ifndef WAGONSH
#define WAGONSH

#include <vector>

#include "AbstractWagon.h"

namespace simasciitrain {

class Wagons {
 private:
  std::vector<AbstractWagon*> wagons;

 public:
  Wagons();
  ~Wagons();
  Wagons* addWagon(AbstractWagon* wagon);

  friend std::ostream& operator<<(std::ostream& os, const Wagons& wagons);
};

}  // namespace simasciitrain

#endif  // WAGONSH
