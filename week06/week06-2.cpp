#include <stdio.h>
int main()///���Ѳ�2�ӧ@�~
{
    int a=999;///ż
    int b=100;///�ն}��
    int temp;///�{�ɡB�Ȯ� temp
    printf("a:%d b:%d\n", a, b);

    temp = a; ///���� a�ƥ��_��
    a = b; ///a����b����
    b = temp;
    printf("a:%d b:%d\n", a, b);
}

