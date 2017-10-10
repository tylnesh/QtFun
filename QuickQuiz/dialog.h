#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QTimer>
#include <QTime>
#include <QMediaPlayer>
#include <QMovie>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0, bool math = false, bool english = false);
    ~Dialog();

private:
    Ui::Dialog *ui;
    QTimer *timer;
    QTime *time;
    QMediaPlayer *player;
    QMovie *fireball;
    void playExplosion();
    int testMath();
    void isCorrect(int r);

private slots:
    void updateClock();
    void on_OK_clicked();
};

#endif // DIALOG_H
