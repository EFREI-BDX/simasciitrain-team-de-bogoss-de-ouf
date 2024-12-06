#include "PassengerWagon.h"

#include <ostream>

#include "TypeWagon.h"

namespace simasciitrain {

PassengerWagon::PassengerWagon(int passengerCount)
    : AbstractWagon(&TypeWagon::PASSENGER), passengerCount(passengerCount) {}

PassengerWagon::~PassengerWagon() = default;

int PassengerWagon::getPassengerCount() const { return passengerCount; }

void PassengerWagon::setPassengerCount(int passengerCount) {
  passengerCount = passengerCount;
}

void PassengerWagon::print(std::ostream &os) const {
  os << "[";
  for (int i = 0; i < passengerCount; i++) {
    os << getSymbol();
  }
  os << "]";
}

}  // namespace simasciitrain