#include "s21_math.h"

long double s21_atan(double x) {
  long double result;
  if (x > 1) {
    result = S21_PI_2 - s21_atan(1 / x);
  } else if (x < -1) {
    result = -S21_PI_2 - s21_atan(1 / x);
  } else {
    double y = x / (1 + s21_sqrt(1 + x * x));
    long double sum_atan = 0.0;
    for (register int i = 0; i < 300; i++) {
      sum_atan += s21_pow(-1, i) * s21_pow(y, 1 + (2 * i)) / (1 + (2 * i));
    }
    result = 2 * sum_atan;
  }
  return result;
}
