#pragma once

#include "ClassLock.h"

class CA : public virtual ClassLock<CA>
/*
Issue: There must be a virtual here, but why?  
My guess is the compiler will check the class for virtual dervied class, and will not check for non-virtual derived class.
The strange thing is if no virtual here, the CB(CB:CA:ClassLock) instance can be created without error. This is weird. It seems like the friend realationship is also be dervied. Is that possible? 

Solution:
*/
{
public:
    CA();
    ~CA();

private:

};
