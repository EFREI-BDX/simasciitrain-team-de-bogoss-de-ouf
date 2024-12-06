#ifndef ELECTRICLOCOMOTIVEH
#define ELECTRICLOCOMOTIVEH

#include "AbstractLocomotive.h"

namespace simasciitrain {

class ElectricLocomotive : public AbstractLocomotive {
 public:
  ElectricLocomotive();

  ~ElectricLocomotive() override = default;
};

}  // namespace simasciitrain

#endif  // ELECTRICLOCOMOTIVEH
