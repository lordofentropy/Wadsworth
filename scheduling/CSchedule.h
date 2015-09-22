//
// Created by Jared Marshall on 9/21/15.
//

#ifndef WADSWORTH_CSCHEDULE_H
#define WADSWORTH_CSCHEDULE_H


#include "../CEntity.h"

class CSchedule : public CEntity
{

public:
    CSchedule();
    CSchedule(const std::string &strName, const ENTITY_TYPES &entityType, const Poco::UUID &ID);
    virtual ~CSchedule();
};


#endif //WADSWORTH_CSCHEDULE_H
