#include "s21_math.h"

long double s21_tan(double x) {
  long double res;
  long double x1 = x;
  int flag = 1;
  if (x != x || x == S21_MIN_INF || x == S21_INF) {
    res = S21_NAN;
  } else {
    if (x < 0) {
      x = s21_fabs(x);
      flag = -flag;
    }
    x1 = s21_fmod(x, 2 * S21_PI);
    res = s21_sin(x1) / s21_cos(x1);
    res = res * flag;
  }

  return res;
}
