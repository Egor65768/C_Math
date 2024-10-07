#include "test_me.h"

START_TEST(sin_1) {
  double x = 0;
  ck_assert_double_eq_tol(sin(x), s21_sin(x), 0.000001);
}
END_TEST

START_TEST(sin_2) {
  double x = S21_PI;
  ck_assert_double_eq_tol(sin(x), s21_sin(x), 0.000001);
}
END_TEST

START_TEST(sin_3) {
  double x = -0.000001;
  ck_assert_double_eq_tol(sin(x), s21_sin(x), 0.000001);
}
END_TEST

START_TEST(sin_4) {
  double x = 0.000001;
  ck_assert_double_eq_tol(sin(x), s21_sin(x), 0.000001);
}
END_TEST

START_TEST(sin_5) {
  double x = 120;
  ck_assert_double_eq_tol(sin(x), s21_sin(x), 0.000001);
}
END_TEST

START_TEST(sin_6) {
  double x = -120;
  ck_assert_double_eq_tol(sin(x), s21_sin(x), 0.000001);
}
END_TEST

START_TEST(sin_7) {
  double x = S21_PI_2;
  ck_assert_double_eq_tol(sin(x), s21_sin(x), 0.000001);
}
END_TEST

START_TEST(sin_8) {
  double x = -S21_PI_2;
  ck_assert_double_eq_tol(sin(x), s21_sin(x), 0.000001);
}
END_TEST

START_TEST(sin_9) {
  double x = -S21_PI;
  ck_assert_double_eq_tol(sin(x), s21_sin(x), 0.000001);
}
END_TEST

START_TEST(sin_10) {
  double x = 9483082.47592;
  ck_assert_double_eq_tol(sin(x), s21_sin(x), 0.000001);
}
END_TEST

START_TEST(sin_11) {
  double x = 100000000000;
  ck_assert_double_eq_tol(sin(x), s21_sin(x), 0.000001);
}
END_TEST

START_TEST(sin_12) {
  double x = -100000000000;
  ck_assert_double_eq_tol(sin(x), s21_sin(x), 0.000001);
}
END_TEST

START_TEST(sin_13) {
  double x = 0.00274;
  ck_assert_double_eq_tol(sin(x), s21_sin(x), 0.000001);
}
END_TEST

START_TEST(sin_14) {
  double x = 1.0 / 0.0;
  long double value1 = sin(x);
  long double value2 = s21_sin(x);
  ck_assert(isnan(value1) && isnan(value2));
}
END_TEST

START_TEST(sin_15) {
  double x = 0.0 / 0.0;
  long double value1 = sin(x);
  long double value2 = s21_sin(x);
  ck_assert(isnan(value1) && isnan(value2));
}
END_TEST

START_TEST(sin_16) {
  double x = 3 * S21_PI;
  ck_assert_double_eq_tol(sin(x), s21_sin(x), 0.000001);
}
END_TEST

START_TEST(sin_17) {
  double x = 17 * S21_PI_2;
  ck_assert_double_eq_tol(sin(x), s21_sin(x), 0.000001);
}
END_TEST

START_TEST(sin_18) {
  double x = S21_PI * 24;
  ck_assert_double_eq_tol(sin(x), s21_sin(x), 0.000001);
}
END_TEST

START_TEST(sin_19) {
  double x = 3 * S21_PI;
  ck_assert_double_eq_tol(sin(x), s21_sin(x), 0.000001);
}
END_TEST

START_TEST(sin_20) {
  double x = 0;
  ck_assert_double_eq_tol(sin(x), s21_sin(x), 0.000001);
}
END_TEST

START_TEST(sin_21) {
  double x = 2642874 * S21_PI;
  ck_assert_double_eq_tol(sin(x), s21_sin(x), 0.000001);
}
END_TEST

Suite *test_sin(void) {
  Suite *s = suite_create("\033[45m-=S21_sin=-\033[0m");
  TCase *tc = tcase_create("sin_tc");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, sin_1);
  tcase_add_test(tc, sin_2);
  tcase_add_test(tc, sin_3);
  tcase_add_test(tc, sin_4);
  tcase_add_test(tc, sin_5);
  tcase_add_test(tc, sin_6);
  tcase_add_test(tc, sin_7);
  tcase_add_test(tc, sin_8);
  tcase_add_test(tc, sin_9);
  tcase_add_test(tc, sin_10);
  tcase_add_test(tc, sin_11);
  tcase_add_test(tc, sin_12);
  tcase_add_test(tc, sin_13);
  tcase_add_test(tc, sin_14);
  tcase_add_test(tc, sin_15);
  tcase_add_test(tc, sin_16);
  tcase_add_test(tc, sin_17);
  tcase_add_test(tc, sin_18);
  tcase_add_test(tc, sin_19);
  tcase_add_test(tc, sin_20);
  tcase_add_test(tc, sin_21);
  suite_add_tcase(s, tc);

  return s;
}
