#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

void func(const int a){
    cout << a <<endl;
}

int main()
{
    const int a = 1;
    const int *p = &a;
    const int b =2;
    p = &b;
    const int * const p1 = &a;
    // p1 = &b;

    func(123);

}
