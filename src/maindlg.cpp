#include "maindlg.h"
#include "ui_maindlg.h"

mainDlg::mainDlg(QWidget *parent)
  : QDialog(parent)
  , ui(new Ui::mainDlg)
{
  /* Un comentario diferente */
  /* Segundo comentario */
  ui->setupUi(this);
}

mainDlg::~mainDlg()
{
  delete ui;
}

