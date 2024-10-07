#include "test_me.h"

START_TEST(abs_1) {
  int x = 1;
  ck_assert_double_eq_tol(abs(x), s21_abs(x), 0.000001);
}
END_TEST

START_TEST(abs_2) {
  int x = -1;
  ck_assert_double_eq_tol(abs(x), s21_abs(x), 0.000001);
}
END_TEST

START_TEST(abs_3) {
  int x = -10000;
  ck_assert_double_eq_tol(abs(x), s21_abs(x), 0.000001);
}
END_TEST

START_TEST(abs_4) {
  int x = 10000;
  ck_assert_double_eq_tol(abs(x), s21_abs(x), 0.000001);
}
END_TEST

START_TEST(abs_5) {
  int x = 0;
  ck_assert_double_eq_tol(abs(x), s21_abs(x), 0.000001);
}
END_TEST

START_TEST(abs_6) {
  int x = -0;
  ck_assert_double_eq_tol(abs(x), s21_abs(x), 0.000001);
}
END_TEST

START_TEST(abs_7) {
  int x = 1.5;
  ck_assert_double_eq_tol(abs(x), s21_abs(x), 0.000001);
}
END_TEST

START_TEST(abs_8) {
  int x = -1.5;
  ck_assert_double_eq_tol(abs(x), s21_abs(x), 0.000001);
}
END_TEST

START_TEST(abs_9) {
  int x = INT_MAX;
  ck_assert_double_eq_tol(abs(x), s21_abs(x), 0.000001);
}
END_TEST

START_TEST(abs_10) {
  int x = INT_MIN;
  ck_assert_double_eq_tol(abs(x), s21_abs(x), 0.000001);
}
END_TEST

Suite *test_abs(void) {
  Suite *s = suite_create("\033[45m-=s21_abs=-\033[0m");
  TCase *tc = tcase_create("abs_tc");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, abs_1);
  tcase_add_test(tc, abs_2);
  tcase_add_test(tc, abs_3);
  tcase_add_test(tc, abs_4);
  tcase_add_test(tc, abs_5);
  tcase_add_test(tc, abs_6);
  tcase_add_test(tc, abs_7);
  tcase_add_test(tc, abs_8);
  tcase_add_test(tc, abs_9);
  tcase_add_test(tc, abs_10);
  suite_add_tcase(s, tc);

  return s;
}
