///Week13-6.cpp step03-2 迴文 Palindrome
#include <stdio.h>
int a[8] = { 2, 0, 2, 1, 1, 2, 0, 2};///2021年12月02號
int main()
{
    if( a[0] == a[7] ) printf("第1字母相同\n");
    if( a[1] == a[6] ) printf("第2字母相同\n");
    if( a[2] == a[5] ) printf("第3字母相同\n");
    if( a[3] == a[4] ) printf("第4字母相同\n");
}
