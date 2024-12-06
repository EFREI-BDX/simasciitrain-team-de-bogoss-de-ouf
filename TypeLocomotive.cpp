

#include "TypeLocomotive.h"

using namespace simasciitrain;

const TypeLocomotive TypeLocomotive::ELECTRIC =
    TypeLocomotive("Electrique", 'E');
const TypeLocomotive TypeLocomotive::GASOLINE = TypeLocomotive("Essence", 'G');

std::string TypeLocomotive::getName() const { return name; }

char TypeLocomotive::getSymbol() const { return symbol; }

TypeLocomotive::TypeLocomotive(std::string name, char symbol) {
  this->name = std::move(name);
  this->symbol = symbol;
}