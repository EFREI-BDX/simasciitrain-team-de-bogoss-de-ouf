#ifndef GASOLINELOCOMOTIVEH
#define GASOLINELOCOMOTIVEH

#include "AbstractLocomotive.h"

namespace simasciitrain {

class GasolineLocomotive : public AbstractLocomotive {
 public:
  GasolineLocomotive();
  ~GasolineLocomotive() override = default;
};

}  // namespace simasciitrain

#endif  // GASOLINELOCOMOTIVEH
