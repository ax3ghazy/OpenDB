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
#include "dbTechLayerCutSpacingTableRule.h"

#include "db.h"
#include "dbDatabase.h"
#include "dbDiff.hpp"
#include "dbSet.h"
#include "dbTable.h"
#include "dbTable.hpp"
#include "dbTechLayer.h"
#include "dbTechLayerCutSpacingTableDefSubRule.h"
#include "dbTechLayerCutSpacingTableOrthSubRule.h"
// User Code Begin includes
// User Code End includes
namespace odb {

// User Code Begin definitions
// User Code End definitions
template class dbTable<_dbTechLayerCutSpacingTableRule>;

bool _dbTechLayerCutSpacingTableRule::operator==(
    const _dbTechLayerCutSpacingTableRule& rhs) const
{
  if (*_techlayercutspacingtableorthsubrule_tbl
      != *rhs._techlayercutspacingtableorthsubrule_tbl)
    return false;

  if (*_techlayercutspacingtabledefsubrule_tbl
      != *rhs._techlayercutspacingtabledefsubrule_tbl)
    return false;

  // User Code Begin ==
  // User Code End ==
  return true;
}
bool _dbTechLayerCutSpacingTableRule::operator<(
    const _dbTechLayerCutSpacingTableRule& rhs) const
{
  // User Code Begin <
  // User Code End <
  return true;
}
void _dbTechLayerCutSpacingTableRule::differences(
    dbDiff&                                diff,
    const char*                            field,
    const _dbTechLayerCutSpacingTableRule& rhs) const
{
  DIFF_BEGIN

  DIFF_TABLE(_techlayercutspacingtableorthsubrule_tbl);
  DIFF_TABLE(_techlayercutspacingtabledefsubrule_tbl);
  // User Code Begin differences
  // User Code End differences
  DIFF_END
}
void _dbTechLayerCutSpacingTableRule::out(dbDiff&     diff,
                                          char        side,
                                          const char* field) const
{
  DIFF_OUT_BEGIN
  DIFF_OUT_TABLE(_techlayercutspacingtableorthsubrule_tbl);
  DIFF_OUT_TABLE(_techlayercutspacingtabledefsubrule_tbl);

  // User Code Begin out
  // User Code End out
  DIFF_END
}
_dbTechLayerCutSpacingTableRule::_dbTechLayerCutSpacingTableRule(
    _dbDatabase* db)
{
  _techlayercutspacingtableorthsubrule_tbl
      = new dbTable<_dbTechLayerCutSpacingTableOrthSubRule>(
          db,
          this,
          (GetObjTbl_t) &_dbTechLayerCutSpacingTableRule::getObjectTable,
          dbTechLayerCutSpacingTableOrthSubRuleObj);
  ZALLOCATED(_techlayercutspacingtableorthsubrule_tbl);
  _techlayercutspacingtabledefsubrule_tbl
      = new dbTable<_dbTechLayerCutSpacingTableDefSubRule>(
          db,
          this,
          (GetObjTbl_t) &_dbTechLayerCutSpacingTableRule::getObjectTable,
          dbTechLayerCutSpacingTableDefSubRuleObj);
  ZALLOCATED(_techlayercutspacingtabledefsubrule_tbl);
  // User Code Begin constructor
  // User Code End constructor
}
_dbTechLayerCutSpacingTableRule::_dbTechLayerCutSpacingTableRule(
    _dbDatabase*                           db,
    const _dbTechLayerCutSpacingTableRule& r)
{
  _techlayercutspacingtableorthsubrule_tbl
      = new dbTable<_dbTechLayerCutSpacingTableOrthSubRule>(
          db, this, *r._techlayercutspacingtableorthsubrule_tbl);
  ZALLOCATED(_techlayercutspacingtableorthsubrule_tbl);
  _techlayercutspacingtabledefsubrule_tbl
      = new dbTable<_dbTechLayerCutSpacingTableDefSubRule>(
          db, this, *r._techlayercutspacingtabledefsubrule_tbl);
  ZALLOCATED(_techlayercutspacingtabledefsubrule_tbl);
  // User Code Begin CopyConstructor
  // User Code End CopyConstructor
}

dbIStream& operator>>(dbIStream& stream, _dbTechLayerCutSpacingTableRule& obj)
{
  stream >> *obj._techlayercutspacingtableorthsubrule_tbl;
  stream >> *obj._techlayercutspacingtabledefsubrule_tbl;
  // User Code Begin >>
  // User Code End >>
  return stream;
}
dbOStream& operator<<(dbOStream&                             stream,
                      const _dbTechLayerCutSpacingTableRule& obj)
{
  stream << *obj._techlayercutspacingtableorthsubrule_tbl;
  stream << *obj._techlayercutspacingtabledefsubrule_tbl;
  // User Code Begin <<
  // User Code End <<
  return stream;
}

dbObjectTable* _dbTechLayerCutSpacingTableRule::getObjectTable(
    dbObjectType type)
{
  switch (type) {
    case dbTechLayerCutSpacingTableOrthSubRuleObj:
      return _techlayercutspacingtableorthsubrule_tbl;
    case dbTechLayerCutSpacingTableDefSubRuleObj:
      return _techlayercutspacingtabledefsubrule_tbl;
      // User Code Begin getObjectTable
    // User Code End getObjectTable
    default:
      break;
  }
  return getTable()->getObjectTable(type);
}
_dbTechLayerCutSpacingTableRule::~_dbTechLayerCutSpacingTableRule()
{
  delete _techlayercutspacingtableorthsubrule_tbl;
  delete _techlayercutspacingtabledefsubrule_tbl;
}
////////////////////////////////////////////////////////////////////
//
// dbTechLayerCutSpacingTableRule - Methods
//
////////////////////////////////////////////////////////////////////

dbSet<dbTechLayerCutSpacingTableOrthSubRule>
dbTechLayerCutSpacingTableRule::getTechLayerCutSpacingTableOrthSubRules() const
{
  _dbTechLayerCutSpacingTableRule* obj
      = (_dbTechLayerCutSpacingTableRule*) this;
  return dbSet<dbTechLayerCutSpacingTableOrthSubRule>(
      obj, obj->_techlayercutspacingtableorthsubrule_tbl);
}

dbSet<dbTechLayerCutSpacingTableDefSubRule>
dbTechLayerCutSpacingTableRule::getTechLayerCutSpacingTableDefSubRules() const
{
  _dbTechLayerCutSpacingTableRule* obj
      = (_dbTechLayerCutSpacingTableRule*) this;
  return dbSet<dbTechLayerCutSpacingTableDefSubRule>(
      obj, obj->_techlayercutspacingtabledefsubrule_tbl);
}

// User Code Begin dbTechLayerCutSpacingTableRulePublicMethods
dbTechLayerCutSpacingTableRule* dbTechLayerCutSpacingTableRule::create(
    dbTechLayer* _layer)
{
  _dbTechLayer*                    layer = (_dbTechLayer*) _layer;
  _dbTechLayerCutSpacingTableRule* newrule
      = layer->_cut_spacing_table_rules_tbl->create();
  return ((dbTechLayerCutSpacingTableRule*) newrule);
}

dbTechLayerCutSpacingTableRule*
dbTechLayerCutSpacingTableRule::getTechLayerCutSpacingTableRule(
    dbTechLayer* inly,
    uint         dbid)
{
  _dbTechLayer* layer = (_dbTechLayer*) inly;
  return (dbTechLayerCutSpacingTableRule*)
      layer->_cut_spacing_table_rules_tbl->getPtr(dbid);
}
void dbTechLayerCutSpacingTableRule::destroy(
    dbTechLayerCutSpacingTableRule* rule)
{
  for (auto subrule : rule->getTechLayerCutSpacingTableDefSubRules()) {
    dbTechLayerCutSpacingTableDefSubRule::destroy(subrule);
  }
  for (auto subrule : rule->getTechLayerCutSpacingTableOrthSubRules()) {
    dbTechLayerCutSpacingTableOrthSubRule::destroy(subrule);
  }
  _dbTechLayer* layer = (_dbTechLayer*) rule->getImpl()->getOwner();
  dbProperty::destroyProperties(rule);
  layer->_cut_spacing_table_rules_tbl->destroy(
      (_dbTechLayerCutSpacingTableRule*) rule);
}
// User Code End dbTechLayerCutSpacingTableRulePublicMethods
}  // namespace odb
   // Generator Code End 1