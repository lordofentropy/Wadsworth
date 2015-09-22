//
// Created by Jared Marshall on 9/21/15.
//

#include "CSection.h"

CSection::~CSection()
{ }

CSection::CSection(const std::string &strName, const ENTITY_TYPES &entityType, const Poco::UUID &ID) : CEntity(strName,
                                                                                                               entityType, ID)
{ }

CSection::CSection() : CEntity()
{ }