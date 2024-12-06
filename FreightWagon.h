

#ifndef FREIGHTWAGONH
#define FREIGHTWAGONH
#include "AbstractWagon.h"

namespace simasciitrain {

class FreightWagon : public AbstractWagon {
 private:
  int freightCount;

 public:
  explicit FreightWagon(int count);
  ~FreightWagon();

  int getFreightCount();
  void setFreightCount(int freightCount);

 private:
  void print(std::ostream &os) const override;
};

}  // namespace simasciitrain

#endif  // FREIGHTWAGONH
