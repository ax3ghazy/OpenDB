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

// Generator Code Begin cpp
#include "dbTechLayerSpacingTablePrlRule.h"

#include "db.h"
#include "dbDatabase.h"
#include "dbDiff.hpp"
#include "dbTable.h"
#include "dbTable.hpp"
#include "dbTechLayer.h"
// User Code Begin includes
// User Code End includes
namespace odb {

// User Code Begin definitions
// User Code End definitions
template class dbTable<_dbTechLayerSpacingTablePrlRule>;

bool _dbTechLayerSpacingTablePrlRule::operator==(
    const _dbTechLayerSpacingTablePrlRule& rhs) const
{
  if (_flags.wrong_direction_ != rhs._flags.wrong_direction_)
    return false;

  if (_flags.same_mask_ != rhs._flags.same_mask_)
    return false;

  if (_flags.exceept_eol_ != rhs._flags.exceept_eol_)
    return false;

  if (eol_width_ != rhs.eol_width_)
    return false;

  // User Code Begin ==
  // User Code End ==
  return true;
}
bool _dbTechLayerSpacingTablePrlRule::operator<(
    const _dbTechLayerSpacingTablePrlRule& rhs) const
{
  // User Code Begin <
  // User Code End <
  return true;
}
void _dbTechLayerSpacingTablePrlRule::differences(
    dbDiff&                                diff,
    const char*                            field,
    const _dbTechLayerSpacingTablePrlRule& rhs) const
{
  DIFF_BEGIN

  DIFF_FIELD(_flags.wrong_direction_);
  DIFF_FIELD(_flags.same_mask_);
  DIFF_FIELD(_flags.exceept_eol_);
  DIFF_FIELD(eol_width_);
  // User Code Begin differences
  // User Code End differences
  DIFF_END
}
void _dbTechLayerSpacingTablePrlRule::out(dbDiff&     diff,
                                          char        side,
                                          const char* field) const
{
  DIFF_OUT_BEGIN
  DIFF_OUT_FIELD(_flags.wrong_direction_);
  DIFF_OUT_FIELD(_flags.same_mask_);
  DIFF_OUT_FIELD(_flags.exceept_eol_);
  DIFF_OUT_FIELD(eol_width_);

  // User Code Begin out
  // User Code End out
  DIFF_END
}
_dbTechLayerSpacingTablePrlRule::_dbTechLayerSpacingTablePrlRule(
    _dbDatabase* db)
{
  uint32_t* _flags_bit_field = (uint32_t*) &_flags;
  *_flags_bit_field          = 0;
  // User Code Begin constructor
  // User Code End constructor
}
_dbTechLayerSpacingTablePrlRule::_dbTechLayerSpacingTablePrlRule(
    _dbDatabase*                           db,
    const _dbTechLayerSpacingTablePrlRule& r)
{
  _flags.wrong_direction_ = r._flags.wrong_direction_;
  _flags.same_mask_       = r._flags.same_mask_;
  _flags.exceept_eol_     = r._flags.exceept_eol_;
  _flags._spare_bits      = r._flags._spare_bits;
  eol_width_              = r.eol_width_;
  // User Code Begin CopyConstructor
  // User Code End CopyConstructor
}

dbIStream& operator>>(dbIStream& stream, _dbTechLayerSpacingTablePrlRule& obj)
{
  uint32_t* _flags_bit_field = (uint32_t*) &obj._flags;
  stream >> *_flags_bit_field;
  stream >> obj.eol_width_;
  stream >> obj.length_tbl_;
  stream >> obj.width_tbl_;
  stream >> obj.spacing_tbl_;
  stream >> obj.influence_tbl_;
  // User Code Begin >>
  stream >> obj._within_tbl;
  // User Code End >>
  return stream;
}
dbOStream& operator<<(dbOStream&                             stream,
                      const _dbTechLayerSpacingTablePrlRule& obj)
{
  uint32_t* _flags_bit_field = (uint32_t*) &obj._flags;
  stream << *_flags_bit_field;
  stream << obj.eol_width_;
  stream << obj.length_tbl_;
  stream << obj.width_tbl_;
  stream << obj.spacing_tbl_;
  stream << obj.influence_tbl_;
  // User Code Begin <<
  stream << obj._within_tbl;
  // User Code End <<
  return stream;
}

_dbTechLayerSpacingTablePrlRule::~_dbTechLayerSpacingTablePrlRule()
{
  // User Code Begin Destructor
  // User Code End Destructor
}

// User Code Begin PrivateMethods
// User Code End PrivateMethods

////////////////////////////////////////////////////////////////////
//
// dbTechLayerSpacingTablePrlRule - Methods
//
////////////////////////////////////////////////////////////////////

void dbTechLayerSpacingTablePrlRule::setEolWidth(int eol_width_)
{
  _dbTechLayerSpacingTablePrlRule* obj
      = (_dbTechLayerSpacingTablePrlRule*) this;

  obj->eol_width_ = eol_width_;
}

int dbTechLayerSpacingTablePrlRule::getEolWidth() const
{
  _dbTechLayerSpacingTablePrlRule* obj
      = (_dbTechLayerSpacingTablePrlRule*) this;
  return obj->eol_width_;
}

void dbTechLayerSpacingTablePrlRule::setWrongDirection(bool wrong_direction_)
{
  _dbTechLayerSpacingTablePrlRule* obj
      = (_dbTechLayerSpacingTablePrlRule*) this;

  obj->_flags.wrong_direction_ = wrong_direction_;
}

bool dbTechLayerSpacingTablePrlRule::isWrongDirection() const
{
  _dbTechLayerSpacingTablePrlRule* obj
      = (_dbTechLayerSpacingTablePrlRule*) this;

  return obj->_flags.wrong_direction_;
}

void dbTechLayerSpacingTablePrlRule::setSameMask(bool same_mask_)
{
  _dbTechLayerSpacingTablePrlRule* obj
      = (_dbTechLayerSpacingTablePrlRule*) this;

  obj->_flags.same_mask_ = same_mask_;
}

bool dbTechLayerSpacingTablePrlRule::isSameMask() const
{
  _dbTechLayerSpacingTablePrlRule* obj
      = (_dbTechLayerSpacingTablePrlRule*) this;

  return obj->_flags.same_mask_;
}

void dbTechLayerSpacingTablePrlRule::setExceeptEol(bool exceept_eol_)
{
  _dbTechLayerSpacingTablePrlRule* obj
      = (_dbTechLayerSpacingTablePrlRule*) this;

  obj->_flags.exceept_eol_ = exceept_eol_;
}

bool dbTechLayerSpacingTablePrlRule::isExceeptEol() const
{
  _dbTechLayerSpacingTablePrlRule* obj
      = (_dbTechLayerSpacingTablePrlRule*) this;

  return obj->_flags.exceept_eol_;
}

// User Code Begin dbTechLayerSpacingTablePrlRulePublicMethods

uint _dbTechLayerSpacingTablePrlRule::getWidthIdx(const int width) const
{
  auto pos = --(std::lower_bound(width_tbl_.begin(), width_tbl_.end(), width));
  return std::max(0, (int) std::distance(width_tbl_.begin(), pos));
}

uint _dbTechLayerSpacingTablePrlRule::getLengthIdx(const int length) const
{
  auto pos
      = --(std::lower_bound(length_tbl_.begin(), length_tbl_.end(), length));
  return std::max(0, (int) std::distance(length_tbl_.begin(), pos));
}

void dbTechLayerSpacingTablePrlRule::setTable(
    std::vector<int>                    width_tbl,
    std::vector<int>                    length_tbl,
    std::vector<std::vector<int>>       spacing_tbl,
    std::map<uint, std::pair<int, int>> excluded_map)
{
  _dbTechLayerSpacingTablePrlRule* obj
      = (_dbTechLayerSpacingTablePrlRule*) this;
  obj->width_tbl_  = width_tbl;
  obj->length_tbl_ = length_tbl;
  for (auto spacing : spacing_tbl) {
    dbVector<int> tmp;
    tmp = spacing;
    obj->spacing_tbl_.push_back(tmp);
  }
  obj->_within_tbl = excluded_map;
}

void dbTechLayerSpacingTablePrlRule::getTable(
    std::vector<int>&                    width_tbl,
    std::vector<int>&                    length_tbl,
    std::vector<std::vector<int>>&       spacing_tbl,
    std::map<uint, std::pair<int, int>>& excluded_map)
{
  _dbTechLayerSpacingTablePrlRule* obj
      = (_dbTechLayerSpacingTablePrlRule*) this;
  width_tbl    = obj->width_tbl_;
  length_tbl   = obj->length_tbl_;
  excluded_map = obj->_within_tbl;
  for (auto spacing : obj->spacing_tbl_) {
    spacing_tbl.push_back(spacing);
  }
}

void dbTechLayerSpacingTablePrlRule::setSpacingTableInfluence(
    std::vector<std::tuple<int, int, int>> influence_tbl)
{
  _dbTechLayerSpacingTablePrlRule* obj
      = (_dbTechLayerSpacingTablePrlRule*) this;
  obj->influence_tbl_ = influence_tbl;
}

dbTechLayerSpacingTablePrlRule* dbTechLayerSpacingTablePrlRule::create(
    dbTechLayer* _layer)
{
  _dbTechLayer*                    layer = (_dbTechLayer*) _layer;
  _dbTechLayerSpacingTablePrlRule* newrule
      = layer->_spacing_table_prl_rules_tbl->create();
  return ((dbTechLayerSpacingTablePrlRule*) newrule);
}

dbTechLayerSpacingTablePrlRule*
dbTechLayerSpacingTablePrlRule::getTechLayerSpacingTablePrlRule(
    dbTechLayer* inly,
    uint         dbid)
{
  _dbTechLayer* layer = (_dbTechLayer*) inly;
  return (dbTechLayerSpacingTablePrlRule*)
      layer->_spacing_table_prl_rules_tbl->getPtr(dbid);
}

void dbTechLayerSpacingTablePrlRule::destroy(
    dbTechLayerSpacingTablePrlRule* rule)
{
  _dbTechLayer* layer = (_dbTechLayer*) rule->getImpl()->getOwner();
  dbProperty::destroyProperties(rule);
  layer->_spacing_table_prl_rules_tbl->destroy(
      (_dbTechLayerSpacingTablePrlRule*) rule);
}

int dbTechLayerSpacingTablePrlRule::getSpacing(const int width,
                                               const int length) const
{
  _dbTechLayerSpacingTablePrlRule* obj
      = (_dbTechLayerSpacingTablePrlRule*) this;
  uint rowIdx = obj->getWidthIdx(width);
  uint colIdx = obj->getLengthIdx(length);
  return obj->spacing_tbl_[rowIdx][colIdx];
}

bool dbTechLayerSpacingTablePrlRule::hasExceptWithin(int width) const
{
  _dbTechLayerSpacingTablePrlRule* obj
      = (_dbTechLayerSpacingTablePrlRule*) this;
  uint rowIdx = obj->getWidthIdx(width);
  return (obj->_within_tbl.find(rowIdx) != obj->_within_tbl.end());
}

std::pair<int, int> dbTechLayerSpacingTablePrlRule::getExceptWithin(
    int width) const
{
  _dbTechLayerSpacingTablePrlRule* obj
      = (_dbTechLayerSpacingTablePrlRule*) this;
  uint rowIdx = obj->getWidthIdx(width);
  return obj->_within_tbl.at(rowIdx);
}

// User Code End dbTechLayerSpacingTablePrlRulePublicMethods
}  // namespace odb
   // Generator Code End cpp