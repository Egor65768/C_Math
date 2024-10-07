#include "s21_math.h"

#define NUMBER_ITERATION 100

long double s21_sqrt(double x) {
  long double res = 1;
  if (x < 0.0) {
    res = S21_NAN;
  } else {
    for (int i = 0; i < NUMBER_ITERATION; i++) {
      res = 0.5 * (res + x / res);
    }
  }
  return res;
}