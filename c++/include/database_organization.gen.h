/************************************************************************************************
** File created by QxEntityEditor 1.2.1 (2016/12/28 09:28) : please, do NOT modify this file ! **
************************************************************************************************/

#ifndef _TRYOUT_DATABASE_ORGANIZATION_H_
#define _TRYOUT_DATABASE_ORGANIZATION_H_

namespace database {
class user;
} // namespace database

namespace database {

class TRYOUT_EXPORT organization
{

   QX_REGISTER_FRIEND_CLASS(database::organization)

public:

   typedef qx::QxCollection<long, boost::shared_ptr<database::user> > type_users;

protected:

   long m_organization_id;
   QString m_name;
   QString m_city;
   type_users m_users;

public:

   organization();
   organization(const long & id);
   virtual ~organization();

   long getorganization_id() const;
   QString getname() const;
   QString getcity() const;
   type_users getusers() const;
   type_users & users();
   const type_users & users() const;

   void setorganization_id(const long & val);
   void setname(const QString & val);
   void setcity(const QString & val);
   void setusers(const type_users & val);

   type_users getusers(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_users & users(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);

public:

   static QString relation_users(bool key = false) { Q_UNUSED(key); return "users"; }

public:

   static QString column_organization_id(bool key = false) { return (key ? QString("organization_id") : QString("id")); }
   static QString column_name(bool key = false) { Q_UNUSED(key); return "name"; }
   static QString column_city(bool key = false) { Q_UNUSED(key); return "city"; }

public:

   static QString table_name(bool key = false) { Q_UNUSED(key); return "organization"; }

};

typedef qx_shared_ptr<organization> organization_ptr;
typedef qx::QxCollection<long, organization_ptr> list_of_organization;
typedef qx_shared_ptr<list_of_organization> list_of_organization_ptr;

} // namespace database

QX_REGISTER_COMPLEX_CLASS_NAME_HPP_TRYOUT(database::organization, qx::trait::no_base_class_defined, 0, database_organization)

#include "../include/database_user.gen.h"

#include "../custom/include/database_organization.h"

#endif // _TRYOUT_DATABASE_ORGANIZATION_H_
