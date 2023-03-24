#include <iostream>
#include <string>
#include <vector>
#include <initializer_list>
#include <assert.h>

using std::cout;
using std::endl;
using std::string;
using std::vector;

class A
{
public:
    int a_;
    // explicit
    A(int value) : a_(value) {}

    // A *const this //top level 只会指向自己的对象指针
    // 每一个A对象都有自己的this
    void func()
    {
        a_ = 99;
        cout << a_ << endl;
    }
    A &combine(const A &rhs)
    {
        this->a_ = rhs.a_;
        return *this;
    }
};

int main(int argc, char **argv)
{
    A a(10);
    A b = A(10);
    A c = 10;
    a.func();
    return 0;
}
