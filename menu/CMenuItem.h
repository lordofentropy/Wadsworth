//
// Created by Jared Marshall on 9/21/15.
//

#ifndef WADSWORTH_CMENUITEM_H
#define WADSWORTH_CMENUITEM_H

#include "../CEntity.h"

class CMenuItem : public CEntity
{

public:
    CMenuItem();
    CMenuItem(const std::string &strName, const ENTITY_TYPES &entityType, const Poco::UUID &ID);
    virtual ~CMenuItem();
};


#endif //WADSWORTH_CMENUITEM_H
