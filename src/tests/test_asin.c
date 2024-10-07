#include "test_me.h"

START_TEST(asin_1) {
  double x = 0.00001;
  ck_assert_double_eq_tol(asin(x), s21_asin(x), 0.000001);
}
END_TEST

START_TEST(asin_2) {
  double x = -0.00001;
  ck_assert_double_eq_tol(asin(x), s21_asin(x), 0.000001);
}
END_TEST

START_TEST(asin_3) {
  double x = 1;
  ck_assert_double_eq_tol(asin(x), s21_asin(x), 0.000001);
}
END_TEST

START_TEST(asin_4) {
  double x = -1;
  ck_assert_double_eq_tol(asin(x), s21_asin(x), 0.000001);
}
END_TEST

START_TEST(asin_5) {
  double x = 0;
  ck_assert_double_eq_tol(asin(x), s21_asin(x), 0.000001);
}
END_TEST

START_TEST(asin_6) {
  double x = -0;
  ck_assert_double_eq_tol(asin(x), s21_asin(x), 0.000001);
}
END_TEST

START_TEST(asin_7) {
  double x = 1.5;
  if (isnan(asin(x))) {
    ck_assert(isnan(s21_asin(x)));
  }
}
END_TEST

START_TEST(asin_8) {
  double x = -1.5;
  if (isnan(asin(x))) {
    ck_assert(isnan(s21_asin(x)));
  }
}
END_TEST

START_TEST(asin_9) {
  double x = DBL_MAX;
  if (isnan(asin(x))) {
    ck_assert(isnan(s21_asin(x)));
  }
}
END_TEST

START_TEST(asin_10) {
  double x = -DBL_MAX;
  if (isnan(asin(x))) {
    ck_assert(isnan(s21_asin(x)));
  }
}
END_TEST

Suite *test_asin(void) {
  Suite *s = suite_create("\033[45m-=s21_asin=-\033[0m");
  TCase *tc = tcase_create("asin_tc");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, asin_1);
  tcase_add_test(tc, asin_2);
  tcase_add_test(tc, asin_3);
  tcase_add_test(tc, asin_4);
  tcase_add_test(tc, asin_5);
  tcase_add_test(tc, asin_6);
  tcase_add_test(tc, asin_7);
  tcase_add_test(tc, asin_8);
  tcase_add_test(tc, asin_9);
  tcase_add_test(tc, asin_10);
  suite_add_tcase(s, tc);
  return s;
}
