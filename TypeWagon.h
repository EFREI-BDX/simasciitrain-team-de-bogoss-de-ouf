#ifndef TYPEWAGONH
#define TYPEWAGONH

#include <string>

namespace simasciitrain {
class TypeWagon {
 public:
  static const TypeWagon PASSENGER;
  static const TypeWagon FREIGHT;
  static const TypeWagon UTILITY;

  [[nodiscard]] std::string getName() const;
  [[nodiscard]] char getSymbol() const;

 private:
  std::string name;
  char symbol;

  explicit TypeWagon(std::string name, char symbol);
};
}  // namespace simasciitrain

#endif  // TYPEWAGONH
