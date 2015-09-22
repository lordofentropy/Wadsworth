//
// Created by Jared Marshall on 9/21/15.
//

#include "CMailBox.h"

CMailBox::~CMailBox()
{ }

CMailBox::CMailBox(const std::string &strName, const ENTITY_TYPES &entityType, const Poco::UUID &ID) : CEntity(strName,
                                                                                                               entityType, ID)
{ }

CMailBox::CMailBox() : CEntity()
{ }