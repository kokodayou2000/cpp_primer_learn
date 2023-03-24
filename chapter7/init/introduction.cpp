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
    int b_;
    int c_;
    A(int a, int b, int c)
    {
        this->a_ = a; // assign
        this->b_ = b;
        this->c_ = c;
    }
    // initialization
    // A(int a,int b,int c):a_(a),b_(b),c_(c){}
};

int main(int argc, char **argv)
{
    A a(1, 2, 3);
    

    return 0;
}
