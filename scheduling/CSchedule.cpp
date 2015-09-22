//
// Created by Jared Marshall on 9/21/15.
//

#include "CSchedule.h"

CSchedule::~CSchedule()
{ }

CSchedule::CSchedule(const std::string &strName, const ENTITY_TYPES &entityType, const Poco::UUID &ID) : CEntity(strName,
                                                                                                                 entityType,
                                                                                                                 ID)
{ }

CSchedule::CSchedule() : CEntity()
{ }