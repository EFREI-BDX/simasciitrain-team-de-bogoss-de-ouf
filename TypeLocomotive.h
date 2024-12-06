

#ifndef TYPELOCOMOTIVEH
#define TYPELOCOMOTIVEH

#include <string>

namespace simasciitrain {

class TypeLocomotive {
 public:
  static const TypeLocomotive ELECTRIC;
  static const TypeLocomotive GASOLINE;

  [[nodiscard]] std::string getName() const;
  [[nodiscard]] char getSymbol() const;

 private:
  std::string name;
  char symbol;

  explicit TypeLocomotive(std::string name, char symbol);
};

}  // namespace simasciitrain

#endif  // TYPELOCOMOTIVEH
