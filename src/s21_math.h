#ifndef S21_MATH_H
#define S21_MATH_H

#define S21_MIN_INF -__builtin_huge_vall()
#define S21_INF __builtin_huge_vall()
#define S21_NAN __builtin_nanf("0x7fc00000")
#define S21_DBL_MAX 1.7976931348623158e+308
#define S21_DBL_MIN 2.2250738585072014e-308
#define S21_LN10 2.30258509299404590109
#define S21_LN2 0.69314718055994528623
#define S21_PI 3.14159265358979323846264338327950288
#define S21_PI_2 \
  1.570796326794896619231321691639751442098584699687552910487472296
#define S21_EXP24 26489122129.843471527099609375
#define S21_E 2.71828182845904523536028747135266250
#define S21_SMALL_VAL 0.00000001

/*Если знаечние в радианах больше этого числа,
то cos вычеляется через ряд Тейлора в окрестности pi/2
В противном случае косинус вычисляем через ряд Маклорена
*/
#define S21_BORDER 1.4089
#define S21_EXP_BORDER -14.508657
#define S21_NUMBER_ITERATION 115

/* вычисляет абсолютное значение целого числа */
int s21_abs(int x);

/* вычисляет арккосинус */
long double s21_acos(double x);

/* вычисляет арксинус */
long double s21_asin(double x);

/* вычисляет арктангенс */
long double s21_atan(double x);

/* возвращает ближайшее целое число, не меньшее заданного значения */
long double s21_ceil(double x);

/* вычисляет косинус */
long double s21_cos(double x);

/* возвращает значение e, возведенное в заданную степень */
long double s21_exp(double x);

/* вычисляет абсолютное значение числа с плавающей точкой */
long double s21_fabs(double x);

/* возвращает ближайшее целое число, не превышающее заданное значение */
long double s21_floor(double x);

/* остаток операции деления с плавающей точкой */
long double s21_fmod(double x, double y);

/* вычисляет натуральный логарифм */
long double s21_log(double x);

/* возводит число в заданную степень */
long double s21_pow(double base, double exp);

/* вычисляет синус */
long double s21_sin(double x);

/* вычисляет квадратный корень */
long double s21_sqrt(double x);

/* вычисляет тангенс */
long double s21_tan(double x);

#endif