#include "test_me.h"

START_TEST(pow_1) {
  double x = 0;
  double y = 0;
  ck_assert_double_eq_tol(pow(x, y), s21_pow(x, y), 0.000001);
}
END_TEST

START_TEST(pow_2) {
  double x = 12.463;
  double y = 3.234;
  ck_assert_double_eq_tol(pow(x, y), s21_pow(x, y), 0.000001);
}
END_TEST

START_TEST(pow_3) {
  double x = -12;
  double y = 2.3;
  ck_assert(isnan(pow(x, y)) && isnan(s21_pow(x, y)));
}
END_TEST

START_TEST(pow_4) {
  double x = 0.0 / 0.0;
  double y = 2.3;
  ck_assert(isnan(pow(x, y)) && isnan(s21_pow(x, y)));
}
END_TEST

START_TEST(pow_5) {
  double x = 2;
  double y = 0.0 / 0.0;
  ck_assert(isnan(pow(x, y)) && isnan(s21_pow(x, y)));
}
END_TEST

START_TEST(pow_6) {
  double x = 1.0 / 0.0;
  double y = -1;
  ck_assert_double_eq_tol(pow(x, y), s21_pow(x, y), 0.000001);
}
END_TEST

START_TEST(pow_7) {
  double x = 2;
  double y = -1.0 / 0.0;
  ck_assert_double_eq_tol(pow(x, y), s21_pow(x, y), 0.000001);
}
END_TEST

START_TEST(pow_8) {
  double x = 0.2;
  double y = 1.0 / 0.0;
  ck_assert_double_eq_tol(pow(x, y), s21_pow(x, y), 0.000001);
}
END_TEST

START_TEST(pow_9) {
  double x = 2;
  double y = 1.0 / 0.0;
  ck_assert_msg(pow(x, y) == s21_pow(x, y), "FAIL");
}
END_TEST

START_TEST(pow_10) {
  double x = 0.22;
  double y = -1.0 / 0.0;
  ck_assert_msg(pow(x, y) == s21_pow(x, y), "FAIL");
}
END_TEST

START_TEST(pow_11) {
  double x = 1.0 / 0.0;
  double y = 0.05;
  ck_assert_msg(pow(x, y) == s21_pow(x, y), "FAIL");
}
END_TEST

START_TEST(pow_12) {
  double x = 1.0 / 0.0;
  double y = -0.05;
  ck_assert_double_eq_tol(pow(x, y), s21_pow(x, y), 0.000001);
}
END_TEST

START_TEST(pow_13) {
  double x = 25.76;
  double y = 4.4326;
  ck_assert_double_eq_tol(pow(x, y), s21_pow(x, y), 0.000001);
}
END_TEST

START_TEST(pow_14) {
  double x = -1.0 / 0.0;
  double y = 2;
  ck_assert_msg(pow(x, y) == s21_pow(x, y), "FAIL");
}
END_TEST

START_TEST(pow_15) {
  double x = -1.0 / 0.0;
  double y = 3;
  ck_assert_msg(pow(x, y) == s21_pow(x, y), "FAIL");
}
END_TEST

START_TEST(pow_16) {
  double x = -1.0 / 0.0;
  double y = 2.32;
  ck_assert_msg(pow(x, y) == s21_pow(x, y), "FAIL");
}
END_TEST

START_TEST(pow_17) {
  double x = 1.0 / 0.0;
  double y = -1.0 / 0.0;
  ck_assert_msg(pow(x, y) == s21_pow(x, y), "FAIL");
}
END_TEST

START_TEST(pow_18) {
  double x = -1.0 / 0.0;
  double y = 1.0 / 0.0;
  ck_assert_msg(pow(x, y) == s21_pow(x, y), "FAIL");
}
END_TEST

START_TEST(pow_19) {
  double x = 1.253647;
  double y = 2.323456;
  ck_assert_double_eq_tol(pow(x, y), s21_pow(x, y), 0.000001);
}
END_TEST

START_TEST(pow_20) {
  double x = 0.0 / 0.0;
  double y = 0.0 / 0.0;
  ck_assert(isnan(pow(x, y)) && isnan(s21_pow(x, y)));
}
END_TEST

START_TEST(pow_21) {
  double x = -1;
  double y = 3;
  ck_assert_double_eq_tol(pow(x, y), s21_pow(x, y), 0.000001);
}
END_TEST

START_TEST(pow_22) {
  double x = 4;
  double y = -3;
  ck_assert_double_eq_tol(pow(x, y), s21_pow(x, y), 0.000001);
}
END_TEST

START_TEST(pow_23) {
  double x = 0;
  double y = 0;
  ck_assert_double_eq_tol(pow(x, y), s21_pow(x, y), 0.000001);
}
END_TEST

Suite *test_pow(void) {
  Suite *s = suite_create("\033[45m-=S21_pow=-\033[0m");
  TCase *tc = tcase_create("powg_tc");

  suite_add_tcase(s, tc);
  tcase_add_test(tc, pow_1);
  tcase_add_test(tc, pow_2);
  tcase_add_test(tc, pow_3);
  tcase_add_test(tc, pow_4);
  tcase_add_test(tc, pow_5);
  tcase_add_test(tc, pow_6);
  tcase_add_test(tc, pow_7);
  tcase_add_test(tc, pow_8);
  tcase_add_test(tc, pow_9);
  tcase_add_test(tc, pow_10);
  tcase_add_test(tc, pow_11);
  tcase_add_test(tc, pow_12);
  tcase_add_test(tc, pow_13);
  tcase_add_test(tc, pow_14);
  tcase_add_test(tc, pow_15);
  tcase_add_test(tc, pow_16);
  tcase_add_test(tc, pow_17);
  tcase_add_test(tc, pow_18);
  tcase_add_test(tc, pow_19);
  tcase_add_test(tc, pow_20);
  tcase_add_test(tc, pow_21);
  tcase_add_test(tc, pow_22);
  tcase_add_test(tc, pow_23);
  suite_add_tcase(s, tc);

  return s;
}
