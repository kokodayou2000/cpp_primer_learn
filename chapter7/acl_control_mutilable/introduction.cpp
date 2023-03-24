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
private:
    mutable int a_;

public:
    A(int value) : a_(value) {}

    const A &display() const
    {
        cout << "in const " << this->a_ << endl;
        return *this;
    }
    A &display()
    {
        cout << "in simliar " << this->a_ << endl;
        return *this;
    }
};

int main(int argc, char **argv)
{
    A a = A(10);
    a.display();
    const A const_a(9);
    const_a.display();
}
