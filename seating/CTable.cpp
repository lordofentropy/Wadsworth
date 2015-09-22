//
// Created by Jared Marshall on 9/21/15.
//

#include "CTable.h"

CTable::CTable() : CEntity()
{ }

CTable::CTable(const std::string &strName, const ENTITY_TYPES &entityType, const Poco::UUID &ID) : CEntity(strName,
                                                                                                           entityType, ID)
{ }

CTable::~CTable()
{ }