///Week17-2.cpp step01-2 ��� �n�t�X while(�j��)
#include <stdio.h>
int main()
{
    int N=20030101;///���ӼƦr,�C�@�쳣��X��
    ///�l�� %10 �o��Ӧ��
    ///���k /10 �o�� 2003010

    while( N > 0 ){ ///�٦���? �~���
        printf("%d => %d %d\n", N, N/10, N%10); ///�ѤU�� �鱼��
        N = N / 10; ///�̭��n,��N���p  �鱼��
    }
}
