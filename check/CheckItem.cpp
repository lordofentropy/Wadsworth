//
// Created by Jared Marshall on 9/21/15.
//

#include "CheckItem.h"

CheckItem::CheckItem() : CEntity()
{ }

CheckItem::CheckItem(const std::string &strName, const ENTITY_TYPES &entityType, const Poco::UUID &ID) : CEntity(strName,
                                                                                                                 entityType,
                                                                                                                 ID)
{ }
CheckItem::~CheckItem()
{ }