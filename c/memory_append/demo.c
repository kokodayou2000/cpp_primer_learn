#include <stdio.h>
// https://blog.csdn.net/liu17234050/article/details/104190504
struct S1
{
    // [1111 1111] [1111 1111] [1111 1111] [1111 1111]
    //                                          i
    //                                j
    //                           a
    int i : 4;
    char j : 4;
    int a : 4;
    // double b;
} s1;

struct S2
{
    int i : 8;
    char j : 4;
    double b;
    int a : 4;
} s2;

struct S3
{
    int i;
    char j;
    double b;
    int a;
} s3;

int main()
{
    // printf("%d\n", sizeof(s1));
    //

    // 有符号数 signed char  [0 000   0000]
    // 000... 0000  0111 1111
    // 10..0  1000 0000 
    // 11..1  0100 0001
    
    s1.i = -128;
    printf("one %d\n", s1.i);
    s1.i = 127;
    printf("two %d\n", s1.i);

    s1.i = 125;
    printf("three %d\n", s1.i);

    // printf("%d\n", sizeof(s2));
    // printf("%d\n", sizeof(s3));
    // double bb = 3.14;
    // printf("double %d\n", sizeof(bb));
}