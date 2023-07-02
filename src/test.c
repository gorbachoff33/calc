#include <check.h>

#include "calc_1/s21_polish.h"

START_TEST(s21_calc_1) {
  double x, y;
  y = ((sin(45) + 8) / 0.5);
  char str[] = "(sin(45)+8)/0.5";
  char str1[50] = {0};
  parser_str(str, str1, str);
  polis(str1, &x);
  ck_assert_double_eq_tol(x, y, 1e-6);
}
END_TEST

START_TEST(s21_calc_2) {
  double x, y;
  y = ((cos(45) + 8) / 3.5);
  char str[] = "(cos(45)+8)/3.5";
  char str1[50] = {0};
  parser_str(str, str1, str);
  polis(str1, &x);
  ck_assert_double_eq_tol(x, y, 1e-6);
}
END_TEST

START_TEST(s21_calc_3) {
  double x, y;
  y = ((tan(30) * 18) / 3.5);
  char str[] = "(tan(30)*18)/3.5";
  char str1[50] = {0};
  parser_str(str, str1, str);
  polis(str1, &x);
  ck_assert_double_eq_tol(x, y, 1e-6);
}
END_TEST

START_TEST(s21_calc_4) {
  double x, y;
  y = (2 + 2) * 2 % 2;
  char str[] = "(2+2)*2mod2";
  char str1[50] = {0};
  parser_str(str, str1, str);
  polis(str1, &x);
  ck_assert_double_eq_tol(x, y, 1e-6);
}
END_TEST

START_TEST(s21_calc_5) {
  double x;
  char str[] = "3/0";
  char str1[50] = {0};
  parser_str(str, str1, str);
  polis(str1, &x);
  ck_assert_int_eq(polis(str1, &x), 1);
}
END_TEST

START_TEST(s21_calc_6) {
  double x, y;
  y = cos(0);
  char str[] = "cos(0)";
  char str1[50] = {0};
  parser_str(str, str1, str);
  polis(str1, &x);
  ck_assert_double_eq_tol(x, y, 1e-6);
}
END_TEST

START_TEST(s21_calc_7) {
  double x, y;
  double a = 3.5;
  double b = 6.4;
  y = pow(a, b);
  char str[] = "3.5^6.4";
  char str1[50] = {0};
  parser_str(str, str1, str);
  polis(str1, &x);
  ck_assert_double_eq_tol(x, y, 1e-6);
}
END_TEST

START_TEST(s21_calc_8) {
  double x, y;
  y = sqrt(80.054);
  char str[] = "sqrt(80.054)";
  char str1[50] = {0};
  parser_str(str, str1, str);
  polis(str1, &x);
  ck_assert_double_eq_tol(x, y, 1e-6);
}
END_TEST

START_TEST(s21_calc_9) {
  double x, y;
  y = atan(987);
  char str[] = "atan(987)";
  char str1[50] = {0};
  parser_str(str, str1, str);
  polis(str1, &x);
  ck_assert_double_eq_tol(x, y, 1e-6);
}
END_TEST

START_TEST(s21_calc_10) {
  double x, y;
  y = cos(sin(tan(acos(asin(atan(log10(log((sqrt(8 + 4 * 6))))))))));
  char str[] = "cos(sin(tan(acos(asin(atan(log10(ln((sqrt(8+4*6))))))))))";
  char str1[50] = {0};
  parser_str(str, str1, str);
  polis(str1, &x);
  ck_assert_double_eq_tol(x, y, 1e-6);
}
END_TEST

START_TEST(s21_calc_11) {
  double x;
  char str[] = "sqrt(-5)";
  char str1[50] = {0};
  parser_str(str, str1, str);
  polis(str1, &x);
  ck_assert_int_eq(polis(str1, &x), 1);
}
END_TEST

START_TEST(s21_calc_12) {
  double x;
  char str[] = "2mod0";
  char str1[50] = {0};
  parser_str(str, str1, str);
  polis(str1, &x);
  ck_assert_int_eq(polis(str1, &x), 1);
}
END_TEST

START_TEST(s21_calc_13) {
  double x, y;
  y = 7.625;
  char str[] = "(2^6+1)mod2-3/8+7";
  char str1[50] = {0};
  parser_str(str, str1, str);
  polis(str1, &x);
  ck_assert_double_eq_tol(x, y, 1e-6);
}
END_TEST

START_TEST(s21_calc_14) {
  double x, y;
  y = -2.375;
  char str[] = "(2^6+1)mod2-3\n/8+7+x";
  char str1[50] = {0};
  char str2[20] = "-10";
  parser_str(str, str1, str2);
  polis(str1, &x);
  ck_assert_double_eq_tol(x, y, 1e-6);
}
END_TEST

Suite *test_func_calc(void) {
  Suite *x;
  x = suite_create("check");

  TCase *s21_calc_case;

  s21_calc_case = tcase_create("check_calc");

  suite_add_tcase(x, s21_calc_case);

  tcase_add_test(s21_calc_case, s21_calc_1);
  tcase_add_test(s21_calc_case, s21_calc_2);
  tcase_add_test(s21_calc_case, s21_calc_3);
  tcase_add_test(s21_calc_case, s21_calc_4);
  tcase_add_test(s21_calc_case, s21_calc_5);
  tcase_add_test(s21_calc_case, s21_calc_6);
  tcase_add_test(s21_calc_case, s21_calc_7);
  tcase_add_test(s21_calc_case, s21_calc_8);
  tcase_add_test(s21_calc_case, s21_calc_9);
  tcase_add_test(s21_calc_case, s21_calc_10);
  tcase_add_test(s21_calc_case, s21_calc_11);
  tcase_add_test(s21_calc_case, s21_calc_12);
  tcase_add_test(s21_calc_case, s21_calc_13);
  tcase_add_test(s21_calc_case, s21_calc_14);

  return x;
}

void suite_test_calc(void) {
  Suite *x;
  SRunner *y;

  x = test_func_calc();
  y = srunner_create(x);
  srunner_run_all(y, CK_NORMAL);
  srunner_free(y);
}

int main() { suite_test_calc(); }
