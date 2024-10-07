#include "test_me.h"

START_TEST(atan_1) {
  double x = 0.00001;
  ck_assert_double_eq_tol(atan(x), s21_atan(x), 0.000001);
}
END_TEST

START_TEST(atan_2) {
  double x = -0.00001;
  ck_assert_double_eq_tol(atan(x), s21_atan(x), 0.000001);
}
END_TEST

START_TEST(atan_3) {
  double x = 1;
  ck_assert_double_eq_tol(atan(x), s21_atan(x), 0.000001);
}
END_TEST

START_TEST(atan_4) {
  double x = -1;
  ck_assert_double_eq_tol(atan(x), s21_atan(x), 0.000001);
}
END_TEST

START_TEST(atan_5) {
  double x = 0;
  ck_assert_double_eq_tol(atan(x), s21_atan(x), 0.000001);
}
END_TEST

START_TEST(atan_6) {
  double x = -0;
  ck_assert_double_eq_tol(atan(x), s21_atan(x), 0.000001);
}
END_TEST

START_TEST(atan_7) {
  double x = 1.5;
  ck_assert_double_eq_tol(atan(x), s21_atan(x), 0.000001);
}
END_TEST

START_TEST(atan_8) {
  double x = -1.5;
  ck_assert_double_eq_tol(atan(x), s21_atan(x), 0.000001);
}
END_TEST

START_TEST(atan_9) {
  double x = DBL_MAX;
  ck_assert_double_eq_tol(atan(x), s21_atan(x), 0.000001);
}
END_TEST

START_TEST(atan_10) {
  double x = DBL_MIN;
  ck_assert_double_eq_tol(atan(x), s21_atan(x), 0.000001);
}
END_TEST

Suite *test_atan(void) {
  Suite *s = suite_create("\033[45m-=s21_atan=-\033[0m");
  TCase *tc = tcase_create("atan_tc");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, atan_1);
  tcase_add_test(tc, atan_2);
  tcase_add_test(tc, atan_3);
  tcase_add_test(tc, atan_4);
  tcase_add_test(tc, atan_5);
  tcase_add_test(tc, atan_6);
  tcase_add_test(tc, atan_7);
  tcase_add_test(tc, atan_8);
  tcase_add_test(tc, atan_9);
  tcase_add_test(tc, atan_10);
  suite_add_tcase(s, tc);
  return s;
}
