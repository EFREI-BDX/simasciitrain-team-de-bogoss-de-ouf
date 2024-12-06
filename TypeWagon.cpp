

#include "TypeWagon.h"

using namespace simasciitrain;

const TypeWagon TypeWagon::PASSENGER = TypeWagon("Passager", '0');
const TypeWagon TypeWagon::UTILITY = TypeWagon("Utilitaire", '@');
const TypeWagon TypeWagon::FREIGHT = TypeWagon("Marchandise", '#');

std::string TypeWagon::getName() const { return name; }

char TypeWagon::getSymbol() const { return symbol; }

TypeWagon::TypeWagon(std::string name, char symbol) {
  this->name = std::move(name);
  this->symbol = symbol;
}
