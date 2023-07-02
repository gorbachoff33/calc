// created by pizpotli
#include "s21_polish.h"

/**
 * @brief копирует входящую строку в массив в структуре
 *
 * @param str1 строка
 * @param tmp основная структура
 */
void s21_copy(char *str1, polish *tmp) {
  for (int i = 0; i < s21_strlen(str1); i++) {
    tmp->str[i] = str1[i];
  }
}

/**
 * @brief копия оригинала
 *
 * @param str строка
 * @return int длинна строки
 */
int s21_strlen(char *str) {
  int res = 0;
  while (str[res] != '\0') {
    res++;
  }
  return res;
}

/**
 * @brief копия оригинала
 *
 * @param str строка 1
 * @param str2 строка 2
 * @return int -1, 0, 1
 */
int s21_strcmp(char *str, char *str2) {
  int res = 0;
  for (int i = 0; i < s21_strlen(str2) && res == 0; i++) {
    if (str[i] < str2[i]) {
      res = -1;
    } else if (str[i] > str2[i]) {
      res = 1;
    }
  }
  return res;
}

/**
 * @brief парсит строку с учетом икса
 *
 * @param str строка-входная
 * @param res результат-строка
 * @param vector число ввиде строки вместо икса
 */
void parser_str(char *str, char *res, char *vector) {
  memset(res, 0, sizeof(char));
  int flag = 0;
  for (int i = 0, k = 0; i < s21_strlen(str); i++, k++) {
    if ((str[i] > 42 && str[i] < 45) || (str[i] > 45 && str[i] < 58) ||
        str[i] == 41 || str[i] == 92 || str[i] == 94) {
      res[k] = str[i];
      flag = 1;
    } else if (str[i] == 40) {
      res[k] = str[i];
      flag = 0;
    } else if (str[i] == '*') {
      res[k] = '*';
      flag = 0;
    } else if (str[i] == 'x') {
      int j = 0;
      if (vector[j] == '(') {
        j++;
      }
      if (vector[j] == '-') {
        minus(res, &k);
        k++;
        j++;
      }
      for (; vector[j] != '\0'; j++) {
        if (vector[j] != ')') {
          res[k] = vector[j];
          k++;
        }
      }
      k--;
    } else if (str[i] == 45) {
      if (flag == 1) {
        res[k] = '+';
        k++;
      }
      minus(res, &k);
    } else if (str[i] == '\n' || str[i] == ' ') {
      k--;
    } else {
      check_str(str, res, &i, &k, &flag);
    }
  }
}

/**
 * @brief для необработанной строки! при знаке '-' записывает умножение на -1
 *
 * @param res строка
 * @param k каунт
 */
void minus(char *res, int *k) {
  res[*k] = '(';
  *k = *k + 1;
  res[*k] = '-';
  *k = *k + 1;
  res[*k] = '1';
  *k = *k + 1;
  res[*k] = ')';
  *k = *k + 1;
  res[*k] = '*';
}

/**
 * @brief парсит знаки и записывает в удобный вид
 *
 * @param str строка-входная
 * @param res результат-строка
 * @param i каунт строки str
 * @param k каунт строки res
 * @param flag флаг
 */
void check_str(char *str, char *res, int *i, int *k, int *flag) {
  char tmp[10] = {0};
  for (int j = 0, count = 0; j < 6 && count == 0; j++) {
    tmp[j] = str[*i];
    if (!s21_strcmp(tmp, "sin")) {
      res[*k] = 's';
      *flag = 0;
      count = 1;
    } else if (!s21_strcmp(tmp, "cos")) {
      res[*k] = 'c';
      *flag = 0;
      count = 1;
    } else if (!s21_strcmp(tmp, "tan")) {
      res[*k] = 't';
      *flag = 0;
      count = 1;
    } else if (!s21_strcmp(tmp, "acos")) {
      res[*k] = 'C';
      *flag = 0;
      count = 1;
    } else if (!s21_strcmp(tmp, "asin")) {
      res[*k] = 'S';
      *flag = 0;
      count = 1;
    } else if (!s21_strcmp(tmp, "atan")) {
      res[*k] = 'T';
      *flag = 0;
      count = 1;
    } else if (!s21_strcmp(tmp, "mod")) {
      res[*k] = '%';
      *flag = 0;
      count = 1;
    } else if (!s21_strcmp(tmp, "sqrt")) {
      res[*k] = 'R';
      *flag = 0;
      count = 1;
    } else if (!s21_strcmp(tmp, "ln")) {
      res[*k] = 'l';
      *flag = 0;
      count = 1;
    } else if (!s21_strcmp(tmp, "log10")) {
      res[*k] = 'L';
      *flag = 0;
      count = 1;
    }
    *i = *i + 1;
  }
  *i = *i - 1;
}

/**
 * @brief считает преобразованную строку
 *
 * @param str1 основная строка
 * @param x результат double
 * @return int 0 - ОК, 1 - ошибка
 */
int polis(char *str1, double *x) {
  polish tmp = {0};
  double tmp_result = 0;
  *x = 0;
  s21_copy(str1, &tmp);
  tmp.strlen = s21_strlen(tmp.str);
  for (; tmp.count_own < tmp.strlen; tmp.count_own++) {
    tmp.x = tmp.str[tmp.count_own];
    check_case(&tmp);
  }
  tmp.count_stek--;
  while (tmp.count_stek >= 0) {
    if (tmp.stek[tmp.count_stek] != '(') {
      tmp.numbers[tmp.count_num] = tmp.stek[tmp.count_stek];
      tmp.count_num++;
      tmp.numbers[tmp.count_num] = ' ';
      tmp.count_num++;
    }
    tmp.count_stek--;
  }
  podshet(&tmp, &tmp_result);
  if (tmp.flag == 0) {
    *x = tmp_result;
  }
  return tmp.res_flag;
}

/**
 * @brief смотрит tmp->x и распределяет по функциям
 *
 * @param tmp общая структура
 */
void check_case(polish *tmp) {
  int x = 0;
  x = check_case_1(tmp);
  if (x == 0) {
    switch (tmp->x) {
      case '*':
        x = 1;
        case_go(tmp, 2);
        break;
      case '/':
        x = 1;
        case_go(tmp, 2);
        break;
      case '%':
        x = 1;
        case_go(tmp, 2);
        break;
    }
  }
  if (x == 0) {
    check_case_2(tmp);
  }
}

/**
 * @brief свитч чисел и простых знаков
 *
 * @param tmp общая структура
 * @return int если есть совпадения, то возвращает 1
 */
int check_case_1(polish *tmp) {
  int res = 0;
  switch (tmp->x) {
    case '0':
      numbers_write(tmp);
      res = 1;
      break;
    case '1':
      numbers_write(tmp);
      res = 1;
      break;
    case '2':
      numbers_write(tmp);
      res = 1;
      break;
    case '3':
      numbers_write(tmp);
      res = 1;
      break;
    case '4':
      numbers_write(tmp);
      res = 1;
      break;
    case '5':
      numbers_write(tmp);
      res = 1;
      break;
    case '6':
      numbers_write(tmp);
      res = 1;
      break;
    case '7':
      numbers_write(tmp);
      res = 1;
      break;
    case '8':
      numbers_write(tmp);
      res = 1;
      break;
    case '9':
      numbers_write(tmp);
      res = 1;
      break;
    case '+':
      case_go(tmp, 1);
      res = 1;
      break;
    case '-':
      tmp->tmp_prior = 1;
      numbers_write(tmp);
      res = 1;
      break;
  }
  return res;
}

/**
 * @brief свитч приоритета 3 и скобок
 *
 * @param tmp общая структура
 */
void check_case_2(polish *tmp) {
  switch (tmp->x) {
    case '^':
      case_go(tmp, 3);
      break;
    case 'R':
      case_go(tmp, 3);
      break;
    case 'c':
      case_go(tmp, 3);
      break;
    case 's':
      case_go(tmp, 3);
      break;
    case 't':
      case_go(tmp, 3);
      break;
    case 'C':
      case_go(tmp, 3);
      break;
    case 'S':
      case_go(tmp, 3);
      break;
    case 'T':
      case_go(tmp, 3);
      break;
    case 'l':
      case_go(tmp, 3);
      break;
    case 'L':
      case_go(tmp, 3);
      break;
    case '(':
      case_go(tmp, 4);
      break;
    case ')':
      case_go(tmp, 0);
      break;
  }
}

/**
 * @brief принимает приоритет знака и отправляет в запись
 *
 * @param tmp общая структура
 * @param x знак приоритета
 */
void case_go(polish *tmp, int x) {
  tmp->tmp_prior = x;
  parser_znak(tmp);
}

/**
 * @brief перенаправляет знаки и скобки исходя из приоритета
 *
 * @param tmp общая структура
 */
void parser_znak(polish *tmp) {
  if (tmp->x == ')') {
    output_in_stack(tmp);
  } else {
    if (tmp->tmp_prior > tmp->prior) {
      tmp->stek[tmp->count_stek] = tmp->x;
      tmp->count_stek++;
      if (tmp->x == '(') {
        tmp->prior = 0;
      } else {
        tmp->prior = tmp->tmp_prior;
      }
    } else {
      output_in_stack(tmp);
    }
  }
}

/**
 * @brief выталкивает из стека знаки
 *
 * @param tmp общая структура
 */
void output_in_stack(polish *tmp) {
  tmp->count_stek--;
  int count = 0;
  while (tmp->stek[tmp->count_stek] != '(' && tmp->count_stek >= 0 &&
         count == 0) {
    prior(tmp);
    if (tmp->prior >= tmp->tmp_prior) {
      tmp->numbers[tmp->count_num] = tmp->stek[tmp->count_stek];
      tmp->count_num++;
      tmp->numbers[tmp->count_num] = ' ';
      tmp->count_num++;
      tmp->count_stek--;
    } else {
      count = 1;
    }
  }
  if (tmp->x == ')') {
    tmp->stek[tmp->count_stek] = 0;
    if (tmp->count_stek == 0) {
      tmp->prior = 0;
    } else {
      tmp->count_stek--;
      prior(tmp);
      tmp->count_stek++;
    }

  } else {
    tmp->count_stek++;
    tmp->stek[tmp->count_stek] = tmp->x;
    tmp->count_stek++;
    tmp->prior = tmp->tmp_prior;
  }
}

/**
 * @brief записывает число в строку
 *
 * @param tmp основная структура
 */
void numbers_write(polish *tmp) {
  while (tmp->str[tmp->count_own] == 46 || tmp->str[tmp->count_own] == 45 ||
         (tmp->str[tmp->count_own] > 47 && tmp->str[tmp->count_own] < 58)) {
    tmp->numbers[tmp->count_num] = tmp->str[tmp->count_own];
    tmp->count_num++;
    tmp->count_own++;
  }
  tmp->count_own--;
  tmp->numbers[tmp->count_num] = ' ';
  tmp->count_num++;
}

/**
 * @brief смотрит приоритет уже лежащего знака в стеке
 *
 * @param tmp основная структура
 */
void prior(polish *tmp) {
  if (tmp->stek[tmp->count_stek] == '+') {
    tmp->prior = 1;
  } else if (tmp->stek[tmp->count_stek] == '*') {
    tmp->prior = 2;
  } else if (tmp->stek[tmp->count_stek] == '/') {
    tmp->prior = 2;
  } else if (tmp->stek[tmp->count_stek] == '%') {
    tmp->prior = 2;
  } else if (tmp->stek[tmp->count_stek] == '^') {
    tmp->prior = 3;
  } else if (tmp->stek[tmp->count_stek] == 'c') {
    tmp->prior = 3;
  } else if (tmp->stek[tmp->count_stek] == 's') {
    tmp->prior = 3;
  } else if (tmp->stek[tmp->count_stek] == 't') {
    tmp->prior = 3;
  } else if (tmp->stek[tmp->count_stek] == 'C') {
    tmp->prior = 3;
  } else if (tmp->stek[tmp->count_stek] == 'S') {
    tmp->prior = 3;
  } else if (tmp->stek[tmp->count_stek] == 'T') {
    tmp->prior = 3;
  } else if (tmp->stek[tmp->count_stek] == 'R') {
    tmp->prior = 3;
  } else if (tmp->stek[tmp->count_stek] == 'l') {
    tmp->prior = 3;
  } else if (tmp->stek[tmp->count_stek] == 'L') {
    tmp->prior = 3;
  } else {
    tmp->prior = 0;
  }
}

/**
 * @brief функция подсчета выражения
 *
 * @param tmp основная структура
 * @param result результат
 * @return int 0 - ОК, 1 - ошибка
 */
int podshet(polish *tmp, double *result) {
  tmp->count_own = 0;
  tmp->count_num = 0;
  for (; tmp->count_own < s21_strlen(tmp->numbers); tmp->count_own++) {
    int x = 0;
    tmp->x = tmp->numbers[tmp->count_own];
    x = pod_case_1(tmp);
    if (x == 0) {
      switch (tmp->x) {
        case '+':
          x = 1;
          tmp->count_num--;
          plus(tmp->str_sort[tmp->count_num - 1], tmp->str_sort[tmp->count_num],
               &tmp->str_sort[tmp->count_num - 1]);
          break;
        case '*':
          x = 1;
          tmp->count_num--;
          mul(tmp->str_sort[tmp->count_num - 1], tmp->str_sort[tmp->count_num],
              &tmp->str_sort[tmp->count_num - 1]);
          break;
        case '/':
          x = 1;
          tmp->count_num--;
          divv(tmp, tmp->str_sort[tmp->count_num - 1],
               tmp->str_sort[tmp->count_num],
               &tmp->str_sort[tmp->count_num - 1]);
          break;
        case '%':
          x = 1;
          tmp->count_num--;
          mod(tmp, tmp->str_sort[tmp->count_num - 1],
              tmp->str_sort[tmp->count_num],
              &tmp->str_sort[tmp->count_num - 1]);
          break;
        case '^':
          x = 1;
          tmp->count_num--;
          s_pow(tmp->str_sort[tmp->count_num - 1],
                tmp->str_sort[tmp->count_num],
                &tmp->str_sort[tmp->count_num - 1]);
          break;
      }
    }
    if (x == 0) {
      pod_case_2(tmp);
    }
  }
  tmp->count_num--;
  if (tmp->res_flag == 0) {
    *result = tmp->str_sort[tmp->count_num];
  }
  return tmp->res_flag;
}

/**
 * @brief свитч для функции podscet
 *
 * @param tmp основная структура
 * @return int возвращает 1 при совпадении
 */
int pod_case_1(polish *tmp) {
  int x = 0;
  switch (tmp->x) {
    case '-':
      min(tmp);
      x = 1;
      break;
    case '0':
      convertation(tmp);
      x = 1;
      break;
    case '1':
      convertation(tmp);
      x = 1;
      break;
    case '2':
      convertation(tmp);
      x = 1;
      break;
    case '3':
      convertation(tmp);
      x = 1;
      break;
    case '4':
      convertation(tmp);
      x = 1;
      break;
    case '5':
      convertation(tmp);
      x = 1;
      break;
    case '6':
      convertation(tmp);
      x = 1;
      break;
    case '7':
      convertation(tmp);
      x = 1;
      break;
    case '8':
      convertation(tmp);
      x = 1;
      break;
    case '9':
      convertation(tmp);
      x = 1;
      break;
  }
  return x;
}

/**
 * @brief вторая часть свитча функции podschet
 *
 * @param tmp основная структура
 */
void pod_case_2(polish *tmp) {
  switch (tmp->x) {
    case 'c':
      s_cos(&tmp->str_sort[tmp->count_num - 1]);
      break;
    case 's':
      s_sin(&tmp->str_sort[tmp->count_num - 1]);
      break;
    case 't':
      s_tan(tmp, &tmp->str_sort[tmp->count_num - 1]);
      break;
    case 'l':
      s_ln(&tmp->str_sort[tmp->count_num - 1]);
      break;
    case 'L':
      s_log_10(&tmp->str_sort[tmp->count_num - 1]);
      break;
    case 'C':
      s_acos(&tmp->str_sort[tmp->count_num - 1]);
      break;
    case 'S':
      s_asin(&tmp->str_sort[tmp->count_num - 1]);
      break;
    case 'T':
      s_atan(&tmp->str_sort[tmp->count_num - 1]);
      break;
    case 'R':
      s_sqrt(tmp, &tmp->str_sort[tmp->count_num - 1]);
      break;
  }
}

/**
 * @brief при знаке '-' записывает -1
 *
 * @param tmp основная структура
 */
void min(polish *tmp) {
  tmp->str_sort[tmp->count_num] = -1;
  tmp->count_num++;
  tmp->count_own += 2;
  tmp->prior = 0;
}

/**
 * @brief конвертирует численную строку в число double
 *
 * @param tmp основная структура
 */
void convertation(polish *tmp) {
  tmp->result = 0;
  int count = 0, flag = 0;
  for (; tmp->numbers[tmp->count_own] != ' ' &&
         tmp->numbers[tmp->count_own] != '\0';
       tmp->count_own++) {
    if (tmp->numbers[tmp->count_own] == '.') {
      flag = 1;
    } else {
      tmp->result = (tmp->result * 10) + (tmp->numbers[tmp->count_own] - '0');
      if (flag == 1) {
        count++;
      }
    }
  }
  while (count > 0) {
    tmp->result *= 0.1;
    count--;
  }
  tmp->str_sort[tmp->count_num] = tmp->result;
  tmp->result = 0;
  tmp->count_num++;
}

/**
 * @brief функция сложения
 *
 * @param x 1 число
 * @param y 2 число
 * @param result результат
 */
void plus(double x, double y, double *result) { *result = x + y; }

/**
 * @brief умножает 2 числа
 *
 * @param x 1 число
 * @param y 2 число
 * @param result результат
 */
void mul(double x, double y, double *result) { *result = x * y; }

/**
 * @brief делит 2 числа, если делитель равен 0, то записывает в структуру флаг
 * ошибки
 *
 * @param tmp общая структура
 * @param x делимое
 * @param y делитель
 * @param result результат
 */
void divv(polish *tmp, double x, double y, double *result) {
  if (y == 0) {
    tmp->res_flag = 1;
  } else {
    *result = x / y;
  }
}

/**
 * @brief остаток от деления, если делитель равен 0, то записывает в структуру
 * флаг ошибки
 *
 * @param tmp основная структура
 * @param x делимое
 * @param y делитель
 * @param result остаток
 */
void mod(polish *tmp, double x, double y, double *result) {
  if (y == 0) {
    tmp->res_flag = 1;
  } else {
    *result = fmod(x, y);
  }
}

/**
 * @brief возводит в степень
 *
 * @param x число
 * @param y степень
 * @param result результат
 */
void s_pow(double x, double y, double *result) { *result = pow(x, y); }

/**
 * @brief вычисляет косинус
 *
 * @param result результат
 */
void s_cos(double *result) {
  *result = cos(*result);
  if (fabs(*result) <= 1e-3) {
    *result = 0;
  }
}

/**
 * @brief вычисляет синус
 *
 * @param result результат
 */
void s_sin(double *result) {
  *result = sin(*result);
  if (fabs(*result) <= 1e-3) {
    *result = 0;
  }
}

/**
 * @brief вычисляет тангенс
 *
 * @param result результат
 */
void s_tan(polish *tmp, double *result) {
  double t = cos(*result);
  if (fabs(t) <= 1e-3) {
    tmp->res_flag = 1;
  } else {
    if (fabs(*result = tan(*result)) <= 1e-3) {
      *result = 0;
    }
  }
}

/**
 * @brief вычисляет арккосинус
 *
 * @param result результат
 */
void s_acos(double *result) { *result = acos(*result); }

/**
 * @brief вычисляет арксинус
 *
 * @param result результат
 */
void s_asin(double *result) { *result = asin(*result); }

/**
 * @brief вычисляет арктангенс
 *
 * @param result результат
 */
void s_atan(double *result) { *result = atan(*result); }

/**
 * @brief вычисляет квадратный корень, если число меньше 0, то записывает в
 * структуру флаг ошибки
 *
 * @param tmp основная структура
 * @param result результат
 */
void s_sqrt(polish *tmp, double *result) {
  if (*result < 0) {
    tmp->res_flag = 1;
  } else {
    *result = sqrt(*result);
  }
}

/**
 * @brief вычисляет натуральный логарифм
 *
 * @param result результат
 */
void s_ln(double *result) { *result = log(*result); }

/**
 * @brief вычисляет десятичный логарифм
 *
 * @param result результат
 */
void s_log_10(double *result) { *result = log10(*result); }
