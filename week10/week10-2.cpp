///Week10-2.cpp step02-1
#include <stdio.h>
int main()
{
    int a=100;
    int b=200;
    int c;
    printf("a:%d b:%d c:%d\n", a, b, c);
    ///�]�� a�ιL�F, �{�b�ٯ��d
    int d[3]={100,200,300};
    ///�H�W�O�}�C���ŧi, ���� ��
    ///�H�U�O�}�C���ϥ�,��Ȯ��X�ӥ�
    printf("d[0]:%d\n", d[0]); ///�L�X 100
    printf("d[1]:%d\n", d[1]);
    printf("d[2]:%d\n", d[2]);

    int f[3];
    printf("f[0]:%d\n", f[0]);
    printf("f[1]:%d\n", f[1]);
    printf("f[2]:%d\n", f[2]);
}