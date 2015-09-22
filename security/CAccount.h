//
// Created by Jared Marshall on 9/21/15.
//

#ifndef WADSWORTH_CACCOUNT_H
#define WADSWORTH_CACCOUNT_H

#include "../CEntity.h"

class CAccount : public CEntity
{

public:
    CAccount();
    CAccount(const std::string &strName, const ENTITY_TYPES &entityType, const Poco::UUID &ID);
    virtual ~CAccount();
};


#endif //WADSWORTH_CACCOUNT_H
