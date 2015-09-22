//
// Created by Jared Marshall on 9/21/15.
//

#include "CCheck.h"

CCheck::~CCheck()
{
}

CCheck::CCheck(const std::string &strName, const ENTITY_TYPES &entityType, const Poco::UUID &ID) : CEntity(strName,
                                                                                                           entityType, ID)
{ }

CCheck::CCheck() : CEntity()
{ }