// created by pizpotli
#include "mainwindow.h"

#include <QMessageBox>

#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);

  connect(ui->pushButton_iks, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->pushButton_0, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->pushButton_1, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->pushButton_4, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->pushButton_5, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->pushButton_6, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->pushButton_7, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->pushButton_8, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->pushButton_9, SIGNAL(clicked()), this, SLOT(digits_numbers()));
  connect(ui->pushButton_tan, SIGNAL(clicked()), this, SLOT(math_operations()));
  connect(ui->pushButton_cos, SIGNAL(clicked()), this, SLOT(math_operations()));
  connect(ui->pushButton_sin, SIGNAL(clicked()), this, SLOT(math_operations()));
  connect(ui->pushButton_log, SIGNAL(clicked()), this, SLOT(math_operations()));
  connect(ui->pushButton_ln, SIGNAL(clicked()), this, SLOT(math_operations()));
  connect(ui->pushButton_invers, SIGNAL(clicked()), this, SLOT(inversion()));
  connect(ui->pushButton_skob, SIGNAL(clicked()), this, SLOT(skob_1()));
  connect(ui->pushButton_skob_2, SIGNAL(clicked()), this, SLOT(skob_2()));
  connect(ui->pushButton_graph, SIGNAL(clicked()), this, SLOT(grapf_arrow()));
  connect(ui->pushButton_minus, SIGNAL(clicked()), this,
          SLOT(math_operations_simple()));
  connect(ui->pushButton_mod, SIGNAL(clicked()), this,
          SLOT(math_operations_simple()));
  connect(ui->pushButton_mul, SIGNAL(clicked()), this,
          SLOT(math_operations_simple()));
  connect(ui->pushButton_plus, SIGNAL(clicked()), this,
          SLOT(math_operations_simple()));
  connect(ui->pushButton_div, SIGNAL(clicked()), this,
          SLOT(math_operations_simple()));
  connect(ui->pushButton_atan, SIGNAL(clicked()), this,
          SLOT(math_operations()));
  connect(ui->pushButton_acos, SIGNAL(clicked()), this,
          SLOT(math_operations()));
  connect(ui->pushButton_asin, SIGNAL(clicked()), this,
          SLOT(math_operations()));
  connect(ui->pushButton_pow, SIGNAL(clicked()), this,
          SLOT(math_operations_simple()));
  connect(ui->pushButton_sqrt, SIGNAL(clicked()), this,
          SLOT(math_operations()));
  connect(ui->pushButton_equel, SIGNAL(clicked()), this,
          SLOT(on_pushButton_equel_clicked()));
  connect(ui->pushButton_AC, SIGNAL(clicked()), this,
          SLOT(on_pushButton_AC_clicked()));

  ui->pushButton_plus->setCheckable(true);
  ui->pushButton_minus->setCheckable(true);
  ui->pushButton_mul->setCheckable(true);
  ui->pushButton_div->setCheckable(true);
  ui->pushButton_mod->setCheckable(true);
  ui->pushButton_pow->setCheckable(true);
  ui->pushButton_cos->setCheckable(true);
  ui->pushButton_sin->setCheckable(true);
  ui->pushButton_tan->setCheckable(true);
  ui->pushButton_acos->setCheckable(true);
  ui->pushButton_asin->setCheckable(true);
  ui->pushButton_atan->setCheckable(true);
  ui->pushButton_sqrt->setCheckable(true);
  ui->pushButton_ln->setCheckable(true);
  ui->pushButton_log->setCheckable(true);
  ui->pushButton_iks->setCheckable(true);
  ui->pushButton_equel->setCheckable(true);
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::digits_numbers() {
  len_srez();
  count_invert = 0;
  invert = "";
  if (!(ui->result_show->text().contains('x'))) {
    if (ui->pushButton_iks->isChecked()) {
      flag_x = 1;
    }
    if (count_skob_1 == 1 || count_skob_2 == 1) {
      ui->result_show_2->setText(ui->result_show_2->text() +
                                 ui->result_show->text());
      ui->result_show->setText("");
      count_skob_1 = 0;
      count_skob_2 = 0;
      tmp = "";
    }
    if (flag_znak == 1 && flag_math == 0) {
      ui->result_show_2->setText(ui->result_show_2->text() + tmp);
      tmp = "";
      ui->result_show->setText("");
    }
    if (flag_math == 1) {
      count_skob = 1;
      ui->result_show_2->setText(ui->result_show_2->text() +
                                 ui->result_show->text());
      ui->result_show->setText("");
      flag_math = 0;
    }
    digits_numbers_path_2();
    ui->pushButton_iks->setChecked(false);
  }
}

void MainWindow::digits_numbers_path_2() {
  QPushButton *button = (QPushButton *)sender();
  flag_znak = 0;
  count_start = 1;
  flag_number = 1;
  if (ui->result_show->text().contains(".") && button->text() == "0") {
    ui->result_show->setText(ui->result_show->text() + button->text());
  } else if (button->text() == "0" && ui->result_show->text() == "0") {
  } else {
    if (ui->result_show->text() == "0") {
      ui->result_show->setText(button->text());
    } else {
      if (button->text() != "x") {
        ui->result_show->setText(ui->result_show->text() + button->text());
      } else {
        if (ui->result_show->text() == "") {
          ui->result_show->setText(ui->result_show->text() + button->text());
        }
      }
    }
  }
}

void MainWindow::len_srez() {
  int len;
  int len2;
  QString lenf;
  QString lenf2;
  lenf = ui->result_show_2->text();
  lenf2 = ui->result_show->text();
  len = lenf.size();
  len2 = lenf2.size();
  if ((len + len2) > 80 * x_count) {
    x_count++;
    ui->result_show_2->setText(ui->result_show_2->text() + "\n");
  }
}

void MainWindow::on_pushButton_toch_clicked() {
  if (flag_number == 1 && !(ui->result_show->text().contains(')')) &&
      !(ui->result_show->text().contains('x'))) {
    if (!(ui->result_show->text().contains('.')))
      ui->result_show->setText(ui->result_show->text() + ".");
  }
}

void MainWindow::inversion() {
  len_srez();
  if (flag_number == 1) {
    if (count_invert == 0) {
      invert = ui->result_show->text();
      ui->result_show->setText("(-" + ui->result_show->text() + ")");
      count_invert = 1;
    } else {
      ui->result_show->setText(invert);
      count_invert = 0;
    }
  }
}

void MainWindow::math_operations_simple() {
  QPushButton *button = (QPushButton *)sender();
  button->setChecked(true);
  tmp = button->text();
  len_srez();
  count_invert = 0;
  invert = "";
  if (flag_number == 1 && stop_flag == 0) {
    if (flag_znak == 0 && count_start > 0) {
      if (ui->pushButton_plus->isChecked()) {
        ui->result_show_2->setText(ui->result_show_2->text() +
                                   ui->result_show->text());
        ui->result_show->setText(button->text());
        ui->pushButton_plus->setChecked(false);
      } else if (ui->pushButton_minus->isChecked()) {
        ui->result_show_2->setText(ui->result_show_2->text() +
                                   ui->result_show->text());
        ui->result_show->setText(button->text());
        ui->pushButton_minus->setChecked(false);
      } else if (ui->pushButton_mul->isChecked()) {
        ui->result_show_2->setText(ui->result_show_2->text() +
                                   ui->result_show->text());
        ui->result_show->setText(button->text());
        ui->pushButton_mul->setChecked(false);
      } else if (ui->pushButton_div->isChecked()) {
        ui->result_show_2->setText(ui->result_show_2->text() +
                                   ui->result_show->text());
        ui->result_show->setText(button->text());
        ui->pushButton_div->setChecked(false);
      } else if (ui->pushButton_mod->isChecked()) {
        ui->result_show_2->setText(ui->result_show_2->text() +
                                   ui->result_show->text());
        ui->result_show->setText(button->text());
        ui->pushButton_mod->setChecked(false);
      } else if (ui->pushButton_pow->isChecked()) {
        ui->result_show_2->setText(ui->result_show_2->text() +
                                   ui->result_show->text());
        ui->result_show->setText(button->text());
        ui->pushButton_pow->setChecked(false);
      }
      flag_znak = 1;
      count_to_znak_for_skob_2 = 1;
    }
    flag_math = 0;
    flag_number = 0;
  }
  if (count_start == 1 && flag_math == 0 && count_skob_1 == 0 &&
      stop_flag == 0) {
    ui->result_show->setText(button->text());
  }
}

void MainWindow::math_operations() {
  QPushButton *button = (QPushButton *)sender();
  len_srez();
  count_invert = 0;
  invert = "";
  if (stop_flag == 0) {
    if (count_start == 0) {
      count_skob = 1;
      if (x_zero == 1 || count_skob_1 == 1) {
        ui->result_show_2->setText(ui->result_show_2->text() +
                                   ui->result_show->text());
      }
      ui->result_show->setText(button->text() + "(");
      main_count++;
      x_zero = 1;
      count_skob_1 = 0;
      count_to_math_for_skob_2 = 1;
    }
    if ((flag_znak == 1 || count_start == 1) && flag_number == 0) {
      math_operations_path_2();
    }
    flag_math = 1;  // разобраться
    if (flag_znak == 1) {
      flag_math = 1;
      operation = button->text();
      ui->result_show->setText(button->text() + "(");
    }
  }
}

void MainWindow::math_operations_path_2() {
  QPushButton *button = (QPushButton *)sender();
  button->setChecked(true);
  operation = button->text();
  if (stop_flag == 0) {
    if (ui->pushButton_cos->isChecked()) {
      ui->result_show_2->setText(ui->result_show_2->text() +
                                 ui->result_show->text());
      ui->result_show->setText(button->text());
      ui->pushButton_cos->setChecked(false);
    } else if (ui->pushButton_sin->isChecked()) {
      ui->result_show_2->setText(ui->result_show_2->text() +
                                 ui->result_show->text());
      ui->result_show->setText(button->text());
      ui->pushButton_sin->setChecked(false);
    } else if (ui->pushButton_tan->isChecked()) {
      ui->result_show_2->setText(ui->result_show_2->text() +
                                 ui->result_show->text());
      ui->result_show->setText(button->text());
      ui->pushButton_tan->setChecked(false);
    } else if (ui->pushButton_acos->isChecked()) {
      ui->result_show_2->setText(ui->result_show_2->text() +
                                 ui->result_show->text());
      ui->result_show->setText(button->text());
      ui->pushButton_acos->setChecked(false);
    } else if (ui->pushButton_asin->isChecked()) {
      ui->result_show_2->setText(ui->result_show_2->text() +
                                 ui->result_show->text());
      ui->result_show->setText(button->text());
      ui->pushButton_asin->setChecked(false);
    } else if (ui->pushButton_atan->isChecked()) {
      ui->result_show_2->setText(ui->result_show_2->text() +
                                 ui->result_show->text());
      ui->result_show->setText(button->text());
      ui->pushButton_atan->setChecked(false);
    } else if (ui->pushButton_sqrt->isChecked()) {
      ui->result_show_2->setText(ui->result_show_2->text() +
                                 ui->result_show->text());
      ui->result_show->setText(button->text());
      ui->pushButton_sqrt->setChecked(false);
    } else if (ui->pushButton_ln->isChecked()) {
      ui->result_show_2->setText(ui->result_show_2->text() +
                                 ui->result_show->text());
      ui->result_show->setText(button->text());
      ui->pushButton_ln->setChecked(false);
    } else if (ui->pushButton_log->isChecked()) {
      ui->result_show_2->setText(ui->result_show_2->text() +
                                 ui->result_show->text());
      ui->result_show->setText(button->text());
      ui->pushButton_log->setChecked(false);
    }
    count_skob = 1;
    main_count++;
  }
}

void MainWindow::on_pushButton_AC_clicked() {
  ui->widget->addGraph()->data()->clear();
  while (f >= 0) {
    ui->widget->graph(f)->data()->clear();
    ui->widget->replot();
    f--;
  }
  ui->pushButton_plus->setChecked(false);
  ui->pushButton_minus->setChecked(false);
  ui->pushButton_mul->setChecked(false);
  ui->pushButton_div->setChecked(false);
  ui->pushButton_mod->setChecked(false);
  ui->pushButton_pow->setChecked(false);
  ui->pushButton_cos->setChecked(false);
  ui->pushButton_sin->setChecked(false);
  ui->pushButton_tan->setChecked(false);
  ui->pushButton_acos->setChecked(false);
  ui->pushButton_asin->setChecked(false);
  ui->pushButton_atan->setChecked(false);
  ui->pushButton_sqrt->setChecked(false);
  ui->pushButton_ln->setChecked(false);
  ui->pushButton_log->setChecked(false);
  ui->pushButton_equel->setChecked(false);

  tmp = "";
  count_start = 0;
  count_skob = 0;
  count_skob_1 = 0;
  count_skob_2 = 0;
  count_to_math_for_skob_2 = 0;
  count_to_znak_for_skob_2 = 0;
  main_count = 0;
  count_zero_skob = 0;
  flag_math = 0;
  flag_number = 0;
  flag_znak = 0;
  x_zero = 0;
  count_invert = 0;
  invert = "";
  operation = "";
  x_count = 1;
  flag_x = 0;
  f = 0;
  stop_flag = 0;
  count_equel = 0;
  ui->result_show->setText("0");
  ui->result_show_2->setText("");
  z.clear();
  r.clear();
  ui->widget->replot();
}

void MainWindow::skob_1() {
  QPushButton *button = (QPushButton *)sender();
  button->setChecked(true);
  len_srez();
  count_invert = 0;
  invert = "";
  count_to_znak_for_skob_2 = 0;
  count_to_math_for_skob_2 = 0;
  if (stop_flag == 0) {
    if (flag_znak == 0 && flag_number == 0 && count_start == 0 &&
        count_zero_skob == 0 && flag_math == 0) {
      ui->result_show->setText("");
      count_zero_skob = 1;
    }
    if ((flag_znak == 1 && flag_number == 0) || count_start == 0 ||
        flag_math == 1) {
      ui->result_show_2->setText(ui->result_show_2->text() +
                                 ui->result_show->text());
      ui->result_show->setText("");
      ui->result_show->setText(button->text());
      count_skob_1 = 1;
      main_count++;
    }
  }
  ui->pushButton_skob->setChecked(false);
}

void MainWindow::skob_2() {
  QPushButton *button = (QPushButton *)sender();
  button->setChecked(true);
  len_srez();
  count_invert = 0;
  invert = "";
  if (main_count > 0) {
    if (flag_number == 1 &&
        (count_to_znak_for_skob_2 == 1 || count_to_math_for_skob_2 == 1 ||
         count_skob_2 == 1)) {
      ui->result_show_2->setText(ui->result_show_2->text() +
                                 ui->result_show->text());
      ui->result_show->setText(button->text());
      ui->result_show->setText(")");
      main_count--;
      count_skob_2 = 1;
      count_to_znak_for_skob_2 = 0;
      count_to_math_for_skob_2 = 0;
    }
  }
  ui->pushButton_skob_2->setChecked(false);
}

void MainWindow::on_pushButton_equel_clicked() {
  if ((ui->pushButton_equel->isChecked() || count_equel == 2) &&
      stop_flag == 0) {
    if ((flag_number == 1 || count_skob_2 == 1) &&
        (ui->result_show_2->text().length() +
         ui->result_show->text().length()) > ui->result_show->text().length()) {
      QString tmp_tmp = ui->result_show->text();
      ui->result_show->setText("");
      ui->result_show_2->setText(ui->result_show_2->text() + tmp_tmp);
      while (main_count > 0) {
        ui->result_show_2->setText(ui->result_show_2->text() + ")");
        main_count--;
      }
      if (flag_x == 1) {
        stop_flag = 1;
        flag_number = 0;
      } else if (flag_x == 0 && count_equel == 0) {
        QString add;
        add = ui->result_show_2->text();
        QByteArray add1 = add.toUtf8();
        char *str1 = add1.data();
        char str2[1024] = {0};
        parser_str(str1, str2, str1);
        int flag_res = 0;
        flag_res = polis(str2, &result);
        add = QString ::number(result);
        if (flag_res == 0) {
          ui->result_show->setText(add);
        } else {
          ui->result_show->setText("ERROR");
        }
      }
      count_equel = 1;
    }
  } else {
    equel_x();
  }
  ui->pushButton_equel->setChecked(false);
}

void MainWindow::equel_x() {
  if (ui->pushButton_equel->isChecked()) {
    if (ui->result_show->text() != "") {
      if (ui->result_show->text().contains('x')) {
        ui->result_show->setText("");
      } else {
        QString add;
        add = ui->result_show_2->text();
        QByteArray add1 = add.toUtf8();
        char *str1 = add1.data();
        char str2[1024] = {0};
        tmp = ui->result_show->text();
        QByteArray iks = tmp.toUtf8();
        char *vector_str = iks.data();
        parser_str(str1, str2, vector_str);
        int flag_res = 0;
        flag_res = polis(str2, &result);
        add = QString ::number(result);
        if (flag_res == 0) {
          ui->result_show->setText(add);
        } else {
          ui->result_show->setText("ERROR");
        }
      }
    }
  }
  ui->pushButton_equel->setChecked(false);
}

void MainWindow::grapf_arrow() {
  if (flag_x == 1) {
    count_equel = 2;
    on_pushButton_equel_clicked();
    if (count_equel == 1) {
      grapf_main();
    }
  }
}

void MainWindow::grapf_main() {
  int flag_res = 0;
  h = 0.001;
  ui->widget->xAxis->setRange(ui->oc_x_min->value(), ui->oc_x_max->value());
  ui->widget->yAxis->setRange(ui->oc_y_min->value(), ui->oc_y_max->value());
  if (((fabs(ui->oc_x_min->value()) + fabs(ui->oc_x_max->value())) / h) >
      200000) {
    h = 10;
  }
  if (flag_x == 0) {
    tmp_vector = ui->oc_x_min->value();
    N = (ui->oc_x_max->value() - ui->oc_x_min->value()) / h + 2;
    for (tmp_vector = ui->oc_x_min->value(); tmp_vector < ui->oc_x_max->value();
         tmp_vector += h) {
      z.push_back(tmp_vector);
      r.push_back(result);
    }
  } else {
    res = ui->result_show_2->text();
    QByteArray add1 = res.toUtf8();
    QByteArray vector;
    char *str1 = add1.data();
    char str2[1024] = {0};
    tmp_vector = ui->oc_x_min->value();
    N = (ui->oc_x_max->value() - ui->oc_x_min->value()) / h + 2;
    tmp_vector = ui->oc_x_min->value();
    while (tmp_vector < ui->oc_x_max->value()) {
      for (; tmp_vector < ui->oc_x_max->value(); tmp_vector += h) {
        tmp = QString("%1").arg(tmp_vector, 0, 'f', 3);
        vector = tmp.toUtf8();
        char *vector_str = vector.data();
        parser_str(str1, str2, vector_str);
        flag_res = polis(str2, &result);
        if (flag_res != 0) {
          while (flag_res != 0 && tmp_vector < ui->oc_x_max->value()) {
            tmp = QString("%1").arg(tmp_vector, 0, 'f', 3);
            vector = tmp.toUtf8();
            char *vector_str = vector.data();
            parser_str(str1, str2, vector_str);
            flag_res = polis(str2, &result);
            tmp_vector += h;
            for (int i = 0; str2[i] != '\0'; i++) {
              str2[i] = '\0';
            }
          }
          break;
        }
        for (int i = 0; str2[i] != '\0'; i++) {
          str2[i] = '\0';
        }
        z.push_back(tmp_vector);
        r.push_back(result);
      }
      tmp_vector += h;
      ui->widget->addGraph();
      ui->widget->graph(f)->addData(z, r);
      z.clear();
      r.clear();
      f++;
    }
  }
  ui->result_show->setText("GRAPH BUILT");
  ui->widget->replot();
  flag_x = 0;
}

void MainWindow::autent() {
  res = sum_kred + "*" + proc + "*(1+" + proc + ")^" + srok_kred + "/((1+" +
        proc + ")^" + srok_kred + "-1)))";
  QByteArray add1 = res.toUtf8();
  char *str1 = add1.data();
  char str2[1024] = {0};
  parser_str(str1, str2, str1);
  polis(str2, &res_f);
  res = QString("%1").arg(res_f, 0, 'f', 2);
  res_f = (res).toDouble();
}

void MainWindow::on_itog_aut_clicked() {
  sum_kred = QString("%1").arg(ui->sum_kred_aut->value(), 0, 'f', 2);
  proc = QString ::number(ui->proc_aut->value());
  proc = "(" + proc + "/1200)";
  srok_kred = QString ::number(ui->srok_kred_aut->value());
  autent();
  ui->sum_mes_aut->setText(res);
  double sum = res_f * ui->srok_kred_aut->value();
  proc = QString("%1").arg(sum, 0, 'f', 2);
  ui->dolg_aut->setText(proc);
  sum = sum - ui->sum_kred_aut->value();
  proc = QString("%1").arg(sum, 0, 'f', 2);
  ui->nach_proc_aut->setText(proc);
}

void MainWindow::on_itog_dif_clicked() {
  double dolg = ui->sum_kred_dif->value() / ui->srok_kred_dif->value();
  double summa = ui->sum_kred_dif->value();
  int srok = ui->srok_kred_dif->value();
  res_f = summa * ui->proc_dif->value() / 1200;
  double res_1_mes = dolg + res_f;
  double sum_proc = res_f;
  res = QString("%1").arg(res_1_mes, 0, 'f', 2);
  while (srok > 1) {
    summa = summa - dolg;
    res_f = summa * ui->proc_dif->value() / 1200;
    sum_proc = sum_proc + res_f;
    srok--;
  }
  res_f = res_f + dolg;
  proc = QString("%1").arg(res_f, 0, 'f', 2);
  ui->sum_mes_dif->setText(res + " ... " + proc);
  srok_kred = QString("%1").arg(sum_proc, 0, 'f', 2);
  ui->nach_proc_dif->setText(srok_kred);
  double sum = sum_proc + ui->sum_kred_dif->value();
  sum_kred = QString("%1").arg(sum, 0, 'f', 2);
  ui->dolg_dif->setText(sum_kred);
}
