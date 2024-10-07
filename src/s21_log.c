#include "s21_math.h"

#define NUMBER_ITERATION 1800

long double s21_log(double x) {
  int n = 0, k = 0;
  long double res = 0;
  long double os = 0, elem = -1;
  double f;
  if (x == 0) {
    res = S21_MIN_INF;
  } else if (x < 0) {
    res = S21_NAN;
  } else if (x != x) {
    res = -S21_NAN;
  } else {
    while (x >= 10) {
      x = (double)x / 10;
      n++;
    }
    while (x >= 2) {
      x = (double)x / 2;
      k++;
    }
    f = x - 1;
    res = S21_LN10 * n + S21_LN2 * k;
    for (int i = 0; i < NUMBER_ITERATION; i++) {
      elem = elem * f * (-1);
      os = os + (elem / (i + 1));
    }
    res = res + os;
  }
  return res;
}
