#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main(int args, const char **argv)
{
    // convert all chars to upper case
    string s = "hello world ss";
    for (size_t i = 0; i < s.size(); i++)
    {
        s[i] = toupper(s[i]);
    }

    cout << s << endl;

    return 0;
}
