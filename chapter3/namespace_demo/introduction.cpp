#include <iostream>
#include "separate.h"
namespace func
{
    int func()
    {
        return 10;
    }
} // namespace main

int main(int args, const char *argv[])
{
    int a = func::func();
    std::cout<< a << std::endl;

    s_demo::func();

}
