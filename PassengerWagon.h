#ifndef PASSENGERWAGONH
#define PASSENGERWAGONH

#include "AbstractWagon.h"

namespace simasciitrain {

class PassengerWagon : public AbstractWagon {
 private:
  int passengerCount;

 public:
  explicit PassengerWagon(int passengerCount);
  ~PassengerWagon();
  int getPassengerCount() const;
  void setPassengerCount(int passengerCount);

 private:
  void print(std::ostream &os) const override;
};

}  // namespace simasciitrain

#endif  // PASSENGERWAGONH
