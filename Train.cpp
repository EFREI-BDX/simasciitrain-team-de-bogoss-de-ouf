#include "Train.h"

namespace simasciitrain {

Train::Train(Wagons* wagons, AbstractLocomotive* locomotive)
    : wagons(wagons), locomotive(locomotive) {}

Train::~Train() = default;

void Train::print(std::ostream& os) const {
  os << *wagons << "-" << *locomotive;
}

}  // namespace simasciitrain
