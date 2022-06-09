
#include "Chap6.h"

int fact(int v) {
  if (v == 1) return 1;
  return v * fact(v - 1);
}