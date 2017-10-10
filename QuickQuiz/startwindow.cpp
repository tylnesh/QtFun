#include "startwindow.h"
#include "ui_startwindow.h"
#include <dialog.h>

StartWindow::StartWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::StartWindow)
{
    ui->setupUi(this);
}

StartWindow::~StartWindow()
{
    delete ui;
}

void StartWindow::on_pushButton_clicked()
{
Dialog * d = new Dialog(0,ui->math->isChecked(),ui->english->isChecked());
d->exec();
delete d;
}
