#include <iostream>
#include <string>
#include <vector>
#include <initializer_list>

using std::cout;
using std::endl;
using std::string;
using std::vector;

//const string& s1; 只用对象，can't modified
bool isShorter(const string& s1,const string s2){
    return s1.size() < s2.size();
}

bool (*pfunc)(const string& s1, const string s2);

int main(int argc, char **argv)
{
    pfunc = &isShorter;
    cout<< pfunc("1","1") <<endl;

}
