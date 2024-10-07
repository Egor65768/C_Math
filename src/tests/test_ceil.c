#include "test_me.h"

START_TEST(ceil_1) {
  double x = 0.00001;
  ck_assert_double_eq_tol(ceil(x), s21_ceil(x), 0.000001);
}
END_TEST

START_TEST(ceil_2) {
  double x = -0.00001;
  ck_assert_double_eq_tol(ceil(x), s21_ceil(x), 0.000001);
}
END_TEST

START_TEST(ceil_3) {
  double x = 1;
  ck_assert_double_eq_tol(ceil(x), s21_ceil(x), 0.000001);
}
END_TEST

START_TEST(ceil_4) {
  double x = -1;
  ck_assert_double_eq_tol(ceil(x), s21_ceil(x), 0.000001);
}
END_TEST

START_TEST(ceil_5) {
  double x = 0;
  ck_assert_double_eq_tol(ceil(x), s21_ceil(x), 0.000001);
}
END_TEST

START_TEST(ceil_6) {
  double x = -0;
  ck_assert_double_eq_tol(ceil(x), s21_ceil(x), 0.000001);
}
END_TEST

START_TEST(ceil_7) {
  double x = 1.5;
  ck_assert_double_eq_tol(ceil(x), s21_ceil(x), 0.000001);
}
END_TEST

START_TEST(ceil_8) {
  double x = -1.5;
  ck_assert_double_eq_tol(ceil(x), s21_ceil(x), 0.000001);
}
END_TEST

START_TEST(ceil_9) {
  double x = DBL_MAX;
  ck_assert_double_eq_tol(ceil(x), s21_ceil(x), 0.000001);
}
END_TEST

START_TEST(ceil_10) {
  double x = DBL_MIN;
  ck_assert_double_eq_tol(ceil(x), s21_ceil(x), 0.000001);
}
END_TEST

Suite *test_ceil(void) {
  Suite *s = suite_create("\033[45m-=s21_ceil=-\033[0m");
  TCase *tc = tcase_create("ceil_tc");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, ceil_1);
  tcase_add_test(tc, ceil_2);
  tcase_add_test(tc, ceil_3);
  tcase_add_test(tc, ceil_4);
  tcase_add_test(tc, ceil_5);
  tcase_add_test(tc, ceil_6);
  tcase_add_test(tc, ceil_7);
  tcase_add_test(tc, ceil_8);
  tcase_add_test(tc, ceil_9);
  tcase_add_test(tc, ceil_10);
  suite_add_tcase(s, tc);
  return s;
}
