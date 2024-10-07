#include "test_me.h"

START_TEST(cos_1) {
  double x = 0;
  ck_assert_double_eq_tol(cos(x), s21_cos(x), 0.000001);
}
END_TEST

START_TEST(cos_2) {
  double x = S21_PI;
  ck_assert_double_eq_tol(cos(x), s21_cos(x), 0.000001);
}
END_TEST

START_TEST(cos_3) {
  double x = -0.000001;
  ck_assert_double_eq_tol(cos(x), s21_cos(x), 0.000001);
}
END_TEST

START_TEST(cos_4) {
  double x = 0.000001;
  ck_assert_double_eq_tol(cos(x), s21_cos(x), 0.000001);
}
END_TEST

START_TEST(cos_5) {
  double x = 120;
  ck_assert_double_eq_tol(cos(x), s21_cos(x), 0.000001);
}
END_TEST

START_TEST(cos_6) {
  double x = -120;
  ck_assert_double_eq_tol(cos(x), s21_cos(x), 0.000001);
}
END_TEST

START_TEST(cos_7) {
  double x = S21_PI_2;
  ck_assert_double_eq_tol(cos(x), s21_cos(x), 0.000001);
}
END_TEST

START_TEST(cos_8) {
  double x = -S21_PI_2;
  ck_assert_double_eq_tol(cos(x), s21_cos(x), 0.000001);
}
END_TEST

START_TEST(cos_9) {
  double x = -S21_PI;
  ck_assert_double_eq_tol(cos(x), s21_cos(x), 0.000001);
}
END_TEST

START_TEST(cos_10) {
  double x = 9483082.47592;
  ck_assert_double_eq_tol(cos(x), s21_cos(x), 0.000001);
}
END_TEST

START_TEST(cos_11) {
  double x = 10000000000;
  ck_assert_double_eq_tol(cos(x), s21_cos(x), 0.000001);
}
END_TEST

START_TEST(cos_12) {
  double x = -10000000000;
  ck_assert_double_eq_tol(cos(x), s21_cos(x), 0.000001);
}
END_TEST

START_TEST(cos_13) {
  double x = 0.00274;
  ck_assert_double_eq_tol(cos(x), s21_cos(x), 0.000001);
}
END_TEST

START_TEST(cos_14) {
  double x = 1.0 / 0.0;
  long double value1 = cos(x);
  long double value2 = s21_cos(x);
  ck_assert(isnan(value1) && isnan(value2));
}
END_TEST

START_TEST(cos_15) {
  double x = 0.0 / 0.0;
  long double value1 = cos(x);
  long double value2 = s21_cos(x);
  ck_assert(isnan(value1) && isnan(value2));
}
END_TEST

Suite *test_cos(void) {
  Suite *s = suite_create("\033[45m-=S21_cos=-\033[0m");
  TCase *tc = tcase_create("cos_tc");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, cos_1);
  tcase_add_test(tc, cos_2);
  tcase_add_test(tc, cos_3);
  tcase_add_test(tc, cos_4);
  tcase_add_test(tc, cos_5);
  tcase_add_test(tc, cos_6);
  tcase_add_test(tc, cos_7);
  tcase_add_test(tc, cos_8);
  tcase_add_test(tc, cos_9);
  tcase_add_test(tc, cos_10);
  tcase_add_test(tc, cos_11);
  tcase_add_test(tc, cos_12);
  tcase_add_test(tc, cos_13);
  tcase_add_test(tc, cos_14);
  tcase_add_test(tc, cos_15);
  suite_add_tcase(s, tc);

  return s;
}
