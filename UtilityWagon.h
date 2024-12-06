#ifndef UTILITYWAGONH
#define UTILITYWAGONH

#include "AbstractWagon.h"

namespace simasciitrain {
class UtilityWagon : public AbstractWagon {
 public:
  explicit UtilityWagon();
  ~UtilityWagon();

 private:
  void print(std::ostream &os) const override;
};

}  // namespace simasciitrain

#endif  // UTILITYWAGONH
