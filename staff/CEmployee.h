//
// Created by Jared Marshall on 9/20/15.
//

#ifndef WADSWORTH_CEMPLOYEE_H
#define WADSWORTH_CEMPLOYEE_H

#include "../CEntity.h"

class CEmployee : public CEntity
{
public:
    CEmployee();
    ~CEmployee();

private:
public:
    const std::string &getMystrLastName() const {
        return mystrLastName;
    }

    void setMystrLastName(const std::string &mystrLastName) {
        CEmployee::mystrLastName = mystrLastName;
    }

    const std::string &getMystrFirstName() const {
        return mystrFirstName;
    }

    void setMystrFirstName(const std::string &mystrFirstName) {
        CEmployee::mystrFirstName = mystrFirstName;
    }

    const std::string &getMystrMiddleName() const {
        return mystrMiddleName;
    }

    void setMystrMiddleName(const std::string &mystrMiddleName) {
        CEmployee::mystrMiddleName = mystrMiddleName;
    }

    int getMyiEmployeeID() const {
        return myiEmployeeID;
    }

    void setMyiEmployeeID(int myiEmployeeID) {
        CEmployee::myiEmployeeID = myiEmployeeID;
    }

private:
    std::string mystrLastName;
    std::string mystrFirstName;
    std::string mystrMiddleName;

    int myiEmployeeID;
};


#endif //WADSWORTH_CEMPLOYEE_H
