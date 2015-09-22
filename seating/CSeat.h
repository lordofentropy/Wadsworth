//
// Created by Jared Marshall on 9/21/15.
//

#ifndef WADSWORTH_CSEAT_H
#define WADSWORTH_CSEAT_H


#include "../CEntity.h"

class CSeat : public CEntity
{

public:
    CSeat();
    CSeat(const std::string &strName, const ENTITY_TYPES &entityType, const Poco::UUID &ID);
    virtual ~CSeat();
};


#endif //WADSWORTH_CSEAT_H
