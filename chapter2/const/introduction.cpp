#include <iostream>

using std::cout;
using std::endl;

int main(int args, const char *argv[])
{
    int val_A = 100;
    int val_B = 200;
    //如何理解这个呢？

    //从右往左理解
    //先看 *p 表示是一个指针 然后看 const int 表示指向一个不可变的int
    const int *p1 = &val_A;    
    cout<< *p1 << endl;
    p1 = &val_B;
    cout<< *p1 << endl;


    //如果想要实现不可变指针，只允许指向这一个
    const int *const p2 = &val_A;
    // p2 = &val_B;

    return 0;
}
