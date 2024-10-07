#include "s21_math.h"

long double s21_floor(double x) {
  long double res = (long long int)x;
  if (x == S21_NAN) {
    res = S21_NAN;
  } else if (x < 0 && (int)x - x != 0) {
    res = res - 1;
  }
  return res;
}