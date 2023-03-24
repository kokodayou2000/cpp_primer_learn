#include <iostream>
#include <string>
#include <vector>
#include<stdexcept>


using std::cout;
using std::endl;
using std::string;
using std::vector;

void func(){
    throw std::invalid_argument("Require 100 args");
}

int main(int args, const char **argv)
{
    cout<< "1" << endl;
    try{
        func();
    }catch (std::invalid_argument& e) {
        cout<<"we catch it" <<e.what() << endl;
    }
    
    cout<< "2" << endl;
    return 0;
}
