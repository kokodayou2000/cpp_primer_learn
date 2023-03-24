#include <iostream>

using std::cout;
using std::endl;

void func(const int *const a)
{
    cout << *a << endl;
}

void func(const int a)
{
    cout << a << endl;
}

int main(int argc, char **argv)
{
    const int a = 100;
    func(a);
    func(&a);

    return 0;
}
