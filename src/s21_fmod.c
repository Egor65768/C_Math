#include "s21_math.h"

long double s21_fmod(double x, double y) {
  long double res;
  if (y == 0) {
    res = 0.0 / 0.0;
  } else {
    long long int n = x / y;
    res = x - n * y;
  }
  return res;
}