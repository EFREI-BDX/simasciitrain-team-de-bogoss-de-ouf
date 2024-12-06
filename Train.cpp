#include "Train.h"

namespace simasciitrain {

Train::Train(Wagons* wagons, AbstractLocomotive* locomotive)
    : wagons(wagons), locomotive(locomotive) {}

Train::~Train() {
  delete wagons;
  delete locomotive;
}

void Train::print(std::ostream& os) const {
  os << *wagons << "-" << *locomotive;
}

}  // namespace simasciitrain
