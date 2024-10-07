#include "s21_math.h"

long double s21_ceil(double x) {
  long double ceil_x = (long long int)x;
  if (x == S21_DBL_MAX) {
    ceil_x = S21_DBL_MAX;
  } else if (s21_fabs(x) > 0.0 && x != ceil_x) {
    if (x > 0) {
      ceil_x += 1;
    }
  }
  return ceil_x;
}
