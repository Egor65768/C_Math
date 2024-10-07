#include "test_me.h"

START_TEST(log_1) {
  double x = 0;
  long double value1 = log(x);
  long double value2 = s21_log(x);
  ck_assert(value1 == value2);
}
END_TEST

START_TEST(log_2) {
  double x = -1;
  long double value1 = log(x);
  long double value2 = s21_log(x);
  ck_assert(isnan(value1) && isnan(value2));
}
END_TEST

START_TEST(log_3) {
  double x = -0.00001;
  long double value1 = log(x);
  long double value2 = s21_log(x);
  ck_assert(isnan(value1) && isnan(value2));
}
END_TEST

START_TEST(log_4) {
  double x = 0.01;
  ck_assert_double_eq_tol(log(x), s21_log(x), 0.000001);
}
END_TEST

START_TEST(log_5) {
  double x = 120.467382;
  ck_assert_double_eq_tol(log(x), s21_log(x), 0.000001);
}
END_TEST

START_TEST(log_6) {
  double x = 627456839743256973.4724;
  ck_assert_double_eq_tol(log(x), s21_log(x), 0.000001);
}
END_TEST

START_TEST(log_7) {
  double x = 1;
  ck_assert_double_eq_tol(log(x), s21_log(x), 0.000001);
}
END_TEST

START_TEST(log_8) {
  double x = 326846395454.64802;
  ck_assert_double_eq_tol(log(x), s21_log(x), 0.000001);
}
END_TEST

START_TEST(log_9) {
  double x = 10000000000000000;
  ck_assert_double_eq_tol(log(x), s21_log(x), 0.000001);
}
END_TEST

START_TEST(log_10) {
  double x = 94845364573082.47592;
  ck_assert_double_eq_tol(log(x), s21_log(x), 0.000001);
}

START_TEST(log_11) {
  double x = 0.0 / 0.0;
  long double value1 = log(x);
  long double value2 = s21_log(x);
  ck_assert(isnan(value1) && isnan(value2));
}
END_TEST

Suite *test_log(void) {
  Suite *s = suite_create("\033[45m-=S21_log=-\033[0m");
  TCase *tc = tcase_create("log_tc");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, log_1);
  tcase_add_test(tc, log_2);
  tcase_add_test(tc, log_3);
  tcase_add_test(tc, log_4);
  tcase_add_test(tc, log_5);
  tcase_add_test(tc, log_6);
  tcase_add_test(tc, log_7);
  tcase_add_test(tc, log_8);
  tcase_add_test(tc, log_9);
  tcase_add_test(tc, log_10);
  tcase_add_test(tc, log_11);
  suite_add_tcase(s, tc);

  return s;
}
