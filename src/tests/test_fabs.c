#include "test_me.h"

START_TEST(fabs_1) {
  double x = 0.5;
  ck_assert_double_eq(s21_fabs(x), fabs(x));
}
END_TEST

START_TEST(fabs_2) {
  double x = 3.33;
  ck_assert_double_eq(s21_fabs(x), fabs(x));
}
END_TEST

START_TEST(fabs_3) {
  double x = 0.0 / 0.0;
  ck_assert_ldouble_nan(s21_fabs(x));
}
END_TEST

START_TEST(fabs_4) {
  double x = 7.345e-29;
  ck_assert_double_eq(s21_fabs(x), fabs(x));
}
END_TEST

START_TEST(fabs_5) {
  double x = 7.345e+29;
  ck_assert_double_eq(s21_fabs(x), fabs(x));
}
END_TEST

Suite *test_fabs(void) {
  Suite *s = suite_create("\033[45m-=s21_fabs=-\033[0m");
  TCase *tc_core = tcase_create("Core");

  tcase_add_test(tc_core, fabs_1);
  tcase_add_test(tc_core, fabs_2);
  tcase_add_test(tc_core, fabs_3);
  tcase_add_test(tc_core, fabs_4);
  tcase_add_test(tc_core, fabs_5);

  suite_add_tcase(s, tc_core);

  return s;
}