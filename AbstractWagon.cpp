#include "AbstractWagon.h"

using namespace simasciitrain;

AbstractWagon::AbstractWagon(const TypeWagon* typeWagon)
    : typeWagon(typeWagon) {}

char AbstractWagon::getSymbol() const { return typeWagon->getSymbol(); }

std::string AbstractWagon::getType() const { return typeWagon->getName(); }

void AbstractWagon::print(std::ostream& os) const {
  os << "[" << getSymbol() << "]";
}
