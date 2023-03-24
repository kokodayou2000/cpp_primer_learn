#include <iostream>
#include <string>
#include <vector>
#include <initializer_list>
#include <assert.h>

using std::cout;
using std::endl;
using std::string;
using std::vector;

class NonDefault
{
public:
    string str_;
    NonDefault(string str) : str_(str) {}
    NonDefault() = default;
};

class SalesData
{
public:
    int a_;
    bool b_;
    long c_;
    NonDefault noDefault;

    SalesData() = default;
};

int main(int argc, char **argv)
{
    SalesData sale_data;
    cout << sale_data.noDefault.str_ << endl;
    return 0;
}
