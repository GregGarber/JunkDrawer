/************************************************************************************************
** File created by QxEntityEditor 1.2.1 (2016/12/28 09:28) : please, do NOT modify this file ! **
************************************************************************************************/

#ifndef _TRYOUT_DATABASE_USER_H_
#define _TRYOUT_DATABASE_USER_H_

namespace database {
class organization;
} // namespace database

namespace database {
class user;
} // namespace database

namespace qx {
namespace dao {
namespace detail {

template <>
struct QxDao_Trigger<database::user>;

} // namespace detail
} // namespace dao
} // namespace qx

namespace database {

/*!
 * \brief for storing users
 */
class TRYOUT_EXPORT user
{

   QX_REGISTER_FRIEND_CLASS(database::user)
   friend struct qx::dao::detail::QxDao_Trigger<database::user>;

public:

   typedef qx::QxCollection<long, boost::shared_ptr<database::organization> > type_list_of_organization;

protected:

   long m_user_id;
   QString m_username;
   QString m_password;
   QString m_first_name;
   QString m_last_name;
   type_list_of_organization m_list_of_organization;

public:

   user();
   user(const long & id);
   virtual ~user();

   long getuser_id() const;
   QString getusername() const;
   QString getpassword() const;
   QString getfirst_name() const;
   QString getlast_name() const;
   type_list_of_organization getlist_of_organization() const;
   type_list_of_organization & list_of_organization();
   const type_list_of_organization & list_of_organization() const;

   void setuser_id(const long & val);
   void setusername(const QString & val);
   void setpassword(const QString & val);
   void setfirst_name(const QString & val);
   void setlast_name(const QString & val);
   void setlist_of_organization(const type_list_of_organization & val);

   type_list_of_organization getlist_of_organization(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_list_of_organization & list_of_organization(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);

private:

   // The following validator method must be implemented in a custom code
   void validate(qx::QxInvalidValueX & invalidValues);

public:

   static QString relation_list_of_organization(bool key = false) { Q_UNUSED(key); return "list_of_organization"; }

public:

   static QString column_user_id(bool key = false) { return (key ? QString("user_id") : QString("id")); }
   static QString column_username(bool key = false) { Q_UNUSED(key); return "username"; }
   static QString column_password(bool key = false) { Q_UNUSED(key); return "password"; }
   static QString column_first_name(bool key = false) { Q_UNUSED(key); return "first_name"; }
   static QString column_last_name(bool key = false) { Q_UNUSED(key); return "last_name"; }

public:

   static QString table_name(bool key = false) { Q_UNUSED(key); return "user"; }

protected:

   // The following triggers methods must be implemented in a custom code
   virtual void onBeforeUpdate(qx::dao::detail::IxDao_Helper * dao);

};

typedef qx_shared_ptr<user> user_ptr;
typedef qx::QxCollection<long, user_ptr> list_of_user;
typedef qx_shared_ptr<list_of_user> list_of_user_ptr;

} // namespace database

QX_REGISTER_COMPLEX_CLASS_NAME_HPP_TRYOUT(database::user, qx::trait::no_base_class_defined, 0, database_user)

namespace qx {
namespace dao {
namespace detail {

template <>
struct QxDao_Trigger<database::user>
{

   static inline void onBeforeFetch(database::user * t, qx::dao::detail::IxDao_Helper * dao)  { Q_UNUSED(t); Q_UNUSED(dao); }
   static inline void onAfterFetch(database::user * t, qx::dao::detail::IxDao_Helper * dao)  { Q_UNUSED(t); Q_UNUSED(dao); }
   static inline void onBeforeInsert(database::user * t, qx::dao::detail::IxDao_Helper * dao)  { Q_UNUSED(t); Q_UNUSED(dao); }
   static inline void onAfterInsert(database::user * t, qx::dao::detail::IxDao_Helper * dao)  { Q_UNUSED(t); Q_UNUSED(dao); }
   static inline void onBeforeUpdate(database::user * t, qx::dao::detail::IxDao_Helper * dao)  { if (t) { t->onBeforeUpdate(dao); } }
   static inline void onAfterUpdate(database::user * t, qx::dao::detail::IxDao_Helper * dao)  { Q_UNUSED(t); Q_UNUSED(dao); }
   static inline void onBeforeDelete(database::user * t, qx::dao::detail::IxDao_Helper * dao)  { Q_UNUSED(t); Q_UNUSED(dao); }
   static inline void onAfterDelete(database::user * t, qx::dao::detail::IxDao_Helper * dao)  { Q_UNUSED(t); Q_UNUSED(dao); }

};

} // namespace detail
} // namespace dao
} // namespace qx

#include "../include/database_organization.gen.h"

#include "../custom/include/database_user.h"

#endif // _TRYOUT_DATABASE_USER_H_
