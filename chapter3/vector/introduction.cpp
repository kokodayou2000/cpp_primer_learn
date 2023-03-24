#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(int args, const char **argv)
{
    // vector base on template
    vector<int> vec = {1, 2, 3};
    vector<string> vec_str = {"1", "2"};

    for (string str : vec_str)
    {
        cout << str << endl;
    }

    for (size_t i = 0; i < vec_str.size(); i++)
    {
        cout << vec_str[i] << endl;
    }

    // empty
    cout << vec_str.empty() << endl;

    // push_back
    for (int i = 0; i < 10; i++)
    {
        vec.push_back(i);
        vec.emplace_back(i);
    }

    // size
    cout << vec.size() << endl;

    // equal 如何才算是相等呢？
    // 长度相等，并且元素完全相等

    return 0;
}
