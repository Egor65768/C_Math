#include "s21_math.h"

long double s21_pow(double base, double exponent) {
  long double res;
  if (exponent == 0 || base == 1 || (base == -1 && exponent == S21_INF) ||
      (exponent == 0 && base == 0)) {
    res = 1;
  } else if ((s21_fabs(base) < 1 && exponent == S21_MIN_INF) ||
             (s21_fabs(base) > 1 && exponent == S21_INF) ||
             (base == S21_INF && exponent > 0) ||
             (base == S21_MIN_INF &&
              ((exponent > 0 && (int)exponent % 2 == 0) ||
               (exponent == S21_INF)))) {
    res = S21_INF;
  } else if ((base < 0 && (int)exponent - exponent != 0) || base != base ||
             exponent != exponent) {
    res = S21_NAN;
  } else if ((base == 0 && exponent > 0) ||
             (s21_fabs(base) > 1 && exponent == S21_MIN_INF) ||
             (s21_fabs(base) < 1 && exponent == S21_INF) ||
             (base == S21_INF && exponent < 0) ||
             (base == S21_MIN_INF &&
              (exponent < 0 && (int)exponent % 2 == 0))) {
    res = 0;
  } else if (base == S21_MIN_INF && (exponent > 0 && (int)exponent % 2 != 0)) {
    res = S21_MIN_INF;

  } else if ((int)exponent - exponent == 0) {
    res = 1;
    for (int i = 0; i < s21_abs(exponent); i++) {
      res = res * base;
    }
    if (exponent < 0) {
      res = 1 / res;
    }
  } else {
    base = s21_fabs(base);
    res = s21_exp(exponent * s21_log(base));
  }
  return res;
}
