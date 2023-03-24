#include <iostream>
#include <string>
#include <vector>
#include <initializer_list>
#include <assert.h>

using std::cout;
using std::endl;
using std::string;
using std::vector;

void func(int a)
{
    assert(a == 10);
}

void f1(int a)
{
    cout << "in int" << endl;
}

// try change int 
void f1(double a, double b = 3.14)
{
    cout << "in double" << endl;
}

int main(int argc, char **argv)
{
    func(10);
    //default  match int 
    f1(10);

    return 0;
}
