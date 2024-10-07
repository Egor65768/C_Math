#include "test_me.h"

START_TEST(sqrt_1) {
  double x = 25.0;
  ck_assert_double_eq(s21_sqrt(x), sqrt(x));
}
END_TEST

START_TEST(sqrt_2) {
  double x = 12345678910;
  ck_assert_double_eq(s21_sqrt(x), sqrt(x));
}
END_TEST

START_TEST(sqrt_3) {
  double x = 134.456;
  ck_assert_double_eq(s21_sqrt(x), sqrt(x));
}
END_TEST

START_TEST(sqrt_4) {
  double x = -234423.3242;
  ck_assert_ldouble_nan(s21_sqrt(x));
}
END_TEST

Suite *test_sqrt(void) {
  Suite *s = suite_create("\033[45m-=s21_sqrt=-\033[0m");
  TCase *tc_core = tcase_create("Core");

  tcase_add_test(tc_core, sqrt_1);
  tcase_add_test(tc_core, sqrt_2);
  tcase_add_test(tc_core, sqrt_3);
  tcase_add_test(tc_core, sqrt_4);

  suite_add_tcase(s, tc_core);

  return s;
}