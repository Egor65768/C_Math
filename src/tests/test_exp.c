#include "test_me.h"

START_TEST(exp_1) {
  double x = 0.5;
  ck_assert_double_eq(s21_exp(x), exp(x));
}
END_TEST

START_TEST(exp_2) {
  double x = 3.33;
  ck_assert_double_eq(s21_exp(x), exp(x));
}
END_TEST

START_TEST(exp_3) {
  double x = 0.0 / 0.0;
  ck_assert_ldouble_nan(s21_exp(x));
}
END_TEST

START_TEST(exp_4) {
  double x = 7.345e-29;
  ck_assert_double_eq(s21_exp(x), exp(x));
}
END_TEST

START_TEST(exp_5) {
  double x = 7.345e+29;
  ck_assert_double_eq(s21_exp(x), exp(x));
}
END_TEST

START_TEST(exp_6) {
  double x = -39;
  ck_assert_double_eq_tol(s21_exp(x), exp(x), 1e-6);
}
END_TEST

START_TEST(exp_7) {
  double x = 0;
  ck_assert_double_eq_tol(s21_exp(x), exp(x), 1e-6);
}
END_TEST

START_TEST(exp_8) {
  double x = 45;
  ck_assert_double_eq_tol(s21_exp(x), exp(x), 1e-6);
}
END_TEST

Suite *test_exp(void) {
  Suite *s = suite_create("\033[45m-=s21_exp=-\033[0m");
  TCase *tc_core = tcase_create("Core");

  tcase_add_test(tc_core, exp_1);
  tcase_add_test(tc_core, exp_2);
  tcase_add_test(tc_core, exp_3);
  tcase_add_test(tc_core, exp_4);
  tcase_add_test(tc_core, exp_5);
  tcase_add_test(tc_core, exp_6);
  tcase_add_test(tc_core, exp_7);
  tcase_add_test(tc_core, exp_8);

  suite_add_tcase(s, tc_core);

  return s;
}