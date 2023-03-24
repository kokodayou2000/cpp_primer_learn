#include "friend.h"

#include <iostream>

#include "deng.h"

// 实现
void FriendClass::func(int a)
{
    Deng d(a);
    std::cout << d.a_ << std::endl;
}