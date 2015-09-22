//
// Created by Jared Marshall on 9/21/15.
//

#ifndef WADSWORTH_CMAILBOX_H
#define WADSWORTH_CMAILBOX_H

#include "../CEntity.h"

class CMailBox : public CEntity
{

public:
    CMailBox();
    CMailBox(const std::string &strName, const ENTITY_TYPES &entityType, const Poco::UUID &ID);
    virtual ~CMailBox();
};


#endif //WADSWORTH_CMAILBOX_H
