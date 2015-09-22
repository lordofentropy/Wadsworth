//
// Created by Jared Marshall on 9/21/15.
//

#ifndef WADSWORTH_CCHECK_H
#define WADSWORTH_CCHECK_H


#include "../CEntity.h"

class CCheck : public CEntity
{


public:
    CCheck();
    CCheck(const std::string &strName, const ENTITY_TYPES &entityType, const Poco::UUID &ID);
    virtual ~CCheck();


};


#endif //WADSWORTH_CCHECK_H
