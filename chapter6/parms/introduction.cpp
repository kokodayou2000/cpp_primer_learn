#include <iostream>
#include <string>
#include <vector>
#include <initializer_list>

using std::cout;
using std::endl;
using std::string;
using std::vector;

void func(std::initializer_list<int> initializer_list)
{
    for (int num : initializer_list)
    {
        cout << num << endl;
    }
}

int main(int argc, char **argv)
{
    func({1, 2, 3, 4});
    func({5, 6});

    return 0;
}
