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
    vector<string> vec_str = {"1", "22", "333"};

    // 不可变迭代器
    // for(vector<int>::const_iterator it = vec.begin();it != vec.end();it.next()){
    // 可变迭代器
    for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
    {
        cout << *it << endl;
        *it = 100;
    }

    //       1  2  3  *
    // begin  |
    // end             |
    // it++ means point ++

    for (auto it = vec_str.begin(); it != vec_str.end(); it++)
    {
        // cout<< it->size() << endl;
        cout << (*it).size() << endl;
    }

    return 0;
}
