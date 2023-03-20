#include <iostream>

#include "separate.h"

//define value
int back_account_number = 5;

int main(int args, const char *argv[])
{
    printf("args = %d\n", args);
    functionSeparate();
    back_account_number = 100;
    functionSeparate();

    return 0;
}
