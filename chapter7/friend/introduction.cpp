#include <iostream>
#include <string>
#include <vector>
#include <initializer_list>
#include <assert.h>

using std::cout;
using std::endl;
using std::string;
using std::vector;

#include "deng.h"
#include "friend.h"

// class A
// {
// private:
//     int a_;

// public:
//     A(int value) : a_(value) {}
// };

int main(int argc, char **argv)
{
    FriendClass f(1);
    f.func(999);

    return 0;
}
