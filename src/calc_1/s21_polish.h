// created by pizpotli
#ifndef SRC_S21_POLISH_H_
#define SRC_S21_POLISH_H_

#include <math.h>
#include <stdio.h>
#include <string.h>

typedef struct {
  int res_flag;
  int count_num;
  int count_stek;
  int count_own;
  int strlen;
  int x;
  int flag;
  int tmp_prior;
  int prior;
  int min;
  double result;
  char numbers[1024];
  double str_sort[1024];
  char stek[255];
  char str[255];
} polish;

int polis(char *str1, double *x);
void check_case(polish *tmp);
int check_case_1(polish *tmp);
void check_case_2(polish *tmp);
void case_go(polish *tmp, int x);
void parser_str(char *str, char *res, char *vector);
void minus(char *res, int *k);
void check_str(char *str, char *res, int *i, int *k, int *flag);
void numbers_write(polish *tmp);
void parser_znak(polish *tmp);
void output_in_stack(polish *tmp);
void plus(double x, double y, double *result);
void mul(double x, double y, double *result);
void divv(polish *tmp, double x, double y, double *result);
void mod(polish *tmp, double x, double y, double *result);
void s_pow(double x, double y, double *result);
void s_cos(double *result);
void s_sin(double *result);
void s_tan(polish *tmp, double *result);
void s_acos(double *result);
void s_asin(double *result);
void s_atan(double *result);
void s_sqrt(polish *tmp, double *result);
void s_ln(double *result);
void s_log_10(double *result);
int s21_strlen(char *str);
int s21_strcmp(char *str, char *str2);
void s21_copy(char *str1, polish *tmp);
void prior(polish *tmp);
void min(polish *tmp);
void convertation(polish *tmp);
int podshet(polish *tmp, double *result);
int pod_case_1(polish *tmp);
void pod_case_2(polish *tmp);

#endif  // SRC_S21_POLISH_H_
