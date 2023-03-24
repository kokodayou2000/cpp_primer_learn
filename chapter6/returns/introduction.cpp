#include <iostream>
#include <string>
#include <vector>
#include <initializer_list>

using std::cout;
using std::endl;
using std::string;
using std::vector;

class Box
{
public:
    int len;
    int width;
};

Box *func()
{
    Box a = Box();
    a.width = 10;
    a.len = 9;
    Box *p = &a;
    return p;
}

int main(int argc, char **argv)
{
    for (int i = 0; i < 100000; i++)
    {
        Box *p = func();
        if (p->len != 9)
        {
            cout << "err" << endl;
        }
    }
    return 0;
}
