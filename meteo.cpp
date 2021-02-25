#include "meteo.h"
#include "ui_meteo.h"

meteo::meteo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::meteo)
{
    ui->setupUi(this);
    //monLabel = new QLabel("nouveau message");
}

meteo::~meteo()
{
    delete ui;
}
