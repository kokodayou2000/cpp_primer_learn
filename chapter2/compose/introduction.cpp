#include <iostream>

int main(int args, const char *argv[])
{
    int value = 0;
    //if left value is 12,how to bind the value?
    //use const
    const int& const_value = 12;
    //编译器做了什么？
    // const int temp_value = 12;
    // const int& const_value = temp_value;

    int &ref_value = value;
    for (int i = 0; i < 10; i++)
    {

        ref_value = i;
        std::cout << value << std::endl;
    }

    return 0;
}
