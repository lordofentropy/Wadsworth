//
// Created by Jared Marshall on 9/21/15.
//

#include "CMenuItem.h"

CMenuItem::CMenuItem(const std::string &strName, const ENTITY_TYPES &entityType, const Poco::UUID &ID) : CEntity(strName,
                                                                                                                 entityType,
                                                                                                                 ID)
{ }

CMenuItem::CMenuItem() : CEntity()
{ }

CMenuItem::~CMenuItem()
{ }