#ifndef SRC_TESTS_ME_H
#define SRC_TESTS_ME_H

#include <check.h>
#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>

#include "../s21_math.h"

Suite *test_exp(void);
Suite *test_fabs(void);
Suite *test_floor(void);
Suite *test_sqrt(void);
Suite *test_ceil(void);
Suite *test_abs(void);
Suite *test_atan(void);
Suite *test_asin(void);
Suite *test_acos(void);
Suite *test_fmod(void);
Suite *test_tan(void);
Suite *test_sin(void);
Suite *test_pow(void);
Suite *test_log(void);
Suite *test_cos(void);

#endif  // SRC_TESTS_ME_H
