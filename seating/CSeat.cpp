//
// Created by Jared Marshall on 9/21/15.
//

#include "CSeat.h"

CSeat::~CSeat()
{ }

CSeat::CSeat(const std::string &strName, const ENTITY_TYPES &entityType, const Poco::UUID &ID) : CEntity(strName,
                                                                                                         entityType, ID)
{ }

CSeat::CSeat() : CEntity()
{ }