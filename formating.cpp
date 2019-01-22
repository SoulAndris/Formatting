#include "formating.h"
#include "ui_formating.h"

Formating::Formating(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Formating)
{
    ui->setupUi(this);
    ui->DriveList->clear();

    QFileInfoList drives = QDir::drives();

    for(int i = 0, size = drives.size(); i < size; ++i)
    {
        foreach (QFileInfo valu, drives)
        {
             ui->DriveList->addItem(valu.filePath());
        }
    }

    int allocation_list = 1024;

    for( int i = 0; i < 6; ++i)
    {
        ui->AllocUnit->addItem(QString::number(allocation_list));
        allocation_list = allocation_list * 2;
    }


}

Formating::~Formating()
{
    delete ui;
}
