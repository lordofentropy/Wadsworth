//
// Created by Jared Marshall on 9/21/15.
//

#include "CIngredient.h"

CIngredient::CIngredient() : CEntity()
{ }

CIngredient::CIngredient(const std::string &strName, const ENTITY_TYPES &entityType, const Poco::UUID &ID) : CEntity(strName,
                                                                                                                     entityType,
                                                                                                                     ID)
{ }
CIngredient::~CIngredient()
{ }