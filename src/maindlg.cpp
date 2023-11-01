#include "maindlg.h"
#include "ui_maindlg.h"

mainDlg::mainDlg(QWidget *parent)
  : QDialog(parent)
  , ui(new Ui::mainDlg)
{
  /* Un comentario diferente */
  ui->setupUi(this);
}

mainDlg::~mainDlg()
{
  delete ui;
}

