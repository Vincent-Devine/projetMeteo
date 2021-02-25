#include <iostream>
#include "dal.h"
#include <QSqlQuery>

using namespace std;

DAL* DAL::m_instance = NULL;

DAL::DAL()
{
    cout<<"Creation"<<endl;
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("meteo");
    db.setUserName("root");
    db.setPassword("password");
    bool ok = db.open();

    if(ok==true)
        cout<<"Vous êtes Connecté"<<endl;
    else
        cout<<"La connection a échouée"<<endl;
}


DAL::~DAL()
{
    cout<<"Destruction"<<endl;
    db.close();
}

DAL* DAL::Instance()
{
    if(!m_instance)
        m_instance = new DAL;
    return m_instance;
}


DAL DAL::Requete()
{
  QSqlQuery query;
  query.prepare("SELECT Donne FROM Actuel WHERE MAX(Date)");
  query.exec();
  if (query.exec())
  {
      QString Donne = query.value(0).toString();
      QVector<QString> tableauDonne(200, Donne);
     // QDebug()<<"tableauDonne";
  }
  else
  {
      cout<<"erreur"<<endl;
  }
}
