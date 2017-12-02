/************************************************************************************************
** File created by QxEntityEditor 1.2.1 (2016/12/28 09:28) : please, do NOT modify this file ! **
************************************************************************************************/

#include "../include/tryout_precompiled_header.gen.h"

#include "../include/database_user.gen.h"
#include "../include/database_organization.gen.h"

#include <QxOrm_Impl.h>

QX_REGISTER_COMPLEX_CLASS_NAME_CPP_TRYOUT(database::user, database_user)

namespace qx {

template <>
void register_class(QxClass<database::user> & t)
{
   qx::IxDataMember * pData = NULL; Q_UNUSED(pData);
   qx::IxSqlRelation * pRelation = NULL; Q_UNUSED(pRelation);
   qx::IxFunction * pFct = NULL; Q_UNUSED(pFct);
   qx::IxValidator * pValidator = NULL; Q_UNUSED(pValidator);

   t.setName("user");
   t.setDescription("for storing users");
   t.setSoftDelete(qx::QxSoftDelete("is_soft_deleted"));

   pData = t.id(& database::user::m_user_id, "user_id", 0);
   pData->setName("id");

   pData = t.data(& database::user::m_username, "username", 0, true, true);
   pData = t.data(& database::user::m_password, "password", 0, true, true);
   pData = t.data(& database::user::m_first_name, "first_name", 0, true, true);
   pData = t.data(& database::user::m_last_name, "last_name", 0, true, true);

   pRelation = t.relationManyToMany(& database::user::m_list_of_organization, "list_of_organization", "t_qxee_organization_user", "user_id", "organization_id", 0);

   qx::QxValidatorX<database::user> * pAllValidator = t.getAllValidator(); Q_UNUSED(pAllValidator);
   pAllValidator->add_CustomValidator(& database::user::validate);
}

} // namespace qx

namespace database {

user::user() : m_user_id(0) { ; }

user::user(const long & id) : m_user_id(id) { ; }

user::~user() { ; }

long user::getuser_id() const { return m_user_id; }

QString user::getusername() const { return m_username; }

QString user::getpassword() const { return m_password; }

QString user::getfirst_name() const { return m_first_name; }

QString user::getlast_name() const { return m_last_name; }

user::type_list_of_organization user::getlist_of_organization() const { return m_list_of_organization; }

user::type_list_of_organization & user::list_of_organization() { return m_list_of_organization; }

const user::type_list_of_organization & user::list_of_organization() const { return m_list_of_organization; }

void user::setuser_id(const long & val) { m_user_id = val; }

void user::setusername(const QString & val) { m_username = val; }

void user::setpassword(const QString & val) { m_password = val; }

void user::setfirst_name(const QString & val) { m_first_name = val; }

void user::setlast_name(const QString & val) { m_last_name = val; }

void user::setlist_of_organization(const user::type_list_of_organization & val) { m_list_of_organization = val; }

user::type_list_of_organization user::getlist_of_organization(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getlist_of_organization(); }
   QString sRelation = "list_of_organization";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   database::user tmp;
   tmp.m_user_id = this->m_user_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_list_of_organization = tmp.m_list_of_organization; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_list_of_organization;
}

user::type_list_of_organization & user::list_of_organization(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return list_of_organization(); }
   QString sRelation = "list_of_organization";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   database::user tmp;
   tmp.m_user_id = this->m_user_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_list_of_organization = tmp.m_list_of_organization; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_list_of_organization;
}

} // namespace database
