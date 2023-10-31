#ifndef MAINDLG_H
#define MAINDLG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class mainDlg; }
QT_END_NAMESPACE

class mainDlg : public QDialog
{
  Q_OBJECT

public:
  mainDlg(QWidget *parent = nullptr);
  ~mainDlg();

private:
  Ui::mainDlg *ui;
};
#endif // MAINDLG_H
