#include "test_me.h"

START_TEST(fmod_1) {
  double x = 456.8767;
  double y = 3.7;
  ck_assert_double_eq_tol(s21_fmod(x, y), fmodl(x, y), 1e-6);
}
END_TEST

START_TEST(fmod_2) {
  double x = 36677.546546;
  double y = 3.7;
  ck_assert_double_eq_tol(s21_fmod(x, y), fmodl(x, y), 1e-6);
}
END_TEST

START_TEST(fmod_3) {
  double x = 23.456;
  double y = 4.355;
  ck_assert_double_eq(s21_fmod(x, y), fmodl(x, y));
}
END_TEST

START_TEST(fmod_4) {
  double x = 23.456;
  double y = 0;
  ck_assert(isnan(s21_fmod(x, y)) && isnan(fmodl(x, y)));
}
END_TEST

Suite *test_fmod(void) {
  Suite *s = suite_create("\033[45m-=s21_fmod=-\033[0m");
  TCase *tc_core = tcase_create("Core");

  tcase_add_test(tc_core, fmod_1);
  tcase_add_test(tc_core, fmod_2);
  tcase_add_test(tc_core, fmod_3);
  tcase_add_test(tc_core, fmod_4);

  suite_add_tcase(s, tc_core);

  return s;
}