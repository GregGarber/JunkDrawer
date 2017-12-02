/************************************************************************************************
** File created by QxEntityEditor 1.2.1 (2016/12/28 09:28) : please, do NOT modify this file ! **
************************************************************************************************/

#include "../include/tryout_precompiled_header.gen.h"

#include "../include/database_organization.gen.h"
#include "../include/database_user.gen.h"

#include <QxOrm_Impl.h>

QX_REGISTER_COMPLEX_CLASS_NAME_CPP_TRYOUT(database::organization, database_organization)

namespace qx {

template <>
void register_class(QxClass<database::organization> & t)
{
   qx::IxDataMember * pData = NULL; Q_UNUSED(pData);
   qx::IxSqlRelation * pRelation = NULL; Q_UNUSED(pRelation);
   qx::IxFunction * pFct = NULL; Q_UNUSED(pFct);
   qx::IxValidator * pValidator = NULL; Q_UNUSED(pValidator);

   t.setName("organization");
   t.setSoftDelete(qx::QxSoftDelete("is_soft_deleted"));

   pData = t.id(& database::organization::m_organization_id, "organization_id", 0);
   pData->setName("id");

   pData = t.data(& database::organization::m_name, "name", 0, true, true);
   pData = t.data(& database::organization::m_city, "city", 0, true, true);

   pRelation = t.relationManyToMany(& database::organization::m_users, "users", "t_qxee_organization_user", "organization_id", "user_id", 0);

   qx::QxValidatorX<database::organization> * pAllValidator = t.getAllValidator(); Q_UNUSED(pAllValidator);
}

} // namespace qx

namespace database {

organization::organization() : m_organization_id(0) { ; }

organization::organization(const long & id) : m_organization_id(id) { ; }

organization::~organization() { ; }

long organization::getorganization_id() const { return m_organization_id; }

QString organization::getname() const { return m_name; }

QString organization::getcity() const { return m_city; }

organization::type_users organization::getusers() const { return m_users; }

organization::type_users & organization::users() { return m_users; }

const organization::type_users & organization::users() const { return m_users; }

void organization::setorganization_id(const long & val) { m_organization_id = val; }

void organization::setname(const QString & val) { m_name = val; }

void organization::setcity(const QString & val) { m_city = val; }

void organization::setusers(const organization::type_users & val) { m_users = val; }

organization::type_users organization::getusers(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getusers(); }
   QString sRelation = "users";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   database::organization tmp;
   tmp.m_organization_id = this->m_organization_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_users = tmp.m_users; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_users;
}

organization::type_users & organization::users(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return users(); }
   QString sRelation = "users";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   database::organization tmp;
   tmp.m_organization_id = this->m_organization_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_users = tmp.m_users; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_users;
}

} // namespace database
