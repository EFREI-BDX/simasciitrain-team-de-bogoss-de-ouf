#ifndef ITRAINH
#define ITRAINH
#include <ostream>

namespace simasciitrain {
class ITrain {
 public:
  virtual ~ITrain() = default;

 protected:
  virtual void print(std::ostream& os) const = 0;

  friend std::ostream& operator<<(std::ostream& os, const ITrain& itrain) {
    itrain.print(os);
    return os;
  }
};
}  // namespace simasciitrain

#endif  // ITRAINH
