//
// Created by Jared Marshall on 9/21/15.
//

#include "CPermission.h"

CPermission::~CPermission()
{ }

CPermission::CPermission(const std::string &strName, const ENTITY_TYPES &entityType, const Poco::UUID &ID) : CEntity(strName,
                                                                                                                     entityType,
                                                                                                                     ID)
{ }

CPermission::CPermission() : CEntity()
{ }