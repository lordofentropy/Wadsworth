//
// Created by Jared Marshall on 9/21/15.
//

#include "CAccount.h"

CAccount::CAccount() : CEntity()
{ }

CAccount::CAccount(const std::string &strName, const ENTITY_TYPES &entityType, const Poco::UUID &ID) : CEntity(strName,
                                                                                                               entityType, ID)
{ }

CAccount::~CAccount()
{ }