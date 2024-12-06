#ifndef ABSTRACTWAGONH
#define ABSTRACTWAGONH

#include <ostream>
#include <string>

#include "TrainElement.h"
#include "TypeWagon.h"

namespace simasciitrain {

class AbstractWagon : public TrainElement {
 protected:
  const TypeWagon* typeWagon;

 public:
  explicit AbstractWagon(const TypeWagon* typeWagon);
  ~AbstractWagon() override = default;

  char getSymbol() const override;
  std::string getType() const override;
  void print(std::ostream& os) const override;
};

}  // namespace simasciitrain

#endif  // ABSTRACTWAGONH
