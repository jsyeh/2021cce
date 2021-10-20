#include <stdio.h>
int main()///今天第2個作業
{
    int a=999;///髒
    int b=100;///白開水
    int temp;///臨時、暫時 temp
    printf("a:%d b:%d\n", a, b);

    temp = a; ///先把 a備份起來
    a = b; ///a換成b的值
    b = temp;
    printf("a:%d b:%d\n", a, b);
}

