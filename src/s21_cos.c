#include "s21_math.h"

long double s21_cos(double x) {
  long int factorial = 1;
  long double res, x1, number_sequence;
  int sign_number = 1, sign_res = 1;
  if (x != x || x == -1.0 / 0.0 || x == 1.0 / 0.0) {
    res = S21_NAN;
  } else {
    x = s21_fabs(x);
    x1 = s21_fmod(x, 2 * S21_PI);
    if (x1 > S21_PI_2 && x1 < 3 * S21_PI_2) {
      sign_res = -1;
    }
    if (x1 > S21_PI_2) {
      if (x1 >= S21_PI && x1 < 3 * S21_PI_2) {
        x1 = s21_fmod(x1, S21_PI_2);
      } else {
        x1 = S21_PI_2 - s21_fmod(x1, S21_PI_2);
      }
    }
    if (x1 < S21_BORDER) {
      res = 1;
      for (int i = 1; i < 26; i++) {
        factorial = factorial * (2 * i) * (2 * i - 1);
        sign_number = -sign_number;
        number_sequence =
            sign_number * (s21_pow(x1, 2 * i) / (long double)factorial);
        res = res + number_sequence;
      }
    } else {
      res = 0;
      sign_number = -sign_number;
      for (int i = 1; i < 24; i++) {
        if (i != 1) {
          factorial = factorial * (2 * i - 1) * (2 * i - 2);
        }
        sign_number = -sign_number;
        number_sequence =
            sign_number * (s21_pow(-x1 + S21_PI_2, 2 * i - 1) / factorial);
        res = res + number_sequence;
      }
    }
    res = res * sign_res;
    if (x == 0) {
      res = 1;
    }
  }
  return res;
}
