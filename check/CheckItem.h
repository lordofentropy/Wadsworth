//
// Created by Jared Marshall on 9/21/15.
//

#ifndef WADSWORTH_CHECKITEM_H
#define WADSWORTH_CHECKITEM_H


#include "../CEntity.h"

class CheckItem : public CEntity
{

public:
    CheckItem();
    CheckItem(const std::string &strName, const ENTITY_TYPES &entityType, const Poco::UUID &ID);
    virtual ~CheckItem();

};


#endif //WADSWORTH_CHECKITEM_H
