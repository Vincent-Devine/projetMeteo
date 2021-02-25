#ifndef METEO_H
#define METEO_H

#include <QMainWindow>
#include <QLabel>

namespace Ui {
class meteo;
}

class meteo : public QMainWindow
{
    Q_OBJECT

public:
    explicit meteo(QWidget *parent = 0);
    ~meteo();

private slots:

private:
    Ui::meteo *ui;

};

#endif // METEO_H
