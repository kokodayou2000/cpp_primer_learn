#include <iostream>
#include <string>
#include <vector>
#include <initializer_list>

using std::cout;
using std::endl;
using std::string;
using std::vector;

constexpr int GetSize() { return 100; }
void func(std::initializer_list<int> initializer_list = {9, 9, 9})
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
    func();
    cout << GetSize() << endl;
    return 0;
}
