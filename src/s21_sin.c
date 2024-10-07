#include "s21_math.h"

long double s21_sin(double x) {
  long double res;
  int sign = 1;
  int x1 = x;
  if (x != x || x == S21_MIN_INF || x == S21_INF) {
    res = S21_NAN;
  } else {
    res = s21_sqrt(1.0 - s21_pow(s21_cos(x), 2));
    if (x < 0) {
      sign *= -1;
      x *= -1;
    }
    x1 = s21_fmod(x, 2 * S21_PI);
    if (x1 > S21_PI) {
      sign *= -1;
    }
    res *= sign;
  }
  return res;
}
