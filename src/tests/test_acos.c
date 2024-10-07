#include "test_me.h"

START_TEST(acos_1) {
  double x = 0.00001;
  ck_assert_double_eq_tol(acos(x), s21_acos(x), 0.000001);
}
END_TEST

START_TEST(acos_2) {
  double x = -0.00001;
  ck_assert_double_eq_tol(acos(x), s21_acos(x), 0.000001);
}
END_TEST

START_TEST(acos_3) {
  double x = 1;
  ck_assert_double_eq_tol(acos(x), s21_acos(x), 0.000001);
}
END_TEST

START_TEST(acos_4) {
  double x = -1;
  ck_assert_double_eq_tol(acos(x), s21_acos(x), 0.000001);
}
END_TEST

START_TEST(acos_5) {
  double x = 0;
  ck_assert_double_eq_tol(acos(x), s21_acos(x), 0.000001);
}
END_TEST

START_TEST(acos_6) {
  double x = -0;
  ck_assert_double_eq_tol(acos(x), s21_acos(x), 0.000001);
}
END_TEST

START_TEST(acos_7) {
  double x = 1.5;
  if (isnan(acos(x))) {
    ck_assert(isnan(s21_acos(x)));
  }
}
END_TEST

START_TEST(acos_8) {
  double x = -1.5;
  if (isnan(acos(x))) {
    ck_assert(isnan(s21_acos(x)));
  }
}
END_TEST

START_TEST(acos_9) {
  double x = DBL_MAX;
  if (isnan(acos(x))) {
    ck_assert(isnan(s21_acos(x)));
  }
}
END_TEST

START_TEST(acos_10) {
  double x = -DBL_MAX;
  if (isnan(acos(x))) {
    ck_assert(isnan(s21_acos(x)));
  }
}
END_TEST

Suite *test_acos(void) {
  Suite *s = suite_create("\033[45m-=s21_acos=-\033[0m");
  TCase *tc = tcase_create("acos_tc");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, acos_1);
  tcase_add_test(tc, acos_2);
  tcase_add_test(tc, acos_3);
  tcase_add_test(tc, acos_4);
  tcase_add_test(tc, acos_5);
  tcase_add_test(tc, acos_6);
  tcase_add_test(tc, acos_7);
  tcase_add_test(tc, acos_8);
  tcase_add_test(tc, acos_9);
  tcase_add_test(tc, acos_10);
  suite_add_tcase(s, tc);
  return s;
}
