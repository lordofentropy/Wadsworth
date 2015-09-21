#include <iostream>

#include "includes.h"
#include "CEmployee.h"

using namespace std;
using Poco::AutoPtr;

void eek()
{
    AutoPtr<CEmployee> empPtr( new CEmployee() );
}

int main()
{
    eek();
    cout << "Hello, World!" << endl;
    return 0;
}

