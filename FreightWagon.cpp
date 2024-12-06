

#include "FreightWagon.h"

#include <iostream>

using namespace simasciitrain;

FreightWagon::FreightWagon(int count) : AbstractWagon(&TypeWagon::FREIGHT) {
  this->freightCount = count;
}

FreightWagon::~FreightWagon() {}

int FreightWagon::getFreightCount() { return this->freightCount; }

void FreightWagon::setFreightCount(int freightCount) {
  this->freightCount = freightCount;
}

void FreightWagon::print(std::ostream &os) const {
  os << "[";
  for (int i = 0; i < this->freightCount; i++) {
    os << this->getSymbol();
  }
  os << "]";
}
