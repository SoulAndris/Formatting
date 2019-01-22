#ifndef FORMATING_H
#define FORMATING_H

#include <QMainWindow>
#include <QList>
#include <QDir>
#include <QFileInfoList>
#include <QDebug>

namespace Ui {
class Formating;
}

class Formating : public QMainWindow
{
    Q_OBJECT

public:
     Formating(QWidget *parent = 0);
    ~Formating();

private:
    Ui::Formating *ui;
};

#endif // FORMATING_H
