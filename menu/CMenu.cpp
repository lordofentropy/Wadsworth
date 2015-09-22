//
// Created by Jared Marshall on 9/20/15.
//

#include "CMenu.h"

CMenu::CMenu()
{

}

CMenu::~CMenu()
{

}

CMenu::CMenu(const std::string &strName, const ENTITY_TYPES &entityType, const Poco::UUID &ID) : CEntity(strName,
                                                                                                         entityType, ID)
{ }