#ifndef DENG_H
#define DENG_H

#include "friend.h"

class Deng
{
    friend class FriendClass;

public:
    Deng(int a) : a_(a) {}

private:
    int a_;
};

#endif