#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(int args, const char **argv)
{
    vector<string> vec_str = {"hello world"};
    auto begin = vec_str.begin();
    auto end = vec_str.end();
    while (begin != vec_str.end() && !isspace(*begin))
    {
        *begin = toupper(*begin++);
    }

    return 0;
}
