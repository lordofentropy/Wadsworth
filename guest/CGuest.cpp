//
// Created by Jared Marshall on 9/21/15.
//

#include "CGuest.h"

CGuest::~CGuest()
{ }

CGuest::CGuest(const std::string &strName, const ENTITY_TYPES &entityType, const Poco::UUID &ID) : CEntity(strName,
                                                                                                           entityType, ID)
{ }

CGuest::CGuest() : CEntity()
{ }