#ifndef DAL_H
#define DAL_H
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QLabel>
#include <QSqlRecord>
#include <QSqlError>
#include <QMessageBox>
#include <QApplication>
#include <QString>

class DAL
{
public:
    static DAL* Instance();

    DAL Requete();
private:
    DAL* operator= (const DAL&){}
    DAL (const DAL*){}

    static DAL* m_instance;
    DAL();
    ~DAL();
    QSqlDatabase db;
};
#endif
