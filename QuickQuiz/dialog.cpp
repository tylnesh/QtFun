#include "dialog.h"
#include "ui_dialog.h"
#include <QPixmap>
#include <QTimer>
#include <QTime>
#include <QMediaPlayer>
#include <QDebug>
#include <random>

int res = 0;
Dialog::Dialog(QWidget *parent, bool math, bool english) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    QPixmap pix(":res/bomb.png");
    player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile(":res/explosion.mp3"));
    fireball = new QMovie(":res/boom.gif");
    player->setVolume(50);
    ui->label->setPixmap(pix);
    time = new QTime(0,5,0);
    timer = new QTimer();
    QString text = time->toString(Qt::TextDate);
    ui->lcdNumber->display(text);

    connect(timer, SIGNAL(timeout()), this, SLOT(updateClock()));
    timer->start(1000);



         res = testMath();






    if (english) qDebug() << "English";






}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::playExplosion(){
player->play();
}

void Dialog::updateClock() {

    *time = time->addSecs(-1);
    QString text = time->toString(Qt::TextDate);
    ui->lcdNumber->display(text);
    if(QTime(0,0,0).secsTo(*time) == 1) {
        playExplosion();}


    if(QTime(0,0,0).secsTo(*time) == 0) {
        ui->lcdNumber->setVisible(false);
        ui->label->setMovie(fireball);
        fireball->start();
    }
}

int Dialog::testMath(){


       int x; int y; int op; int res;
       QString str;

        x = random() % 100;
        y = random() % 100;
        op = random() % 4;


        switch (op){

        case 1: // +

            str =  QString::number(x) + "+" + QString::number(y) ;
            res = x+y;
            ui->problem->setText(str);
            break;
        case 2: // -

            if (x>y) { str =  QString::number(x) + "-" + QString::number(y) ;
                res = x-y; }
            else { str =  QString::number(y) + "-" + QString::number(x) ; res = y-x;}
            ui->problem->setText(str);
        case 3: // *

            str =  QString::number(x) + "*" + QString::number(y) ;
            res = x*y;
            ui->problem->setText(str);
            break;
        default: // /

            if (x>y) { str =  QString::number(x) + "/" + QString::number(y) ; res = x/y; }
            else { str =  QString::number(y) + "/" + QString::number(x) ; res = y/x;}
            ui->problem->setText(str);

        }

        return res;
}

void Dialog::isCorrect(int r){

    if (r == ui->answer->text().toInt()) qDebug() << "correct";
}

void Dialog::on_OK_clicked()
{
    Dialog::isCorrect(res); res = testMath();
}
