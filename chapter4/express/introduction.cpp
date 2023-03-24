#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

class Box
{
public:
    int len;
    int width;
    Box operator+(const Box &box1)
    {
        this->len = this->len + box1.len;
        this->width = this->width + box1.width;
        return *this;
    }
};


int main(int args, const char **argv)
{
    Box b1 = Box();
    b1.len = 10;
    b1.width = 20;
    Box b2 = Box();
    b2.len = 10;
    b2.width = 20;
    b1 = b1 + b2;
    cout << b1.width << endl;

    // overload operation
}
