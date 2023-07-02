// created by pizpotli
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

extern "C" {
#include "s21_polish.h"
}

class MainWindow : public QMainWindow {
  Q_OBJECT
  int x_zero = 0;
  int flag_znak = 0;
  int count_start = 0;
  int flag_math = 0;
  int flag_number = 0;
  int count_skob = 0;
  int count_skob_1 = 0;
  int count_zero_skob = 0;
  int main_count = 0;
  int count_skob_2 = 0;
  int count_to_znak_for_skob_2 = 0;
  int count_to_math_for_skob_2 = 0;
  int count_invert = 0;
  int x_count = 1;
  int f = 0;
  int stop_flag = 0;
  int flag_x = 0;
  double res_f = 0;
  double result = 0;
  int count_equel = 0;
  QString operation;
  QString tmp;
  QString invert;
  QString proc;
  QString res;
  QString sum_kred;
  QString srok_kred;

 public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

 private:
  Ui::MainWindow *ui;
  double begin, end, h, tmp_vector;
  int N;
  QVector<double> z, r;

 private slots:
  void digits_numbers();
  void digits_numbers_path_2();
  void on_pushButton_toch_clicked();
  void inversion();
  void on_pushButton_equel_clicked();
  void on_pushButton_AC_clicked();
  void math_operations_simple();
  void math_operations();
  void math_operations_path_2();
  void skob_1();
  void skob_2();
  void len_srez();
  void on_itog_aut_clicked();
  void on_itog_dif_clicked();
  void autent();
  void grapf_main();
  void grapf_arrow();
  void equel_x();
};
#endif  // MAINWINDOW_H
