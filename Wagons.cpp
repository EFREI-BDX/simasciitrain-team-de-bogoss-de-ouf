#include "Wagons.h"

namespace simasciitrain {

Wagons::Wagons() : wagons() {}

Wagons::~Wagons() = default;

Wagons* Wagons::addWagon(AbstractWagon* wagon) {
  wagons.push_back(wagon);
  return this;
}

std::ostream& operator<<(std::ostream& os, const Wagons& wagons) {
  for (AbstractWagon* wagon : wagons.wagons) {
    os << *wagon;
    if (wagon != wagons.wagons.back()) {
      os << "-";
    }
  }
  return os;
}

}  // namespace simasciitrain