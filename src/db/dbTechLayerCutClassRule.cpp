///////////////////////////////////////////////////////////////////////////////
// BSD 3-Clause License
//
// Copyright (c) 2020, OpenRoad Project
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
// * Redistributions of source code must retain the above copyright notice, this
//   list of conditions and the following disclaimer.
//
// * Redistributions in binary form must reproduce the above copyright notice,
//   this list of conditions and the following disclaimer in the documentation
//   and/or other materials provided with the distribution.
//
// * Neither the name of the copyright holder nor the names of its
//   contributors may be used to endorse or promote products derived from
//   this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.

// Generator Code Begin 1
#include "dbTechLayerCutClassRule.h"

#include "db.h"
#include "dbDatabase.h"
#include "dbDiff.hpp"
#include "dbSet.h"
#include "dbTable.h"
#include "dbTable.hpp"
#include "dbTechLayer.h"
#include "dbTechLayerCutClassSubRule.h"
// User Code Begin includes
// User Code End includes
namespace odb {

// User Code Begin definitions
// User Code End definitions
template class dbTable<_dbTechLayerCutClassRule>;

bool _dbTechLayerCutClassRule::operator==(
    const _dbTechLayerCutClassRule& rhs) const
{
  if (*_techlayercutclasssubrule_tbl != *rhs._techlayercutclasssubrule_tbl)
    return false;

  // User Code Begin ==
  // User Code End ==
  return true;
}
bool _dbTechLayerCutClassRule::operator<(
    const _dbTechLayerCutClassRule& rhs) const
{
  // User Code Begin <
  // User Code End <
  return true;
}
void _dbTechLayerCutClassRule::differences(
    dbDiff&                         diff,
    const char*                     field,
    const _dbTechLayerCutClassRule& rhs) const
{
  DIFF_BEGIN

  DIFF_TABLE(_techlayercutclasssubrule_tbl);
  // User Code Begin differences
  // User Code End differences
  DIFF_END
}
void _dbTechLayerCutClassRule::out(dbDiff&     diff,
                                   char        side,
                                   const char* field) const
{
  DIFF_OUT_BEGIN
  DIFF_OUT_TABLE(_techlayercutclasssubrule_tbl);

  // User Code Begin out
  // User Code End out
  DIFF_END
}
_dbTechLayerCutClassRule::_dbTechLayerCutClassRule(_dbDatabase* db)
{
  _techlayercutclasssubrule_tbl = new dbTable<_dbTechLayerCutClassSubRule>(
      db,
      this,
      (GetObjTbl_t) &_dbTechLayerCutClassRule::getObjectTable,
      dbTechLayerCutClassSubRuleObj);
  ZALLOCATED(_techlayercutclasssubrule_tbl);
  // User Code Begin constructor
  // User Code End constructor
}
_dbTechLayerCutClassRule::_dbTechLayerCutClassRule(
    _dbDatabase*                    db,
    const _dbTechLayerCutClassRule& r)
{
  _techlayercutclasssubrule_tbl = new dbTable<_dbTechLayerCutClassSubRule>(
      db, this, *r._techlayercutclasssubrule_tbl);
  ZALLOCATED(_techlayercutclasssubrule_tbl);
  // User Code Begin CopyConstructor
  // User Code End CopyConstructor
}

dbIStream& operator>>(dbIStream& stream, _dbTechLayerCutClassRule& obj)
{
  stream >> *obj._techlayercutclasssubrule_tbl;
  // User Code Begin >>
  // User Code End >>
  return stream;
}
dbOStream& operator<<(dbOStream& stream, const _dbTechLayerCutClassRule& obj)
{
  stream << *obj._techlayercutclasssubrule_tbl;
  // User Code Begin <<
  // User Code End <<
  return stream;
}

dbObjectTable* _dbTechLayerCutClassRule::getObjectTable(dbObjectType type)
{
  switch (type) {
    case dbTechLayerCutClassSubRuleObj:
      return _techlayercutclasssubrule_tbl;
      // User Code Begin getObjectTable
    // User Code End getObjectTable
    default:
      break;
  }
  return getTable()->getObjectTable(type);
}
_dbTechLayerCutClassRule::~_dbTechLayerCutClassRule()
{
  delete _techlayercutclasssubrule_tbl;
}
////////////////////////////////////////////////////////////////////
//
// dbTechLayerCutClassRule - Methods
//
////////////////////////////////////////////////////////////////////

dbSet<dbTechLayerCutClassSubRule>
dbTechLayerCutClassRule::getTechLayerCutClassSubRules() const
{
  _dbTechLayerCutClassRule* obj = (_dbTechLayerCutClassRule*) this;
  return dbSet<dbTechLayerCutClassSubRule>(obj,
                                           obj->_techlayercutclasssubrule_tbl);
}

// User Code Begin dbTechLayerCutClassRulePublicMethods
dbTechLayerCutClassRule* dbTechLayerCutClassRule::create(dbTechLayer* _layer)
{
  _dbTechLayer*             layer   = (_dbTechLayer*) _layer;
  _dbTechLayerCutClassRule* newrule = layer->_cut_class_rules_tbl->create();
  return ((dbTechLayerCutClassRule*) newrule);
}

dbTechLayerCutClassRule* dbTechLayerCutClassRule::getTechLayerCutClassRule(
    dbTechLayer* inly,
    uint         dbid)
{
  _dbTechLayer* layer = (_dbTechLayer*) inly;
  return (dbTechLayerCutClassRule*) layer->_cut_class_rules_tbl->getPtr(dbid);
}
void dbTechLayerCutClassRule::destroy(dbTechLayerCutClassRule* rule)
{
  for (auto subrule : rule->getTechLayerCutClassSubRules()) {
    dbTechLayerCutClassSubRule::destroy(subrule);
  }
  _dbTechLayer* layer = (_dbTechLayer*) rule->getImpl()->getOwner();
  dbProperty::destroyProperties(rule);
  layer->_cut_class_rules_tbl->destroy((_dbTechLayerCutClassRule*) rule);
}
// User Code End dbTechLayerCutClassRulePublicMethods
}  // namespace odb
   // Generator Code End 1