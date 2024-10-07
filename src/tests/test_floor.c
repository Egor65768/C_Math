#include "test_me.h"

START_TEST(floor_1) {
  double x = 8.00000008;
  ck_assert_double_eq(s21_floor(x), floorl(x));
}
END_TEST

START_TEST(floor_2) {
  double x = 100.0;
  ck_assert_double_eq(s21_floor(x), floorl(x));
}
END_TEST

START_TEST(floor_3) {
  double x = -5.02;
  ck_assert_double_eq(s21_floor(x), floorl(x));
}
END_TEST

START_TEST(floor_4) {
  double x = 0.0;
  ck_assert_double_eq(s21_floor(x), floorl(x));
}
END_TEST

Suite *test_floor(void) {
  Suite *s = suite_create("\033[45m-=s21_floor=-\033[0m");
  TCase *tc_core = tcase_create("Core");

  tcase_add_test(tc_core, floor_1);
  tcase_add_test(tc_core, floor_2);
  tcase_add_test(tc_core, floor_3);
  tcase_add_test(tc_core, floor_4);

  suite_add_tcase(s, tc_core);

  return s;
}