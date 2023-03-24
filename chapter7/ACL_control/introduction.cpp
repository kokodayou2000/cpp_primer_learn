#include <iostream>
#include <string>
#include <vector>
#include <initializer_list>
#include <assert.h>

using std::cout;
using std::endl;
using std::string;
using std::vector;

void change_A(int);

class A
{
    friend void change_A(int);

private:
    int a_;

public:
    A(int value) : a_(value) {}
    void setA(int t)
    {
        this->a_ = t;
        cout << "a_ == " << this->a_ << endl;
    }
};

void change_A(int a)
{
    A f = A(10);
    cout << f.a_ << endl;
    f.a_ = a;
    cout << f.a_ << endl;
}

int main(int argc, char **argv)
{
    change_A(100);
    A a = A(9);
    a.setA(99);
}
