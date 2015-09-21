//
// Created by Jared Marshall on 9/20/15.
//

#include "CEntity.h"

using namespace Poco;
using Poco::UUID;

CEntity::CEntity() : myiRefCount( 1 ),
                     mystrName( "" ),
                     myEntityType( ENTITY_TYPES::NONE ),
                     myID()
{
}

CEntity::CEntity(std::string strName, enum ENTITY_TYPES entityType, Poco::UUID ID) : myiRefCount(1),
                                                                                     mystrName( strName ),
                                                                                     myEntityType( entityType ),
                                                                                     myID( ID )
{

}

CEntity::~CEntity()
{
    bool bEek = false;

    bEek = true;
}



bool CEntity::dump()
{
    bool bRetVal = false;


    return bRetVal;
}