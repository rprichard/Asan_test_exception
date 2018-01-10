#include "first.h"

extern "C" bool do_test() {
  First first;
  return first.test(32);
}
