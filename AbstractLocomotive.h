#ifndef ABSTRACTLOCOMOTIVEH
#define ABSTRACTLOCOMOTIVEH

#include <ostream>
#include <string>

#include "TrainElement.h"
#include "TypeLocomotive.h"

namespace simasciitrain {

class AbstractLocomotive : public TrainElement {
 protected:
  const TypeLocomotive* typeLocomotive;

 public:
  explicit AbstractLocomotive(const TypeLocomotive* typeLocomotive);
  ~AbstractLocomotive() override;

  char getSymbol() const override;
  std::string getType() const override;

 private:
  void print(std::ostream& os) const override;
};

}  // namespace simasciitrain

#endif  // ABSTRACTLOCOMOTIVEH
