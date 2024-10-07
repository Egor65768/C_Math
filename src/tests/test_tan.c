#include "test_me.h"

START_TEST(tan_1) {
  double x = 0;
  ck_assert_double_eq_tol(tan(x), s21_tan(x), 0.000001);
}
END_TEST

START_TEST(tan_2) {
  double x = S21_PI;
  ck_assert_double_eq_tol(tan(x), s21_tan(x), 0.000001);
}
END_TEST

START_TEST(tan_3) {
  double x = -0.000001;
  ck_assert_double_eq_tol(tan(x), s21_tan(x), 0.000001);
}
END_TEST

START_TEST(tan_4) {
  double x = 0.000001;
  ck_assert_double_eq_tol(tan(x), s21_tan(x), 0.000001);
}
END_TEST

START_TEST(tan_5) {
  double x = 120;
  ck_assert_double_eq_tol(tan(x), s21_tan(x), 0.000001);
}
END_TEST

START_TEST(tan_6) {
  double x = -120;
  ck_assert_double_eq_tol(tan(x), s21_tan(x), 0.000001);
}
END_TEST

START_TEST(tan_7) {
  double x = 1.5707;
  ck_assert_double_eq_tol(tan(x), s21_tan(x), 0.000001);
}
END_TEST

START_TEST(tan_8) {
  double x = 1.5707;
  ck_assert_double_eq_tol(tan(x), s21_tan(x), 0.000001);
}
END_TEST

START_TEST(tan_9) {
  double x = -S21_PI;
  ck_assert_double_eq_tol(tan(x), s21_tan(x), 0.000001);
}
END_TEST

START_TEST(tan_10) {
  double x = 9483082.47592;
  ck_assert_double_eq_tol(tan(x), s21_tan(x), 0.000001);
}
END_TEST

START_TEST(tan_11) {
  double x = 10000000000;
  ck_assert_double_eq_tol(tan(x), s21_tan(x), 0.000001);
}
END_TEST

START_TEST(tan_12) {
  double x = -10000000000;
  ck_assert_double_eq_tol(tan(x), s21_tan(x), 0.000001);
}
END_TEST

START_TEST(tan_13) {
  double x = 0.00274;
  ck_assert_double_eq_tol(tan(x), s21_tan(x), 0.000001);
}
END_TEST

START_TEST(tan_14) {
  double x = 1.0 / 0.0;
  long double value1 = tan(x);
  long double value2 = s21_tan(x);
  ck_assert(isnan(value1) && isnan(value2));
}
END_TEST

START_TEST(tan_15) {
  double x = 0.0 / 0.0;
  long double value1 = tan(x);
  long double value2 = s21_tan(x);
  ck_assert(isnan(value1) && isnan(value2));
}
END_TEST

Suite *test_tan(void) {
  Suite *s = suite_create("\033[45m-=S21_tan=-\033[0m");
  TCase *tc = tcase_create("tan_tc");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, tan_1);
  tcase_add_test(tc, tan_2);
  tcase_add_test(tc, tan_3);
  tcase_add_test(tc, tan_4);
  tcase_add_test(tc, tan_5);
  tcase_add_test(tc, tan_6);
  tcase_add_test(tc, tan_7);
  tcase_add_test(tc, tan_8);
  tcase_add_test(tc, tan_9);
  tcase_add_test(tc, tan_10);
  tcase_add_test(tc, tan_11);
  tcase_add_test(tc, tan_12);
  tcase_add_test(tc, tan_13);
  tcase_add_test(tc, tan_14);
  tcase_add_test(tc, tan_15);
  suite_add_tcase(s, tc);

  return s;
}
