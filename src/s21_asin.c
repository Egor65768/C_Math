#include "s21_math.h"

long double s21_asin(double x) {
  long double res = S21_NAN;
  if (x >= -1 || x <= 1) {
    res = s21_atan(x / (s21_sqrt(1 - x * x)));
  }
  return res;
}
