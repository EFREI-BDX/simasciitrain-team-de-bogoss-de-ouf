#ifndef TRAINH
#define TRAINH

#include "AbstractLocomotive.h"
#include "ITrain.h"
#include "Wagons.h"

namespace simasciitrain {

class Train : public ITrain {
 private:
  Wagons* wagons;
  AbstractLocomotive* locomotive;

 public:
  Train(Wagons* wagons, AbstractLocomotive* locomotive);
  ~Train() override;

 private:
  void print(std::ostream& os) const override;
};

}  // namespace simasciitrain

#endif  // TRAINH
